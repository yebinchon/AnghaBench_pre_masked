
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_ctrl {int queue_count; scalar_t__ kato; } ;


 int FUNC_0 (struct nvme_ctrl*) ;
 int FUNC_1 (struct nvme_ctrl*) ;
 int FUNC_2 (struct nvme_ctrl*) ;
 int FUNC_3 (struct nvme_ctrl*) ;

void FUNC_4(struct nvme_ctrl *VAR_0)
{
 if (VAR_0->kato)
  FUNC_2(VAR_0);

 FUNC_0(VAR_0);

 if (VAR_0->queue_count > 1) {
  FUNC_1(VAR_0);
  FUNC_3(VAR_0);
 }
}
