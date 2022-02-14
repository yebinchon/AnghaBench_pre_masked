
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct il_priv {int disable_tx_power_cal; int disable_chain_noise_cal; TYPE_3__* cfg; int disable_sens_cal; struct dentry* debugfs_dir; TYPE_2__* hw; } ;
struct dentry {int dummy; } ;
struct TYPE_6__ {scalar_t__ chain_noise_calib_by_driver; scalar_t__ sensitivity_calib_by_driver; } ;
struct TYPE_5__ {TYPE_1__* wiphy; } ;
struct TYPE_4__ {struct dentry* debugfsdir; } ;


 int FUNC_0 (int ,struct dentry*,int *) ;
 int FUNC_1 (int ,struct dentry*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct dentry* FUNC_2 (char const*,struct dentry*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;

void
FUNC_3(struct il_priv *VAR_29, const char *VAR_30)
{
 struct dentry *VAR_31 = VAR_29->hw->wiphy->debugfsdir;
 struct dentry *VAR_32, *VAR_33, *VAR_34, *VAR_35;

 VAR_32 = FUNC_2(VAR_30, VAR_31);
 VAR_29->debugfs_dir = VAR_32;

 VAR_33 = FUNC_2("data", VAR_32);
 VAR_34 = FUNC_2("rf", VAR_32);
 VAR_35 = FUNC_2("debug", VAR_32);

 FUNC_1(VAR_12, VAR_33, 0400);
 FUNC_1(VAR_20, VAR_33, 0600);
 FUNC_1(VAR_21, VAR_33, 0400);
 FUNC_1(VAR_1, VAR_33, 0400);
 FUNC_1(VAR_22, VAR_33, 0400);
 FUNC_1(VAR_10, VAR_33, 0600);
 FUNC_1(VAR_14, VAR_33, 0400);
 FUNC_1(VAR_5, VAR_33, 0600);
 FUNC_1(VAR_16, VAR_35, 0400);
 FUNC_1(VAR_24, VAR_35, 0400);
 FUNC_1(VAR_15, VAR_35, 0400);
 FUNC_1(VAR_23, VAR_35, 0400);
 FUNC_1(VAR_13, VAR_35, 0400);
 FUNC_1(VAR_3, VAR_35, 0200);
 FUNC_1(VAR_2, VAR_35, 0200);
 FUNC_1(VAR_8, VAR_35, 0400);
 FUNC_1(VAR_11, VAR_35, 0200);
 FUNC_1(VAR_9, VAR_35, 0600);
 FUNC_1(VAR_26, VAR_35, 0400);
 FUNC_1(VAR_27, VAR_35, 0400);
 FUNC_1(VAR_25, VAR_35, 0400);

 if (VAR_29->cfg->sensitivity_calib_by_driver)
  FUNC_1(VAR_19, VAR_35, 0400);
 if (VAR_29->cfg->chain_noise_calib_by_driver)
  FUNC_1(VAR_0, VAR_35, 0400);
 FUNC_1(VAR_18, VAR_35, 0200);
 FUNC_1(VAR_17, VAR_35, 0200);
 FUNC_1(VAR_28, VAR_35, 0200);
 if (VAR_29->cfg->sensitivity_calib_by_driver)
  FUNC_0(VAR_6, VAR_34,
     &VAR_29->disable_sens_cal);
 if (VAR_29->cfg->chain_noise_calib_by_driver)
  FUNC_0(VAR_4, VAR_34,
     &VAR_29->disable_chain_noise_cal);
 FUNC_0(VAR_7, VAR_34, &VAR_29->disable_tx_power_cal);
}
