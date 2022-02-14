
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct qlcnic_adapter {TYPE_2__* ahw; TYPE_3__* netdev; TYPE_4__* pdev; int vf_mc_list; int flags; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_7__ {int name; } ;
struct TYPE_5__ {int delay; } ;
struct TYPE_6__ {int total_nic_func; TYPE_1__ idc; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct qlcnic_adapter*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (TYPE_4__*,struct qlcnic_adapter*) ;
 int FUNC_6 (struct qlcnic_adapter*) ;
 int FUNC_7 (struct qlcnic_adapter*) ;
 int FUNC_8 (struct qlcnic_adapter*,int ,int ) ;
 int FUNC_9 (struct qlcnic_adapter*,int ) ;
 int FUNC_10 (struct qlcnic_adapter*,int ) ;
 int FUNC_11 (struct qlcnic_adapter*) ;
 int FUNC_12 (struct qlcnic_adapter*,TYPE_3__*,int) ;
 int FUNC_13 (struct qlcnic_adapter*,int) ;
 int FUNC_14 (struct qlcnic_adapter*,int ) ;
 int FUNC_15 (struct qlcnic_adapter*) ;
 int FUNC_16 (struct qlcnic_adapter*,int) ;
 int FUNC_17 (struct qlcnic_adapter*) ;
 int VAR_4 ;
 int FUNC_18 (struct qlcnic_adapter*) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_19(struct qlcnic_adapter *VAR_7,
     int VAR_8)
{
 int VAR_9;

 VAR_7->flags |= VAR_3;
 VAR_7->ahw->total_nic_func = 1;
 FUNC_0(&VAR_7->vf_mc_list);
 if (!VAR_6 && !!VAR_5)
  FUNC_4(&VAR_7->pdev->dev,
    "Device does not support MSI interrupts\n");


 FUNC_10(VAR_7, VAR_2);
 FUNC_9(VAR_7, VAR_2);

 VAR_9 = FUNC_11(VAR_7);
 if (VAR_9) {
  FUNC_2(&VAR_7->pdev->dev, "Failed to setup interrupt\n");
  goto err_out_disable_msi;
 }

 VAR_9 = FUNC_7(VAR_7);
 if (VAR_9)
  goto err_out_disable_msi;

 VAR_9 = FUNC_16(VAR_7, 1);
 if (VAR_9)
  goto err_out_disable_mbx_intr;

 VAR_9 = FUNC_13(VAR_7, 1);
 if (VAR_9)
  goto err_out_cleanup_sriov;

 VAR_9 = FUNC_14(VAR_7, VAR_0);
 if (VAR_9)
  goto err_out_disable_bc_intr;

 VAR_9 = FUNC_17(VAR_7);
 if (VAR_9)
  goto err_out_send_channel_term;

 VAR_9 = FUNC_15(VAR_7);
 if (VAR_9)
  goto err_out_send_channel_term;

 VAR_9 = FUNC_12(VAR_7, VAR_7->netdev, VAR_8);
 if (VAR_9)
  goto err_out_send_channel_term;

 FUNC_5(VAR_7->pdev, VAR_7);
 FUNC_3(&VAR_7->pdev->dev, "%s: XGbE port initialized\n",
   VAR_7->netdev->name);

 FUNC_8(VAR_7, VAR_4,
        VAR_7->ahw->idc.delay);
 return 0;

err_out_send_channel_term:
 FUNC_14(VAR_7, VAR_1);

err_out_disable_bc_intr:
 FUNC_13(VAR_7, 0);

err_out_cleanup_sriov:
 FUNC_1(VAR_7);

err_out_disable_mbx_intr:
 FUNC_6(VAR_7);

err_out_disable_msi:
 FUNC_18(VAR_7);
 return VAR_9;
}
