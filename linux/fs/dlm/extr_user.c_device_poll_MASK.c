
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct dlm_user_proc* private_data; } ;
struct dlm_user_proc {int asts_spin; int asts; int wait; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct file*,int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static __poll_t FUNC_4(struct file *VAR_2, poll_table *VAR_3)
{
 struct dlm_user_proc *VAR_4 = VAR_2->private_data;

 FUNC_1(VAR_2, &VAR_4->wait, VAR_3);

 FUNC_2(&VAR_4->asts_spin);
 if (!FUNC_0(&VAR_4->asts)) {
  FUNC_3(&VAR_4->asts_spin);
  return VAR_0 | VAR_1;
 }
 FUNC_3(&VAR_4->asts_spin);
 return 0;
}
