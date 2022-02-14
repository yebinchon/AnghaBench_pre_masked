
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_lock_list_struct {int lock; } ;
struct file_lock {int fl_link; int fl_link_cpu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 struct file_lock_list_struct* FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct file_lock *VAR_2)
{
 struct file_lock_list_struct *VAR_3;

 FUNC_3(&VAR_1);






 if (FUNC_1(&VAR_2->fl_link))
  return;

 VAR_3 = FUNC_2(&VAR_0, VAR_2->fl_link_cpu);
 FUNC_4(&VAR_3->lock);
 FUNC_0(&VAR_2->fl_link);
 FUNC_5(&VAR_3->lock);
}
