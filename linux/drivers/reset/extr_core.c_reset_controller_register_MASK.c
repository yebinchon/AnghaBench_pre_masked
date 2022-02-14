
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reset_controller_dev {int of_reset_n_cells; int list; int reset_control_head; scalar_t__ of_xlate; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_4(struct reset_controller_dev *VAR_3)
{
 if (!VAR_3->of_xlate) {
  VAR_3->of_reset_n_cells = 1;
  VAR_3->of_xlate = VAR_0;
 }

 FUNC_0(&VAR_3->reset_control_head);

 FUNC_2(&VAR_2);
 FUNC_1(&VAR_3->list, &VAR_1);
 FUNC_3(&VAR_2);

 return 0;
}
