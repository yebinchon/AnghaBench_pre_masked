
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xgbe_prv_data {int debugfs_xpcs_mmd; int debugfs_an_cdr_track_early; int xgbe_debugfs; int debugfs_an_cdr_workaround; TYPE_2__* vdata; scalar_t__ xi2c_regs; scalar_t__ xprop_regs; TYPE_1__* netdev; scalar_t__ debugfs_xpcs_reg; scalar_t__ debugfs_xgmac_reg; } ;
struct TYPE_4__ {scalar_t__ an_cdr_workaround; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int ,int *) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (char*,int,int ,struct xgbe_prv_data*,int *) ;
 char* FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

void FUNC_5(struct xgbe_prv_data *VAR_10)
{
 char *VAR_11;


 VAR_10->debugfs_xgmac_reg = 0;
 VAR_10->debugfs_xpcs_mmd = 1;
 VAR_10->debugfs_xpcs_reg = 0;

 VAR_11 = FUNC_3(VAR_0, "amd-xgbe-%s", VAR_10->netdev->name);
 if (!VAR_11)
  return;

 VAR_10->xgbe_debugfs = FUNC_1(VAR_11, ((void*)0));

 FUNC_2("xgmac_register", 0600, VAR_10->xgbe_debugfs, VAR_10,
       &VAR_1);

 FUNC_2("xgmac_register_value", 0600, VAR_10->xgbe_debugfs,
       VAR_10, &VAR_2);

 FUNC_2("xpcs_mmd", 0600, VAR_10->xgbe_debugfs, VAR_10,
       &VAR_5);

 FUNC_2("xpcs_register", 0600, VAR_10->xgbe_debugfs, VAR_10,
       &VAR_6);

 FUNC_2("xpcs_register_value", 0600, VAR_10->xgbe_debugfs,
       VAR_10, &VAR_7);

 if (VAR_10->xprop_regs) {
  FUNC_2("xprop_register", 0600, VAR_10->xgbe_debugfs,
        VAR_10, &VAR_8);

  FUNC_2("xprop_register_value", 0600,
        VAR_10->xgbe_debugfs, VAR_10,
        &VAR_9);
 }

 if (VAR_10->xi2c_regs) {
  FUNC_2("xi2c_register", 0600, VAR_10->xgbe_debugfs,
        VAR_10, &VAR_3);

  FUNC_2("xi2c_register_value", 0600,
        VAR_10->xgbe_debugfs, VAR_10,
        &VAR_4);
 }

 if (VAR_10->vdata->an_cdr_workaround) {
  FUNC_0("an_cdr_workaround", 0600,
        VAR_10->xgbe_debugfs,
        &VAR_10->debugfs_an_cdr_workaround);

  FUNC_0("an_cdr_track_early", 0600,
        VAR_10->xgbe_debugfs,
        &VAR_10->debugfs_an_cdr_track_early);
 }

 FUNC_4(VAR_11);
}
