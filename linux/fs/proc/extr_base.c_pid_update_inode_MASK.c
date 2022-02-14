
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct inode {int i_mode; int i_gid; int i_uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct task_struct*,struct inode*) ;
 int FUNC_1 (struct task_struct*,int,int *,int *) ;

void FUNC_2(struct task_struct *VAR_2, struct inode *VAR_3)
{
 FUNC_1(VAR_2, VAR_3->i_mode, &VAR_3->i_uid, &VAR_3->i_gid);

 VAR_3->i_mode &= ~(VAR_1 | VAR_0);
 FUNC_0(VAR_2, VAR_3);
}
