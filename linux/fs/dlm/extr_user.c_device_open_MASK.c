
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct dlm_user_proc* private_data; } ;
struct dlm_user_proc {int wait; int locks_spin; int asts_spin; int unlocking; int locks; int asts; int lockspace; } ;
struct dlm_ls {int ls_local_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct dlm_ls* FUNC_1 (int ) ;
 int FUNC_2 (struct dlm_ls*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (int *) ;
 struct dlm_user_proc* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_3, struct file *VAR_4)
{
 struct dlm_user_proc *VAR_5;
 struct dlm_ls *VAR_6;

 VAR_6 = FUNC_1(FUNC_3(VAR_3));
 if (!VAR_6)
  return -VAR_0;

 VAR_5 = FUNC_5(sizeof(struct dlm_user_proc), VAR_2);
 if (!VAR_5) {
  FUNC_2(VAR_6);
  return -VAR_1;
 }

 VAR_5->lockspace = VAR_6->ls_local_handle;
 FUNC_0(&VAR_5->asts);
 FUNC_0(&VAR_5->locks);
 FUNC_0(&VAR_5->unlocking);
 FUNC_6(&VAR_5->asts_spin);
 FUNC_6(&VAR_5->locks_spin);
 FUNC_4(&VAR_5->wait);
 VAR_4->private_data = VAR_5;

 return 0;
}
