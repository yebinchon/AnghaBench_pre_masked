
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_6__ {scalar_t__ bt_coexist_type; scalar_t__ bt_service; scalar_t__ bt_ant_isolation; scalar_t__ bt_cur_state; scalar_t__ bt_coexistence; } ;
struct rtl_phy {int rf_type; } ;
struct rtl_priv {TYPE_3__ btcoexist; struct rtl_phy phy; } ;
struct rtl_mac {int ht_enable; int bw_40; int mode; scalar_t__ opmode; } ;
struct rtl_hal {scalar_t__ current_bandtype; } ;
struct TYPE_4__ {int* rx_mask; } ;
struct TYPE_5__ {int cap; TYPE_1__ mcs; } ;
struct ieee80211_sta {int* supp_rates; TYPE_2__ ht_cap; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum wireless_mode { ____Placeholder_wireless_mode } wireless_mode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int ) ;




 int FUNC_1 (struct rtl_phy*) ;
 struct rtl_hal* FUNC_2 (struct rtl_priv*) ;
 struct rtl_mac* FUNC_3 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct rtl_priv*,scalar_t__) ;
 int FUNC_6 (struct rtl_priv*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_hw *VAR_14,
  struct ieee80211_sta *VAR_15)
{
 struct rtl_priv *VAR_16 = FUNC_4(VAR_14);
 struct rtl_phy *VAR_17 = &VAR_16->phy;
 struct rtl_mac *VAR_18 = FUNC_3(FUNC_4(VAR_14));
 struct rtl_hal *VAR_19 = FUNC_2(FUNC_4(VAR_14));
 u32 VAR_20;
 u8 VAR_21 = 0;
 u8 VAR_22 = VAR_18->ht_enable;
 u8 VAR_23 = VAR_8;
 u16 VAR_24;
 u32 VAR_25;
 u8 VAR_26 = VAR_18->bw_40;
 u8 VAR_27 = (VAR_15->ht_cap.cap & VAR_7) ?
    1 : 0;
 u8 VAR_28 = (VAR_15->ht_cap.cap & VAR_6) ?
    1 : 0;
 enum wireless_mode VAR_29 = VAR_18->mode;

 if (VAR_19->current_bandtype == VAR_0)
  VAR_20 = VAR_15->supp_rates[1] << 4;
 else
  VAR_20 = VAR_15->supp_rates[0];
 if (VAR_18->opmode == VAR_10)
  VAR_20 = 0xfff;
 VAR_20 |= (VAR_15->ht_cap.mcs.rx_mask[1] << 20 |
   VAR_15->ht_cap.mcs.rx_mask[0] << 12);
 switch (VAR_29) {
 case 131:
  if (VAR_20 & 0x0000000c)
   VAR_20 &= 0x0000000d;
  else
   VAR_20 &= 0x0000000f;
  break;
 case 130:
  VAR_20 &= 0x00000FF5;
  break;
 case 129:
 case 128:
  VAR_22 = 1;
  if (VAR_23 == VAR_9) {
   VAR_20 &= 0x0007F005;
  } else {
   u32 VAR_30;

   if (FUNC_1(VAR_17) == VAR_13 ||
       FUNC_1(VAR_17) == VAR_12)
    VAR_30 = 0x000ff005;
   else
    VAR_30 = 0x0f0ff005;

   VAR_20 &= VAR_30;
  }
  break;
 default:
  if (VAR_17->rf_type == VAR_13)
   VAR_20 &= 0x000ff0ff;
  else
   VAR_20 &= 0x0f0ff0ff;

  break;
 }

 if ((VAR_16->btcoexist.bt_coexistence) &&
      (VAR_16->btcoexist.bt_coexist_type == VAR_2) &&
      (VAR_16->btcoexist.bt_cur_state) &&
      (VAR_16->btcoexist.bt_ant_isolation) &&
      ((VAR_16->btcoexist.bt_service == VAR_3) ||
      (VAR_16->btcoexist.bt_service == VAR_1)))
  VAR_20 &= 0x0fffcfc0;
 else
  VAR_20 &= 0x0FFFFFFF;

 if (VAR_22 && ((VAR_26 &&
    VAR_27) || (!VAR_26 &&
       VAR_28))) {
  VAR_20 |= 0x10000000;
  VAR_25 = (VAR_20 >> 12);

  for (VAR_24 = 15; VAR_24 > 0; VAR_24--) {
   if ((1 << VAR_24) & VAR_25)
    break;
  }

  VAR_24 = (VAR_24 << 12) | (VAR_24 << 8) |
      (VAR_24 << 4) | (VAR_24);
 }

 FUNC_6(VAR_16, VAR_11 + VAR_21 * 4, VAR_20);

 FUNC_0(VAR_16, VAR_4, VAR_5,
   "%x\n", FUNC_5(VAR_16, VAR_11));
}
