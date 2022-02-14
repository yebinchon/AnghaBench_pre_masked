
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qlcnic_dcb_mbx_params {int dummy; } ;
struct qlcnic_dcb_cfg {int dummy; } ;
struct qlcnic_dcb {int * wq; int * cfg; void* param; TYPE_2__* adapter; int aen_work; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int * FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (int,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(struct qlcnic_dcb *VAR_3)
{
 int VAR_4 = 0;

 FUNC_0(&VAR_3->aen_work, VAR_2);

 VAR_3->wq = FUNC_1("qlcnic-dcb");
 if (!VAR_3->wq) {
  FUNC_3(&VAR_3->adapter->pdev->dev,
   "DCB workqueue allocation failed. DCB will be disabled\n");
  return -1;
 }

 VAR_3->cfg = FUNC_5(sizeof(struct qlcnic_dcb_cfg), VAR_1);
 if (!VAR_3->cfg) {
  VAR_4 = -VAR_0;
  goto out_free_wq;
 }

 VAR_3->param = FUNC_5(sizeof(struct qlcnic_dcb_mbx_params), VAR_1);
 if (!VAR_3->param) {
  VAR_4 = -VAR_0;
  goto out_free_cfg;
 }

 return 0;
out_free_cfg:
 FUNC_4(VAR_3->cfg);
 VAR_3->cfg = ((void*)0);

out_free_wq:
 FUNC_2(VAR_3->wq);
 VAR_3->wq = ((void*)0);

 return VAR_4;
}
