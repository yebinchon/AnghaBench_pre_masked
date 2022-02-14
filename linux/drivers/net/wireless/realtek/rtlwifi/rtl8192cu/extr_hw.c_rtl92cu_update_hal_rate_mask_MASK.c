
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
struct TYPE_6__ {int fill_h2c_cmd; } ;
struct rtl_phy {int rf_type; } ;
struct rtl_priv {TYPE_3__ works; int rate_mask; struct rtl_phy phy; } ;
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
 scalar_t__ VAR_7 ;
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
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int,...) ;





 int FUNC_1 (int ,int*,int) ;
 struct rtl_hal* FUNC_2 (struct rtl_priv*) ;
 struct rtl_mac* FUNC_3 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_hw *VAR_18,
      struct ieee80211_sta *VAR_19,
      u8 VAR_20, bool VAR_21)
{
 struct rtl_priv *VAR_22 = FUNC_4(VAR_18);
 struct rtl_phy *VAR_23 = &(VAR_22->phy);
 struct rtl_mac *VAR_24 = FUNC_3(FUNC_4(VAR_18));
 struct rtl_hal *VAR_25 = FUNC_2(FUNC_4(VAR_18));
 struct rtl_sta_info *VAR_26 = ((void*)0);
 u32 VAR_27;
 u8 VAR_28;
 u8 VAR_29 = (VAR_19->bandwidth >= VAR_7) ? 1 : 0;
 u8 VAR_30 = VAR_29 &&
         (VAR_19->ht_cap.cap & VAR_4) ?
    1 : 0;
 u8 VAR_31 = (VAR_19->ht_cap.cap & VAR_3) ?
    1 : 0;
 enum wireless_mode VAR_32 = 0;
 bool VAR_33 = 0;
 u8 VAR_34[5];
 u8 VAR_35 = 0;
 u8 VAR_36 = VAR_5;

 VAR_26 = (struct rtl_sta_info *) VAR_19->drv_priv;
 VAR_32 = VAR_26->wireless_mode;
 if (VAR_24->opmode == VAR_11 ||
     VAR_24->opmode == VAR_10)
  VAR_29 = VAR_24->bw_40;
 else if (VAR_24->opmode == VAR_9 ||
  VAR_24->opmode == VAR_8)
  VAR_35 = VAR_19->aid + 1;

 if (VAR_25->current_bandtype == VAR_0)
  VAR_27 = VAR_19->supp_rates[1] << 4;
 else
  VAR_27 = VAR_19->supp_rates[0];
 if (VAR_24->opmode == VAR_8)
  VAR_27 = 0xfff;
 VAR_27 |= (VAR_19->ht_cap.mcs.rx_mask[1] << 20 |
   VAR_19->ht_cap.mcs.rx_mask[0] << 12);
 switch (VAR_32) {
 case 131:
  VAR_28 = VAR_13;
  if (VAR_27 & 0x0000000c)
   VAR_27 &= 0x0000000d;
  else
   VAR_27 &= 0x0000000f;
  break;
 case 130:
  VAR_28 = VAR_14;

  if (VAR_20 == 1)
   VAR_27 &= 0x00000f00;
  else if (VAR_20 == 2)
   VAR_27 &= 0x00000ff0;
  else
   VAR_27 &= 0x00000ff5;
  break;
 case 132:
  VAR_28 = VAR_12;
  VAR_27 &= 0x00000ff0;
  break;
 case 129:
 case 128:
  VAR_28 = VAR_15;

  if (VAR_36 == VAR_6) {
   if (VAR_20 == 1)
    VAR_27 &= 0x00070000;
   else if (VAR_20 == 2)
    VAR_27 &= 0x0007f000;
   else
    VAR_27 &= 0x0007f005;
  } else {
   if (VAR_23->rf_type == VAR_17 ||
       VAR_23->rf_type == VAR_16) {
    if (VAR_29) {
     if (VAR_20 == 1)
      VAR_27 &= 0x000f0000;
     else if (VAR_20 == 2)
      VAR_27 &= 0x000ff000;
     else
      VAR_27 &= 0x000ff015;
    } else {
     if (VAR_20 == 1)
      VAR_27 &= 0x000f0000;
     else if (VAR_20 == 2)
      VAR_27 &= 0x000ff000;
     else
      VAR_27 &= 0x000ff005;
    }
   } else {
    if (VAR_29) {
     if (VAR_20 == 1)
      VAR_27 &= 0x0f0f0000;
     else if (VAR_20 == 2)
      VAR_27 &= 0x0f0ff000;
     else
      VAR_27 &= 0x0f0ff015;
    } else {
     if (VAR_20 == 1)
      VAR_27 &= 0x0f0f0000;
     else if (VAR_20 == 2)
      VAR_27 &= 0x0f0ff000;
     else
      VAR_27 &= 0x0f0ff005;
    }
   }
  }

  if ((VAR_29 && VAR_30) ||
      (!VAR_29 && VAR_31)) {

   if (VAR_35 == 0)
    VAR_33 = 1;
   else if (VAR_35 == 1)
    VAR_33 = 0;
  }
  break;
 default:
  VAR_28 = VAR_15;

  if (VAR_23->rf_type == VAR_17)
   VAR_27 &= 0x000ff0ff;
  else
   VAR_27 &= 0x0f0ff0ff;
  break;
 }
 VAR_26->ratr_index = VAR_28;

 FUNC_0(VAR_22, VAR_1, VAR_2,
   "ratr_bitmap :%x\n", VAR_27);
 *(u32 *)&VAR_34 = (VAR_27 & 0x0fffffff) |
         (VAR_28 << 28);
 VAR_34[4] = VAR_35 | (VAR_33 ? 0x20 : 0x00) | 0x80;
 FUNC_0(VAR_22, VAR_1, VAR_2,
   "Rate_index:%x, ratr_val:%x, %5phC\n",
   VAR_28, VAR_27, VAR_34);
 FUNC_1(VAR_22->rate_mask, VAR_34, 5);


 FUNC_5(&VAR_22->works.fill_h2c_cmd);

 if (VAR_35 != 0)
  VAR_26->ratr_index = VAR_28;
}
