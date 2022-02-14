
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_ctrl {int fw_act_work; int async_event_work; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nvme_ctrl*) ;
 int FUNC_3 (struct nvme_ctrl*) ;

void FUNC_4(struct nvme_ctrl *VAR_0)
{
 FUNC_2(VAR_0);
 FUNC_3(VAR_0);
 FUNC_1(&VAR_0->async_event_work);
 FUNC_0(&VAR_0->fw_act_work);
}
