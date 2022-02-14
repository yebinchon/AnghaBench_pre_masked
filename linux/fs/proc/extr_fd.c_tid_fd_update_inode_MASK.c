
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct inode {unsigned int i_mode; int i_gid; int i_uid; } ;
typedef int fmode_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_1 (struct task_struct*,struct inode*) ;
 int FUNC_2 (struct task_struct*,int ,int *,int *) ;

__attribute__((used)) static void FUNC_3(struct task_struct *VAR_6, struct inode *VAR_7,
    fmode_t VAR_8)
{
 FUNC_2(VAR_6, 0, &VAR_7->i_uid, &VAR_7->i_gid);

 if (FUNC_0(VAR_7->i_mode)) {
  unsigned VAR_9 = VAR_2;
  if (VAR_8 & VAR_0)
   VAR_9 |= VAR_3 | VAR_5;
  if (VAR_8 & VAR_1)
   VAR_9 |= VAR_4 | VAR_5;
  VAR_7->i_mode = VAR_9;
 }
 FUNC_1(VAR_6, VAR_7);
}
