
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcn36xx {int hal_ind_lock; int hal_ind_queue; int hal_ind_work; int hal_ind_wq; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;

int FUNC_4(struct wcn36xx *VAR_2)
{
 VAR_2->hal_ind_wq = FUNC_2("wcn36xx_smd_ind");
 if (!VAR_2->hal_ind_wq)
  return -VAR_0;

 FUNC_1(&VAR_2->hal_ind_work, VAR_1);
 FUNC_0(&VAR_2->hal_ind_queue);
 FUNC_3(&VAR_2->hal_ind_lock);

 return 0;
}
