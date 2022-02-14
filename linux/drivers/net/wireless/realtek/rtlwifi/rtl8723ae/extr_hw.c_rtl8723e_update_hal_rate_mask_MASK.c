
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rtl_sta_info {int wireless_mode; int ratr_index; } ;
struct rtl_phy {int rf_type; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct rtl_mac {scalar_t__ opmode; int bw_40; } ;
struct rtl_hal {scalar_t__ current_bandtype; } ;
struct TYPE_3__ {int* rx_mask; } ;
struct TYPE_4__ {int cap; TYPE_1__ mcs; } ;
struct ieee80211_sta {int aid; int* supp_rates; TYPE_2__ ht_cap; scalar_t__ drv_priv; } ;
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
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int,...) ;





 int FUNC_1 (struct ieee80211_hw*,int ,int,int*) ;
 struct rtl_hal* FUNC_2 (struct rtl_priv*) ;
 struct rtl_mac* FUNC_3 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_16,
       struct ieee80211_sta *VAR_17,
       u8 VAR_18, bool VAR_19)
{
 struct rtl_priv *VAR_20 = FUNC_4(VAR_16);
 struct rtl_phy *VAR_21 = &(VAR_20->phy);
 struct rtl_mac *VAR_22 = FUNC_3(FUNC_4(VAR_16));
 struct rtl_hal *VAR_23 = FUNC_2(FUNC_4(VAR_16));
 struct rtl_sta_info *VAR_24 = ((void*)0);
 u32 VAR_25;
 u8 VAR_26;
 u8 VAR_27 = (VAR_17->ht_cap.cap & VAR_6)
    ? 1 : 0;
 u8 VAR_28 = (VAR_17->ht_cap.cap & VAR_5) ?
    1 : 0;
 u8 VAR_29 = (VAR_17->ht_cap.cap & VAR_4) ?
    1 : 0;
 enum wireless_mode VAR_30 = 0;
 bool VAR_31 = 0;
 u8 VAR_32[5];
 u8 VAR_33 = 0;


 VAR_24 = (struct rtl_sta_info *)VAR_17->drv_priv;
 VAR_30 = VAR_24->wireless_mode;
 if (VAR_22->opmode == VAR_9)
  VAR_27 = VAR_22->bw_40;
 else if (VAR_22->opmode == VAR_8 ||
  VAR_22->opmode == VAR_7)
  VAR_33 = VAR_17->aid + 1;

 if (VAR_23->current_bandtype == VAR_0)
  VAR_25 = VAR_17->supp_rates[1] << 4;
 else
  VAR_25 = VAR_17->supp_rates[0];
 if (VAR_22->opmode == VAR_7)
  VAR_25 = 0xfff;
 VAR_25 |= (VAR_17->ht_cap.mcs.rx_mask[1] << 20 |
   VAR_17->ht_cap.mcs.rx_mask[0] << 12);
 switch (VAR_30) {
 case 131:
  VAR_26 = VAR_10;
  if (VAR_25 & 0x0000000c)
   VAR_25 &= 0x0000000d;
  else
   VAR_25 &= 0x0000000f;
  break;
 case 130:
  VAR_26 = VAR_12;

  if (VAR_18 == 1)
   VAR_25 &= 0x00000f00;
  else if (VAR_18 == 2)
   VAR_25 &= 0x00000ff0;
  else
   VAR_25 &= 0x00000ff5;
  break;
 case 132:
  VAR_26 = VAR_11;
  VAR_25 &= 0x00000ff0;
  break;
 case 129:
 case 128:
  VAR_26 = VAR_13;
  if (VAR_21->rf_type == VAR_15 ||
      VAR_21->rf_type == VAR_14) {
   if (VAR_27) {
    if (VAR_18 == 1)
     VAR_25 &= 0x000f0000;
    else if (VAR_18 == 2)
     VAR_25 &= 0x000ff000;
    else
     VAR_25 &= 0x000ff015;
   } else {
    if (VAR_18 == 1)
     VAR_25 &= 0x000f0000;
    else if (VAR_18 == 2)
     VAR_25 &= 0x000ff000;
    else
     VAR_25 &= 0x000ff005;
   }
  } else {
   if (VAR_27) {
    if (VAR_18 == 1)
     VAR_25 &= 0x0f0f0000;
    else if (VAR_18 == 2)
     VAR_25 &= 0x0f0ff000;
    else
     VAR_25 &= 0x0f0ff015;
   } else {
    if (VAR_18 == 1)
     VAR_25 &= 0x0f0f0000;
    else if (VAR_18 == 2)
     VAR_25 &= 0x0f0ff000;
    else
     VAR_25 &= 0x0f0ff005;
   }
  }

  if ((VAR_27 && VAR_28) ||
      (!VAR_27 && VAR_29)) {
   if (VAR_33 == 0)
    VAR_31 = 1;
   else if (VAR_33 == 1)
    VAR_31 = 0;
  }
  break;
 default:
  VAR_26 = VAR_13;

  if (VAR_21->rf_type == VAR_15)
   VAR_25 &= 0x000ff0ff;
  else
   VAR_25 &= 0x0f0ff0ff;
  break;
 }
 VAR_24->ratr_index = VAR_26;

 FUNC_0(VAR_20, VAR_1, VAR_2,
   "ratr_bitmap :%x\n", VAR_25);
 *(u32 *)&VAR_32 = (VAR_25 & 0x0fffffff) |
        (VAR_26 << 28);
 VAR_32[4] = VAR_33 | (VAR_31 ? 0x20 : 0x00) | 0x80;
 FUNC_0(VAR_20, VAR_1, VAR_2,
   "Rate_index:%x, ratr_val:%x, %x:%x:%x:%x:%x\n",
    VAR_26, VAR_25,
    VAR_32[0], VAR_32[1],
    VAR_32[2], VAR_32[3],
    VAR_32[4]);
 FUNC_1(VAR_16, VAR_3, 5, VAR_32);
}
