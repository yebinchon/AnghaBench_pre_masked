
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_ctrl {int device; int cdev; int fault_inject; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct nvme_ctrl *VAR_0)
{
 FUNC_2(&VAR_0->fault_inject);
 FUNC_1(VAR_0->device);
 FUNC_0(&VAR_0->cdev, VAR_0->device);
}
