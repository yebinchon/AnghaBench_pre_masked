
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct workqueue_struct {int dummy; } ;
struct qlcnic_back_channel {struct workqueue_struct* bc_flr_wq; } ;
struct qlcnic_adapter {TYPE_3__* pdev; TYPE_2__* ahw; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {TYPE_1__* sriov; } ;
struct TYPE_4__ {struct qlcnic_back_channel bc; } ;


 int VAR_0 ;
 struct workqueue_struct* FUNC_0 (char*) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static int FUNC_2(struct qlcnic_adapter *VAR_1)
{
 struct qlcnic_back_channel *VAR_2 = &VAR_1->ahw->sriov->bc;
 struct workqueue_struct *VAR_3;

 VAR_3 = FUNC_0("qlcnic-flr");
 if (VAR_3 == ((void*)0)) {
  FUNC_1(&VAR_1->pdev->dev, "Cannot create FLR workqueue\n");
  return -VAR_0;
 }

 VAR_2->bc_flr_wq = VAR_3;
 return 0;
}
