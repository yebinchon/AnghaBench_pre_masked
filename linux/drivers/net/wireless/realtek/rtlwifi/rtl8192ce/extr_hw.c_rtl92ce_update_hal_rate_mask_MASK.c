
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
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int,...) ;





 int FUNC_1 (struct ieee80211_hw*,int ,int,int*) ;
 struct rtl_hal* FUNC_2 (struct rtl_priv*) ;
 struct rtl_mac* FUNC_3 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_17,
  struct ieee80211_sta *VAR_18, u8 VAR_19, bool VAR_20)
{
 struct rtl_priv *VAR_21 = FUNC_4(VAR_17);
 struct rtl_phy *VAR_22 = &(VAR_21->phy);
 struct rtl_mac *VAR_23 = FUNC_3(FUNC_4(VAR_17));
 struct rtl_hal *VAR_24 = FUNC_2(FUNC_4(VAR_17));
 struct rtl_sta_info *VAR_25 = ((void*)0);
 u32 VAR_26;
 u8 VAR_27;
 u8 VAR_28 = (VAR_18->ht_cap.cap &
       VAR_6) ? 1 : 0;
 u8 VAR_29 = (VAR_18->ht_cap.cap &
          VAR_5) ? 1 : 0;
 u8 VAR_30 = (VAR_18->ht_cap.cap & VAR_4) ?
    1 : 0;
 enum wireless_mode VAR_31 = 0;
 bool VAR_32 = 0;
 u8 VAR_33[5];
 u8 VAR_34 = 0;

 VAR_25 = (struct rtl_sta_info *) VAR_18->drv_priv;
 VAR_31 = VAR_25->wireless_mode;
 if (VAR_23->opmode == VAR_10 ||
     VAR_23->opmode == VAR_9)
  VAR_28 = VAR_23->bw_40;
 else if (VAR_23->opmode == VAR_8 ||
  VAR_23->opmode == VAR_7)
  VAR_34 = VAR_18->aid + 1;

 if (VAR_24->current_bandtype == VAR_0)
  VAR_26 = VAR_18->supp_rates[1] << 4;
 else
  VAR_26 = VAR_18->supp_rates[0];
 if (VAR_23->opmode == VAR_7)
  VAR_26 = 0xfff;
 VAR_26 |= (VAR_18->ht_cap.mcs.rx_mask[1] << 20 |
   VAR_18->ht_cap.mcs.rx_mask[0] << 12);
 switch (VAR_31) {
 case 131:
  VAR_27 = VAR_12;
  if (VAR_26 & 0x0000000c)
   VAR_26 &= 0x0000000d;
  else
   VAR_26 &= 0x0000000f;
  break;
 case 130:
  VAR_27 = VAR_13;

  if (VAR_19 == 1)
   VAR_26 &= 0x00000f00;
  else if (VAR_19 == 2)
   VAR_26 &= 0x00000ff0;
  else
   VAR_26 &= 0x00000ff5;
  break;
 case 132:
  VAR_27 = VAR_11;
  VAR_26 &= 0x00000ff0;
  break;
 case 129:
 case 128:
  VAR_27 = VAR_14;

  if (VAR_22->rf_type == VAR_16 ||
      VAR_22->rf_type == VAR_15) {
   if (VAR_28) {
    if (VAR_19 == 1)
     VAR_26 &= 0x000f0000;
    else if (VAR_19 == 2)
     VAR_26 &= 0x000ff000;
    else
     VAR_26 &= 0x000ff015;
   } else {
    if (VAR_19 == 1)
     VAR_26 &= 0x000f0000;
    else if (VAR_19 == 2)
     VAR_26 &= 0x000ff000;
    else
     VAR_26 &= 0x000ff005;
   }
  } else {
   if (VAR_28) {
    if (VAR_19 == 1)
     VAR_26 &= 0x0f0f0000;
    else if (VAR_19 == 2)
     VAR_26 &= 0x0f0ff000;
    else
     VAR_26 &= 0x0f0ff015;
   } else {
    if (VAR_19 == 1)
     VAR_26 &= 0x0f0f0000;
    else if (VAR_19 == 2)
     VAR_26 &= 0x0f0ff000;
    else
     VAR_26 &= 0x0f0ff005;
   }
  }

  if ((VAR_28 && VAR_29) ||
      (!VAR_28 && VAR_30)) {

   if (VAR_34 == 0)
    VAR_32 = 1;
   else if (VAR_34 == 1)
    VAR_32 = 0;
  }
  break;
 default:
  VAR_27 = VAR_14;

  if (VAR_22->rf_type == VAR_16)
   VAR_26 &= 0x000ff0ff;
  else
   VAR_26 &= 0x0f0ff0ff;
  break;
 }
 VAR_25->ratr_index = VAR_27;

 FUNC_0(VAR_21, VAR_1, VAR_2,
   "ratr_bitmap :%x\n", VAR_26);
 *(u32 *)&VAR_33 = (VAR_26 & 0x0fffffff) |
         (VAR_27 << 28);
 VAR_33[4] = VAR_34 | (VAR_32 ? 0x20 : 0x00) | 0x80;
 FUNC_0(VAR_21, VAR_1, VAR_2,
   "Rate_index:%x, ratr_val:%x, %5phC\n",
   VAR_27, VAR_26, VAR_33);
 FUNC_1(VAR_17, VAR_3, 5, VAR_33);
}
