
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct task_struct {int dummy; } ;
struct path {int dentry; } ;
struct kstat {int nlink; } ;
struct inode {int dummy; } ;


 struct inode* FUNC_0 (int ) ;
 int FUNC_1 (struct inode*,struct kstat*) ;
 scalar_t__ FUNC_2 (struct task_struct*) ;
 struct task_struct* FUNC_3 (struct inode*) ;
 int FUNC_4 (struct task_struct*) ;

__attribute__((used)) static int FUNC_5(const struct path *VAR_0, struct kstat *VAR_1,
        u32 VAR_2, unsigned int VAR_3)
{
 struct inode *VAR_4 = FUNC_0(VAR_0->dentry);
 struct task_struct *VAR_5 = FUNC_3(VAR_4);
 FUNC_1(VAR_4, VAR_1);

 if (VAR_5) {
  VAR_1->nlink += FUNC_2(VAR_5);
  FUNC_4(VAR_5);
 }

 return 0;
}
