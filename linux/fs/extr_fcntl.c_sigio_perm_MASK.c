
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct fown_struct {int uid; int euid; } ;
struct cred {int uid; int suid; } ;


 int VAR_0 ;
 struct cred* FUNC_0 (struct task_struct*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct task_struct*,struct fown_struct*,int) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static inline int FUNC_5(struct task_struct *VAR_1,
                             struct fown_struct *VAR_2, int VAR_3)
{
 const struct cred *VAR_4;
 int VAR_5;

 FUNC_1();
 VAR_4 = FUNC_0(VAR_1);
 VAR_5 = ((FUNC_4(VAR_2->euid, VAR_0) ||
  FUNC_4(VAR_2->euid, VAR_4->suid) || FUNC_4(VAR_2->euid, VAR_4->uid) ||
  FUNC_4(VAR_2->uid, VAR_4->suid) || FUNC_4(VAR_2->uid, VAR_4->uid)) &&
        !FUNC_3(VAR_1, VAR_2, VAR_3));
 FUNC_2();
 return VAR_5;
}
