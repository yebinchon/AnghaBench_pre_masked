
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
struct rtl_mac {int ht_enable; int bw_40; int mode; scalar_t__ opmode; } ;
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
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int ) ;




 int FUNC_1 (struct rtl_phy*) ;
 struct rtl_hal* FUNC_2 (struct rtl_priv*) ;
 struct rtl_mac* FUNC_3 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct rtl_priv*,scalar_t__) ;
 int FUNC_6 (struct rtl_priv*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_hw *VAR_11,
       struct ieee80211_sta *VAR_12)
{
 struct rtl_priv *VAR_13 = FUNC_4(VAR_11);
 struct rtl_phy *VAR_14 = &(VAR_13->phy);
 struct rtl_mac *VAR_15 = FUNC_3(FUNC_4(VAR_11));
 struct rtl_hal *VAR_16 = FUNC_2(FUNC_4(VAR_11));
 u32 VAR_17;
 u8 VAR_18 = 0;
 u8 VAR_19 = VAR_15->ht_enable;
 u8 VAR_20 = VAR_5;
 u16 VAR_21;
 u32 VAR_22;
 u8 VAR_23 = VAR_15->bw_40;
 u8 VAR_24 = (VAR_12->ht_cap.cap & VAR_4) ?
          1 : 0;
 u8 VAR_25 = (VAR_12->ht_cap.cap & VAR_3) ?
          1 : 0;
 enum wireless_mode VAR_26 = VAR_15->mode;

 if (VAR_16->current_bandtype == VAR_0)
  VAR_17 = VAR_12->supp_rates[1] << 4;
 else
  VAR_17 = VAR_12->supp_rates[0];
 if (VAR_15->opmode == VAR_7)
  VAR_17 = 0xfff;

 VAR_17 |= (VAR_12->ht_cap.mcs.rx_mask[1] << 20 |
   VAR_12->ht_cap.mcs.rx_mask[0] << 12);
 switch (VAR_26) {
 case 131:
  if (VAR_17 & 0x0000000c)
   VAR_17 &= 0x0000000d;
  else
   VAR_17 &= 0x0000000f;
  break;
 case 130:
  VAR_17 &= 0x00000FF5;
  break;
 case 129:
 case 128:
  VAR_19 = 1;
  if (VAR_20 == VAR_6) {
   VAR_17 &= 0x0007F005;
  } else {
   u32 VAR_27;

   if (FUNC_1(VAR_14) == VAR_10 ||
       FUNC_1(VAR_14) == VAR_9)
    VAR_27 = 0x000ff005;
   else
    VAR_27 = 0x0f0ff005;

   VAR_17 &= VAR_27;
  }
  break;
 default:
  if (VAR_14->rf_type == VAR_10)
   VAR_17 &= 0x000ff0ff;
  else
   VAR_17 &= 0x0f0ff0ff;

  break;
 }

 VAR_17 &= 0x0FFFFFFF;

 if (VAR_19 && ((VAR_23 &&
    VAR_24) || (!VAR_23 &&
            VAR_25))) {
  VAR_17 |= 0x10000000;
  VAR_22 = (VAR_17 >> 12);

  for (VAR_21 = 15; VAR_21 > 0; VAR_21--) {
   if ((1 << VAR_21) & VAR_22)
    break;
  }

  VAR_21 = (VAR_21 << 12) | (VAR_21 << 8) |
      (VAR_21 << 4) | (VAR_21);
 }

 FUNC_6(VAR_13, VAR_8 + VAR_18 * 4, VAR_17);

 FUNC_0(VAR_13, VAR_1, VAR_2, "%x\n",
   FUNC_5(VAR_13, VAR_8));
}
