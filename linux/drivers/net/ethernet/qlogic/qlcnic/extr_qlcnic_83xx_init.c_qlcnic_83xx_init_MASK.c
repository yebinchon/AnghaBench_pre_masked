
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qlcnic_hardware_context {int msix_supported; int run_post; int * mailbox; int post_mode; } ;
struct TYPE_6__ {int work; } ;
struct qlcnic_adapter {int rx_mac_learn; TYPE_3__ fw_work; TYPE_2__* nic_ops; int dcb; int idc_aen_work; TYPE_1__* pdev; struct qlcnic_hardware_context* ahw; } ;
struct TYPE_5__ {int (* init_driver ) (struct qlcnic_adapter*) ;} ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct qlcnic_adapter*) ;
 int FUNC_3 (struct qlcnic_adapter*) ;
 int FUNC_4 (struct qlcnic_adapter*) ;
 int FUNC_5 (struct qlcnic_adapter*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct qlcnic_adapter*) ;
 int FUNC_8 (struct qlcnic_adapter*) ;
 int VAR_4 ;
 int FUNC_9 (struct qlcnic_adapter*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct qlcnic_adapter*) ;
 int FUNC_12 (struct qlcnic_adapter*) ;
 int FUNC_13 (struct qlcnic_adapter*,int) ;
 scalar_t__ FUNC_14 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_15 (struct qlcnic_adapter*) ;
 int FUNC_16 (struct qlcnic_adapter*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int VAR_5 ;
 int FUNC_19 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_20 (struct qlcnic_adapter*) ;
 int FUNC_21 (struct qlcnic_adapter*,int) ;
 int FUNC_22 (struct qlcnic_adapter*) ;
 int VAR_6 ;
 int FUNC_23 (struct qlcnic_adapter*) ;

int FUNC_24(struct qlcnic_adapter *VAR_7, int VAR_8)
{
 struct qlcnic_hardware_context *VAR_9 = VAR_7->ahw;
 int VAR_10 = 0;

 VAR_7->rx_mac_learn = 0;
 VAR_9->msix_supported = !!VAR_6;


 switch (VAR_5) {
 case 2:
  VAR_9->post_mode = VAR_1;
  VAR_9->run_post = 1;
  break;
 case 3:
  VAR_9->post_mode = VAR_2;
  VAR_9->run_post = 1;
  break;
 case 4:
  VAR_9->post_mode = VAR_3;
  VAR_9->run_post = 1;
  break;
 default:
  VAR_9->run_post = 0;
  break;
 }

 FUNC_12(VAR_7);

 VAR_10 = FUNC_11(VAR_7);
 if (VAR_10)
  goto exit;

 if (FUNC_20(VAR_7)) {
  VAR_10 = FUNC_21(VAR_7, VAR_8);
  if (VAR_10)
   goto detach_mbx;
  else
   return VAR_10;
 }

 if (FUNC_14(VAR_7) ||
     FUNC_15(VAR_7)) {
  FUNC_1(&VAR_7->pdev->dev, "Failed reading flash mfg id\n");
  VAR_10 = -VAR_0;
  goto detach_mbx;
 }

 VAR_10 = FUNC_2(VAR_7);
 if (VAR_10)
  goto detach_mbx;

 VAR_10 = FUNC_8(VAR_7);
 if (VAR_10)
  goto detach_mbx;

 VAR_10 = FUNC_9(VAR_7);
 if (VAR_10)
  goto detach_mbx;

 VAR_10 = FUNC_19(VAR_7);
 if (VAR_10) {
  FUNC_1(&VAR_7->pdev->dev, "Failed to setup interrupt\n");
  goto disable_intr;
 }

 FUNC_0(&VAR_7->idc_aen_work, VAR_4);

 VAR_10 = FUNC_16(VAR_7);
 if (VAR_10)
  goto disable_mbx_intr;

 FUNC_3(VAR_7);
 FUNC_17(VAR_7->dcb);
 FUNC_13(VAR_7, 1);
 FUNC_18(VAR_7->dcb);


 VAR_10 = FUNC_4(VAR_7);
 if (VAR_10)
  goto disable_mbx_intr;



 VAR_10 = VAR_7->nic_ops->init_driver(VAR_7);
 if (VAR_10)
  goto disable_mbx_intr;


 FUNC_10(&VAR_7->fw_work.work);
 return 0;

disable_mbx_intr:
 FUNC_7(VAR_7);

disable_intr:
 FUNC_22(VAR_7);

detach_mbx:
 FUNC_5(VAR_7);
 FUNC_6(VAR_9->mailbox);
 VAR_9->mailbox = ((void*)0);
exit:
 return VAR_10;
}
