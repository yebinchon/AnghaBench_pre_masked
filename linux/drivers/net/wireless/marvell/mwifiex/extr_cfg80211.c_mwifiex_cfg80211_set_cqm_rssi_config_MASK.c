
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct mwifiex_private {scalar_t__ cqm_rssi_hyst; scalar_t__ cqm_rssi_thold; } ;
struct TYPE_4__ {int evt_freq; void* abs_value; } ;
struct TYPE_3__ {int evt_freq; void* abs_value; } ;
struct mwifiex_ds_misc_subsc_evt {int events; int action; TYPE_2__ bcn_h_rssi_cfg; TYPE_1__ bcn_l_rssi_cfg; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct mwifiex_ds_misc_subsc_evt*,int,int) ;
 struct mwifiex_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct mwifiex_private*,int ,int ,int ,struct mwifiex_ds_misc_subsc_evt*,int) ;

__attribute__((used)) static int FUNC_4(struct wiphy *VAR_5,
      struct net_device *VAR_6,
      s32 VAR_7, u32 VAR_8)
{
 struct mwifiex_private *VAR_9 = FUNC_2(VAR_6);
 struct mwifiex_ds_misc_subsc_evt VAR_10;

 VAR_9->cqm_rssi_thold = VAR_7;
 VAR_9->cqm_rssi_hyst = VAR_8;

 FUNC_1(&VAR_10, 0x00, sizeof(struct mwifiex_ds_misc_subsc_evt));
 VAR_10.events = VAR_1 | VAR_0;


 if (VAR_7 && VAR_8) {
  VAR_10.action = VAR_3;
  VAR_10.bcn_l_rssi_cfg.abs_value = FUNC_0(VAR_7);
  VAR_10.bcn_h_rssi_cfg.abs_value = FUNC_0(VAR_7);
  VAR_10.bcn_l_rssi_cfg.evt_freq = 1;
  VAR_10.bcn_h_rssi_cfg.evt_freq = 1;
  return FUNC_3(VAR_9,
     VAR_4,
     0, 0, &VAR_10, 1);
 } else {
  VAR_10.action = VAR_2;
  return FUNC_3(VAR_9,
     VAR_4,
     0, 0, &VAR_10, 1);
 }

 return 0;
}
