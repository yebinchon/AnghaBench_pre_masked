
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rtl_sta_info {int wireless_mode; int ratr_index; } ;
struct TYPE_6__ {scalar_t__ version; } ;
struct rtl_phy {int rf_type; } ;
struct rtl_priv {TYPE_3__ rtlhal; struct rtl_phy phy; } ;
struct rtl_mac {scalar_t__ opmode; int bw_40; } ;
struct rtl_hal {scalar_t__ current_bandtype; } ;
struct TYPE_4__ {int* rx_mask; } ;
struct TYPE_5__ {int cap; TYPE_1__ mcs; } ;
struct ieee80211_sta {scalar_t__ bandwidth; int aid; int* supp_rates; TYPE_2__ ht_cap; scalar_t__ drv_priv; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum wireless_mode { ____Placeholder_wireless_mode } wireless_mode ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int,int) ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;





 struct rtl_hal* FUNC_1 (struct rtl_priv*) ;
 struct rtl_mac* FUNC_2 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct rtl_priv*,int ,int) ;
 int FUNC_5 (struct rtl_priv*,int,int) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_hw *VAR_26,
      struct ieee80211_sta *VAR_27,
      u8 VAR_28, bool VAR_29)
{
 struct rtl_priv *VAR_30 = FUNC_3(VAR_26);
 struct rtl_phy *VAR_31 = &(VAR_30->phy);
 struct rtl_mac *VAR_32 = FUNC_2(FUNC_3(VAR_26));
 struct rtl_hal *VAR_33 = FUNC_1(FUNC_3(VAR_26));
 struct rtl_sta_info *VAR_34 = ((void*)0);
 u32 VAR_35;
 u8 VAR_36 = 0;
 u8 VAR_37 = (VAR_27->bandwidth >= VAR_8) ? 1 : 0;
 u8 VAR_38 = (VAR_27->ht_cap.cap & VAR_5) ?
    1 : 0;
 u8 VAR_39 = (VAR_27->ht_cap.cap & VAR_4) ?
    1 : 0;
 enum wireless_mode VAR_40 = 0;
 bool VAR_41 = 0;
 u32 VAR_42 = 0;
 u8 VAR_43 = 0;
 u32 VAR_44 = 0;
 u32 VAR_45 = 0;
 bool VAR_46 = 0;
 u8 VAR_47 = 0;
 u8 VAR_48 = VAR_6;

 VAR_34 = (struct rtl_sta_info *) VAR_27->drv_priv;
 VAR_40 = VAR_34->wireless_mode;
 if (VAR_32->opmode == VAR_11)
  VAR_37 = VAR_32->bw_40;
 else if (VAR_32->opmode == VAR_10 ||
  VAR_32->opmode == VAR_9)
  VAR_47 = VAR_27->aid + 1;

 if (VAR_33->current_bandtype == VAR_0)
  VAR_35 = VAR_27->supp_rates[1] << 4;
 else
  VAR_35 = VAR_27->supp_rates[0];
 if (VAR_32->opmode == VAR_9)
  VAR_35 = 0xfff;
 VAR_35 |= (VAR_27->ht_cap.mcs.rx_mask[1] << 20 |
   VAR_27->ht_cap.mcs.rx_mask[0] << 12);
 switch (VAR_40) {
 case 131:
  VAR_45 |= VAR_23;
  VAR_36 = VAR_13;
  if (VAR_35 & 0x0000000c)
   VAR_35 &= 0x0000000d;
  else
   VAR_35 &= 0x0000000f;
  break;
 case 130:
  VAR_45 |= (VAR_24 | VAR_23);
  VAR_36 = VAR_14;

  if (VAR_28 == 1)
   VAR_35 &= 0x00000f00;
  else if (VAR_28 == 2)
   VAR_35 &= 0x00000ff0;
  else
   VAR_35 &= 0x00000ff5;
  break;
 case 132:
  VAR_45 |= VAR_22;
  VAR_36 = VAR_12;
  VAR_35 &= 0x00000ff0;
  break;
 case 129:
 case 128:
  VAR_45 |= (VAR_25 | VAR_24 | VAR_23);
  VAR_36 = VAR_15;

  if (VAR_48 == VAR_7) {
   if (VAR_28 == 1)
    VAR_35 &= 0x00070000;
   else if (VAR_28 == 2)
    VAR_35 &= 0x0007f000;
   else
    VAR_35 &= 0x0007f005;
  } else {
   if (VAR_31->rf_type == VAR_17 ||
    VAR_31->rf_type == VAR_16) {
    if (VAR_28 == 1) {
      VAR_35 &= 0x000f0000;
    } else if (VAR_28 == 3) {
     VAR_35 &= 0x000fc000;
    } else if (VAR_28 == 5) {
      VAR_35 &= 0x000ff000;
    } else {
     if (VAR_37)
      VAR_35 &= 0x000ff015;
     else
      VAR_35 &= 0x000ff005;
    }
   } else {
    if (VAR_28 == 1) {
     VAR_35 &= 0x0f8f0000;
    } else if (VAR_28 == 3) {
     VAR_35 &= 0x0f8fc000;
    } else if (VAR_28 == 5) {
     VAR_35 &= 0x0f8ff000;
    } else {
     if (VAR_37)
      VAR_35 &= 0x0f8ff015;
     else
      VAR_35 &= 0x0f8ff005;
    }
   }
  }

  if ((VAR_37 && VAR_38) ||
      (!VAR_37 && VAR_39)) {
   if (VAR_47 == 0)
    VAR_41 = 1;
   else if (VAR_47 == 1)
    VAR_41 = 0;
  }
  break;
 default:
  VAR_45 |= (VAR_25 | VAR_24 | VAR_23);
  VAR_36 = VAR_15;

  if (VAR_31->rf_type == VAR_17)
   VAR_35 &= 0x000ff0ff;
  else
   VAR_35 &= 0x0f8ff0ff;
  break;
 }
 VAR_34->ratr_index = VAR_36;

 if (VAR_30->rtlhal.version >= VAR_20)
  VAR_35 &= 0x0FFFFFFF;
 else if (VAR_30->rtlhal.version == VAR_19)
  VAR_35 &= 0x0FFFFFF0;

 if (VAR_41) {
  VAR_35 |= 0x10000000;

  VAR_42 = (VAR_35 >> 12);
  for (VAR_43 = 15; VAR_43 > 0; VAR_43--) {
   if ((1 << VAR_43) & VAR_42)
    break;
  }

  VAR_43 = (VAR_43 << 12) | (VAR_43 << 8) |
   (VAR_43 << 4) | (VAR_43);
  FUNC_4(VAR_30, VAR_18, VAR_43);
 }

 VAR_44 |= (VAR_46 ? 1 : 0) << 9 | (VAR_47 & 0x1f) << 4 | (VAR_45 & 0xf);

 FUNC_0(VAR_30, VAR_1, VAR_2, "mask = %x, bitmap = %x\n",
   VAR_44, VAR_35);
 FUNC_5(VAR_30, 0x2c4, VAR_35);
 FUNC_5(VAR_30, VAR_21, (VAR_3 | (VAR_44 << 8)));

 if (VAR_47 != 0)
  VAR_34->ratr_index = VAR_36;
}
