
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int txpower_tracking; int txpower_trackinginit; int txpower_track_control; int* swing_idx_ofdm; int swing_idx_ofdm_cur; int swing_flag_ofdm; scalar_t__ txpowercount; } ;
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
 VAR_4->dm.txpower_trackinginit = 0;
 VAR_4->dm.txpowercount = 0;
 VAR_4->dm.txpower_track_control = 1;

 VAR_4->dm.swing_idx_ofdm[VAR_2] = 12;
 VAR_4->dm.swing_idx_ofdm_cur = 12;
 VAR_4->dm.swing_flag_ofdm = 0;
 FUNC_0(VAR_4, VAR_0, VAR_1,
   "rtlpriv->dm.txpower_tracking = %d\n",
   VAR_4->dm.txpower_tracking);
}
