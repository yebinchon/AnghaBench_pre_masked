
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int u32 ;
struct iwl_trans_pcie_removal {int work; int pdev; } ;
struct iwl_trans_pcie {int reg_lock; scalar_t__ cmd_hold_nic_awake; } ;
struct iwl_trans {int dev; int status; TYPE_2__* trans_cfg; } ;
struct TYPE_6__ {scalar_t__ remove_when_gone; } ;
struct TYPE_5__ {scalar_t__ device_family; TYPE_1__* csr; } ;
struct TYPE_4__ {int flag_mac_clock_ready; int flag_val_mac_access_en; int flag_mac_access_req; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct iwl_trans*,char*) ;
 struct iwl_trans_pcie* FUNC_3 (struct iwl_trans*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int,char*,unsigned int) ;
 int FUNC_5 (struct iwl_trans*,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct iwl_trans*,int ,int,int,int) ;
 unsigned int FUNC_8 (struct iwl_trans*,int ) ;
 int FUNC_9 (struct iwl_trans*) ;
 int VAR_8 ;
 int FUNC_10 (struct iwl_trans*,int ,int ) ;
 TYPE_3__ VAR_9 ;
 struct iwl_trans_pcie_removal* FUNC_11 (int,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,int *) ;
 int FUNC_16 (int *,unsigned long) ;
 int FUNC_17 (int *,unsigned long) ;
 scalar_t__ FUNC_18 (int ,int *) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int) ;
 scalar_t__ FUNC_22 (int) ;

__attribute__((used)) static bool FUNC_23(struct iwl_trans *VAR_10,
        unsigned long *VAR_11)
{
 int VAR_12;
 struct iwl_trans_pcie *VAR_13 = FUNC_3(VAR_10);

 FUNC_16(&VAR_13->reg_lock, *VAR_11);

 if (VAR_13->cmd_hold_nic_awake)
  goto out;


 FUNC_5(VAR_10, VAR_0,
     FUNC_0(VAR_10->trans_cfg->csr->flag_mac_access_req));
 if (VAR_10->trans_cfg->device_family >= VAR_5)
  FUNC_21(2);
 VAR_12 = FUNC_7(VAR_10, VAR_0,
      FUNC_0(VAR_10->trans_cfg->csr->flag_val_mac_access_en),
      (FUNC_0(VAR_10->trans_cfg->csr->flag_mac_clock_ready) |
       VAR_1), 15000);
 if (FUNC_22(VAR_12 < 0)) {
  u32 VAR_14 = FUNC_8(VAR_10, VAR_0);

  FUNC_4(1,
     "Timeout waiting for hardware access (CSR_GP_CNTRL 0x%08x)\n",
     VAR_14);

  FUNC_9(VAR_10);

  if (VAR_9.remove_when_gone && VAR_14 == ~0U) {
   struct iwl_trans_pcie_removal *VAR_15;

   if (FUNC_18(VAR_6, &VAR_10->status))
    goto err;

   FUNC_2(VAR_10, "Device gone - scheduling removal!\n");







   if (!FUNC_20(VAR_7)) {
    FUNC_2(VAR_10,
     "Module is being unloaded - abort\n");
    goto err;
   }

   VAR_15 = FUNC_11(sizeof(*VAR_15), VAR_4);
   if (!VAR_15) {
    FUNC_12(VAR_7);
    goto err;
   }




   FUNC_15(VAR_6, &VAR_10->status);

   VAR_15->pdev = FUNC_19(VAR_10->dev);
   FUNC_1(&VAR_15->work, VAR_8);
   FUNC_13(VAR_15->pdev);
   FUNC_14(&VAR_15->work);
  } else {
   FUNC_10(VAR_10, VAR_2,
        VAR_3);
  }

err:
  FUNC_17(&VAR_13->reg_lock, *VAR_11);
  return 0;
 }

out:




 FUNC_6(&VAR_13->reg_lock);
 return 1;
}
