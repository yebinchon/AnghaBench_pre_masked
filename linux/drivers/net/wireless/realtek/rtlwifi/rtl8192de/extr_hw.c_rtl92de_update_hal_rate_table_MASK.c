
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct rtl_phy {int rf_type; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct rtl_mac {int ht_enable; int bw_40; int mode; } ;
struct rtl_hal {scalar_t__ current_bandtype; } ;
struct TYPE_3__ {int* rx_mask; } ;
struct TYPE_4__ {int cap; TYPE_1__ mcs; } ;
struct ieee80211_sta {int* supp_rates; TYPE_2__ ht_cap; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum wireless_mode { ____Placeholder_wireless_mode } wireless_mode ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int ) ;





 int FUNC_1 (struct rtl_phy*) ;
 struct rtl_hal* FUNC_2 (struct rtl_priv*) ;
 struct rtl_mac* FUNC_3 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct rtl_priv*,scalar_t__) ;
 int FUNC_6 (struct rtl_priv*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_hw *VAR_10,
       struct ieee80211_sta *VAR_11)
{
 struct rtl_priv *VAR_12 = FUNC_4(VAR_10);
 struct rtl_phy *VAR_13 = &(VAR_12->phy);
 struct rtl_mac *VAR_14 = FUNC_3(FUNC_4(VAR_10));
 struct rtl_hal *VAR_15 = FUNC_2(FUNC_4(VAR_10));
 u32 VAR_16;
 u8 VAR_17 = 0;
 u8 VAR_18 = VAR_14->ht_enable;
 u8 VAR_19 = VAR_5;
 u16 VAR_20;
 u32 VAR_21;
 u8 VAR_22 = VAR_14->bw_40;
 u8 VAR_23 = (VAR_11->ht_cap.cap & VAR_4) ?
       1 : 0;
 u8 VAR_24 = (VAR_11->ht_cap.cap & VAR_3) ?
       1 : 0;
 enum wireless_mode VAR_25 = VAR_14->mode;

 if (VAR_15->current_bandtype == VAR_0)
  VAR_16 = VAR_11->supp_rates[1] << 4;
 else
  VAR_16 = VAR_11->supp_rates[0];
 VAR_16 |= (VAR_11->ht_cap.mcs.rx_mask[1] << 20 |
         VAR_11->ht_cap.mcs.rx_mask[0] << 12);
 switch (VAR_25) {
 case 132:
  VAR_16 &= 0x00000FF0;
  break;
 case 131:
  if (VAR_16 & 0x0000000c)
   VAR_16 &= 0x0000000d;
  else
   VAR_16 &= 0x0000000f;
  break;
 case 130:
  VAR_16 &= 0x00000FF5;
  break;
 case 129:
 case 128:
  VAR_18 = 1;
  if (VAR_19 == VAR_6) {
   VAR_16 &= 0x0007F005;
  } else {
   u32 VAR_26;

   if (FUNC_1(VAR_13) == VAR_9 ||
       FUNC_1(VAR_13) == VAR_8) {
    VAR_26 = 0x000ff005;
   } else {
    VAR_26 = 0x0f0ff005;
   }

   VAR_16 &= VAR_26;
  }
  break;
 default:
  if (VAR_13->rf_type == VAR_9)
   VAR_16 &= 0x000ff0ff;
  else
   VAR_16 &= 0x0f0ff0ff;

  break;
 }
 VAR_16 &= 0x0FFFFFFF;
 if (VAR_18 && ((VAR_22 && VAR_23) ||
     (!VAR_22 && VAR_24))) {
  VAR_16 |= 0x10000000;
  VAR_21 = (VAR_16 >> 12);
  for (VAR_20 = 15; VAR_20 > 0; VAR_20--) {
   if ((1 << VAR_20) & VAR_21)
    break;
  }
  VAR_20 = (VAR_20 << 12) | (VAR_20 << 8) |
      (VAR_20 << 4) | (VAR_20);
 }
 FUNC_6(VAR_12, VAR_7 + VAR_17 * 4, VAR_16);
 FUNC_0(VAR_12, VAR_1, VAR_2, "%x\n",
   FUNC_5(VAR_12, VAR_7));
}
