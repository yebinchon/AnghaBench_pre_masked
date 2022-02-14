
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_ctrl {int reset_work; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nvme_ctrl*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;

int FUNC_2(struct nvme_ctrl *VAR_3)
{
 if (!FUNC_0(VAR_3, VAR_1))
  return -VAR_0;
 if (!FUNC_1(VAR_2, &VAR_3->reset_work))
  return -VAR_0;
 return 0;
}
