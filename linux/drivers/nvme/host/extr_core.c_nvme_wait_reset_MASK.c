
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_ctrl {scalar_t__ state; int state_wq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct nvme_ctrl*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct nvme_ctrl*) ;
 int FUNC_2 (int ,int) ;

bool FUNC_3(struct nvme_ctrl *VAR_1)
{
 FUNC_2(VAR_1->state_wq,
     FUNC_0(VAR_1, VAR_0) ||
     FUNC_1(VAR_1));
 return VAR_1->state == VAR_0;
}
