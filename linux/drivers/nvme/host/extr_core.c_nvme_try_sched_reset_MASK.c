
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_ctrl {scalar_t__ state; int reset_work; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;

int FUNC_1(struct nvme_ctrl *VAR_3)
{
 if (VAR_3->state != VAR_1)
  return -VAR_0;
 if (!FUNC_0(VAR_2, &VAR_3->reset_work))
  return -VAR_0;
 return 0;
}
