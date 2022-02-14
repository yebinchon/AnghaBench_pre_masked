
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int txpower_tracking; int txpower_track_control; int* ofdm_index; int cck_index; int swing_idx_cck_base; int* swing_idx_ofdm_base; scalar_t__* power_index_offset; scalar_t__* delta_power_index_last; scalar_t__* delta_power_index; scalar_t__ thermalvalue; } ;
struct rtl_priv {TYPE_1__ dm; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_1(VAR_3);

 VAR_4->dm.txpower_tracking = 1;
 VAR_4->dm.txpower_track_control = 1;
 VAR_4->dm.thermalvalue = 0;

 VAR_4->dm.ofdm_index[0] = 30;
 VAR_4->dm.cck_index = 20;

 VAR_4->dm.swing_idx_cck_base = VAR_4->dm.cck_index;

 VAR_4->dm.swing_idx_ofdm_base[0] = VAR_4->dm.ofdm_index[0];
 VAR_4->dm.delta_power_index[VAR_2] = 0;
 VAR_4->dm.delta_power_index_last[VAR_2] = 0;
 VAR_4->dm.power_index_offset[VAR_2] = 0;

 FUNC_0(VAR_4, VAR_0, VAR_1,
   "  rtlpriv->dm.txpower_tracking = %d\n",
    VAR_4->dm.txpower_tracking);
}
