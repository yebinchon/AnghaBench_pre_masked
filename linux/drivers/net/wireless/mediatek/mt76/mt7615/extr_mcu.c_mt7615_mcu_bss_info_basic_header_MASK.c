
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mt7615_vif {int wmm_idx; } ;
struct TYPE_2__ {int beacon_int; int dtim_period; int bssid; } ;
struct ieee80211_vif {TYPE_1__ bss_conf; scalar_t__ drv_priv; } ;
struct bss_info_basic {int active; int bmc_tx_wlan_idx; int dtim_period; int wmm_idx; int bssid; void* bcn_interval; int network_type; void* len; void* tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct ieee80211_vif *VAR_2, u8 *VAR_3,
     u32 VAR_4, u8 VAR_5,
     bool VAR_6)
{
 struct mt7615_vif *VAR_7 = (struct mt7615_vif *)VAR_2->drv_priv;
 struct bss_info_basic *VAR_8 = (struct bss_info_basic *)VAR_3;

 VAR_8->tag = FUNC_0(VAR_0);
 VAR_8->len = FUNC_0(sizeof(struct bss_info_basic));
 VAR_8->network_type = FUNC_1(VAR_4);
 VAR_8->active = VAR_6;
 VAR_8->bcn_interval = FUNC_0(VAR_2->bss_conf.beacon_int);
 FUNC_2(VAR_8->bssid, VAR_2->bss_conf.bssid, VAR_1);
 VAR_8->wmm_idx = VAR_7->wmm_idx;
 VAR_8->dtim_period = VAR_2->bss_conf.dtim_period;
 VAR_8->bmc_tx_wlan_idx = VAR_5;
}
