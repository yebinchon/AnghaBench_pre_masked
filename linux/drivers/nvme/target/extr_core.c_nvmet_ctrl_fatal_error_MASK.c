
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_ctrl {int csts; int lock; int fatal_err_work; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct nvmet_ctrl *VAR_1)
{
 FUNC_0(&VAR_1->lock);
 if (!(VAR_1->csts & VAR_0)) {
  VAR_1->csts |= VAR_0;
  FUNC_2(&VAR_1->fatal_err_work);
 }
 FUNC_1(&VAR_1->lock);
}
