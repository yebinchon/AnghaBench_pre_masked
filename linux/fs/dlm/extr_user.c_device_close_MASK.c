
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct dlm_user_proc* private_data; } ;
struct dlm_user_proc {int flags; int lockspace; } ;
struct dlm_ls {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dlm_ls*,struct dlm_user_proc*) ;
 struct dlm_ls* FUNC_1 (int ) ;
 int FUNC_2 (struct dlm_ls*) ;
 int FUNC_3 (struct dlm_user_proc*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_2, struct file *VAR_3)
{
 struct dlm_user_proc *VAR_4 = VAR_3->private_data;
 struct dlm_ls *VAR_5;

 VAR_5 = FUNC_1(VAR_4->lockspace);
 if (!VAR_5)
  return -VAR_1;

 FUNC_4(VAR_0, &VAR_4->flags);

 FUNC_0(VAR_5, VAR_4);





 FUNC_3(VAR_4);
 VAR_3->private_data = ((void*)0);

 FUNC_2(VAR_5);
 FUNC_2(VAR_5);




 return 0;
}
