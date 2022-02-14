
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_ctrl {int ana_work; int anatt_timer; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nvme_ctrl*) ;

void FUNC_3(struct nvme_ctrl *VAR_0)
{
 if (!FUNC_2(VAR_0))
  return;
 FUNC_1(&VAR_0->anatt_timer);
 FUNC_0(&VAR_0->ana_work);
}
