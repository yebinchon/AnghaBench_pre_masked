
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
struct TYPE_6__ {scalar_t__ version; } ;
struct rtl_phy {int rf_type; } ;
struct rtl_priv {TYPE_3__ rtlhal; struct rtl_phy phy; } ;
struct rtl_mac {int ht_enable; int bw_40; int mode; scalar_t__ opmode; } ;
struct rtl_hal {scalar_t__ current_bandtype; } ;
struct TYPE_4__ {int* rx_mask; } ;
struct TYPE_5__ {int cap; TYPE_1__ mcs; } ;
struct ieee80211_sta {int* supp_rates; TYPE_2__ ht_cap; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum wireless_mode { ____Placeholder_wireless_mode } wireless_mode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int ) ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;




 int FUNC_1 (struct rtl_phy*) ;
 int FUNC_2 (struct ieee80211_hw*,int ) ;
 struct rtl_hal* FUNC_3 (struct rtl_priv*) ;
 struct rtl_mac* FUNC_4 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (struct rtl_priv*,scalar_t__) ;
 int FUNC_7 (struct rtl_priv*,int ,int) ;
 int FUNC_8 (struct rtl_priv*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_9(struct ieee80211_hw *VAR_16,
       struct ieee80211_sta *VAR_17)
{
 struct rtl_priv *VAR_18 = FUNC_5(VAR_16);
 struct rtl_phy *VAR_19 = &(VAR_18->phy);
 struct rtl_mac *VAR_20 = FUNC_4(FUNC_5(VAR_16));
 struct rtl_hal *VAR_21 = FUNC_3(FUNC_5(VAR_16));
 u32 VAR_22;
 u8 VAR_23 = 0;
 u8 VAR_24 = VAR_20->ht_enable;
 u8 VAR_25 = VAR_8;
 u16 VAR_26 = 0;
 u32 VAR_27 = 0;
 u8 VAR_28 = VAR_20->bw_40;
 u8 VAR_29 = (VAR_17->ht_cap.cap & VAR_7) ?
    1 : 0;
 u8 VAR_30 = (VAR_17->ht_cap.cap & VAR_6) ?
    1 : 0;
 enum wireless_mode VAR_31 = VAR_20->mode;

 if (VAR_21->current_bandtype == VAR_1)
  VAR_22 = VAR_17->supp_rates[1] << 4;
 else
  VAR_22 = VAR_17->supp_rates[0];
 if (VAR_20->opmode == VAR_10)
  VAR_22 = 0xfff;
 VAR_22 |= (VAR_17->ht_cap.mcs.rx_mask[1] << 20 |
   VAR_17->ht_cap.mcs.rx_mask[0] << 12);
 switch (VAR_31) {
 case 131:
  VAR_22 &= 0x0000000D;
  break;
 case 130:
  VAR_22 &= 0x00000FF5;
  break;
 case 129:
 case 128:
  VAR_24 = 1;
  if (VAR_25 == VAR_9) {
   VAR_22 &= 0x0007F005;
  } else {
   u32 VAR_32;

   if (FUNC_1(VAR_19) == VAR_12 ||
       FUNC_1(VAR_19) == VAR_11) {
    if (VAR_28)
     VAR_32 = 0x000ff015;
    else
     VAR_32 = 0x000ff005;
   } else {
    if (VAR_28)
     VAR_32 = 0x0f0ff015;
    else
     VAR_32 = 0x0f0ff005;
   }

   VAR_22 &= VAR_32;
  }
  break;
 default:
  if (VAR_19->rf_type == VAR_12)
   VAR_22 &= 0x000ff0ff;
  else
   VAR_22 &= 0x0f0ff0ff;

  break;
 }

 if (VAR_18->rtlhal.version >= VAR_15)
  VAR_22 &= 0x0FFFFFFF;
 else if (VAR_18->rtlhal.version == VAR_14)
  VAR_22 &= 0x0FFFFFF0;

 if (VAR_24 && ((VAR_28 &&
    VAR_29) || (!VAR_28 &&
       VAR_30))) {

  VAR_22 |= 0x10000000;
  VAR_27 = (VAR_22 >> 12);

  for (VAR_26 = 15; VAR_26 > 0; VAR_26--) {
   if ((1 << VAR_26) & VAR_27)
    break;
  }

  VAR_26 = (VAR_26 << 12) | (VAR_26 << 8) |
      (VAR_26 << 4) | (VAR_26);

  FUNC_7(VAR_18, VAR_13, VAR_26);
 }

 FUNC_8(VAR_18, VAR_0 + VAR_23 * 4, VAR_22);
 if (VAR_22 & 0xfffff000)
  FUNC_2(VAR_16, VAR_5);
 else
  FUNC_2(VAR_16, VAR_4);

 FUNC_0(VAR_18, VAR_2, VAR_3, "%x\n",
   FUNC_6(VAR_18, VAR_0));
}
