
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ supp_phymode_switch; } ;
struct TYPE_4__ {scalar_t__ disable_amsdu_8k; } ;
struct rtl_phy {int dummy; } ;
struct rtl_priv {TYPE_2__ dm; TYPE_1__ rtlhal; struct rtl_phy phy; } ;
struct TYPE_6__ {int* rx_mask; void* rx_highest; int tx_params; } ;
struct ieee80211_sta_ht_cap {int ht_supported; int cap; TYPE_3__ mcs; int ampdu_density; int ampdu_factor; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 void* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct rtl_phy*) ;
 int FUNC_3 (char*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_15,
      struct ieee80211_sta_ht_cap *VAR_16)
{
 struct rtl_priv *VAR_17 = FUNC_4(VAR_15);
 struct rtl_phy *VAR_18 = &(VAR_17->phy);

 VAR_16->ht_supported = 1;
 VAR_16->cap = VAR_6 |
     VAR_5 |
     VAR_4 |
     VAR_2 | VAR_3;

 if (VAR_17->rtlhal.disable_amsdu_8k)
  VAR_16->cap &= ~VAR_3;





 VAR_16->ampdu_factor = VAR_7;


 VAR_16->ampdu_density = VAR_9;

 VAR_16->mcs.tx_params = VAR_8;
 if (VAR_17->dm.supp_phymode_switch) {
  FUNC_3("Support phy mode switch\n");

  VAR_16->mcs.rx_mask[0] = 0xFF;
  VAR_16->mcs.rx_mask[1] = 0xFF;
  VAR_16->mcs.rx_mask[4] = 0x01;

  VAR_16->mcs.rx_highest = FUNC_1(VAR_10);
 } else {
  if (FUNC_2(VAR_18) == VAR_13 ||
      FUNC_2(VAR_18) == VAR_14) {
   FUNC_0(VAR_17, VAR_0, VAR_1,
     "1T2R or 2T2R\n");
   VAR_16->mcs.rx_mask[0] = 0xFF;
   VAR_16->mcs.rx_mask[1] = 0xFF;
   VAR_16->mcs.rx_mask[4] = 0x01;

   VAR_16->mcs.rx_highest =
     FUNC_1(VAR_10);
  } else if (FUNC_2(VAR_18) == VAR_12) {
   FUNC_0(VAR_17, VAR_0, VAR_1, "1T1R\n");

   VAR_16->mcs.rx_mask[0] = 0xFF;
   VAR_16->mcs.rx_mask[1] = 0x00;
   VAR_16->mcs.rx_mask[4] = 0x01;

   VAR_16->mcs.rx_highest =
     FUNC_1(VAR_11);
  }
 }
}
