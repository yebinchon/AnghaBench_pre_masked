
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rtl_sta_info {int mimo_ps; int wireless_mode; int ratr_index; } ;
struct rtl_phy {int rf_type; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct rtl_mac {scalar_t__ opmode; int bw_40; } ;
struct rtl_hal {scalar_t__ current_bandtype; } ;
struct TYPE_3__ {int* rx_mask; } ;
struct TYPE_4__ {int cap; TYPE_1__ mcs; } ;
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
 int VAR_18 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int,int,int) ;





 int FUNC_1 (struct ieee80211_hw*,int ,int,int*) ;
 struct rtl_hal* FUNC_2 (struct rtl_priv*) ;
 struct rtl_mac* FUNC_3 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_19,
  struct ieee80211_sta *VAR_20, u8 VAR_21, bool VAR_22)
{
 struct rtl_priv *VAR_23 = FUNC_4(VAR_19);
 struct rtl_phy *VAR_24 = &(VAR_23->phy);
 struct rtl_mac *VAR_25 = FUNC_3(FUNC_4(VAR_19));
 struct rtl_hal *VAR_26 = FUNC_2(FUNC_4(VAR_19));
 struct rtl_sta_info *VAR_27 = ((void*)0);
 u32 VAR_28;
 u8 VAR_29;
 u8 VAR_30 = (VAR_20->bandwidth >= VAR_8) ? 1 : 0;
 u8 VAR_31 = (VAR_20->ht_cap.cap & VAR_5) ?
       1 : 0;
 u8 VAR_32 = (VAR_20->ht_cap.cap & VAR_4) ?
       1 : 0;
 enum wireless_mode VAR_33 = 0;
 bool VAR_34 = 0;
 u32 VAR_35[2];
 u8 VAR_36 = 0;
 u8 VAR_37 = VAR_6;

 VAR_27 = (struct rtl_sta_info *) VAR_20->drv_priv;
 VAR_37 = VAR_27->mimo_ps;
 VAR_33 = VAR_27->wireless_mode;
 if (VAR_25->opmode == VAR_11)
  VAR_30 = VAR_25->bw_40;
 else if (VAR_25->opmode == VAR_10 ||
  VAR_25->opmode == VAR_9)
  VAR_36 = VAR_20->aid + 1;

 if (VAR_26->current_bandtype == VAR_0)
  VAR_28 = VAR_20->supp_rates[1] << 4;
 else
  VAR_28 = VAR_20->supp_rates[0];
 VAR_28 |= (VAR_20->ht_cap.mcs.rx_mask[1] << 20 |
   VAR_20->ht_cap.mcs.rx_mask[0] << 12);
 switch (VAR_33) {
 case 131:
  VAR_29 = VAR_12;
  if (VAR_28 & 0x0000000c)
   VAR_28 &= 0x0000000d;
  else
   VAR_28 &= 0x0000000f;
  break;
 case 130:
  VAR_29 = VAR_14;

  if (VAR_21 == 1)
   VAR_28 &= 0x00000f00;
  else if (VAR_21 == 2)
   VAR_28 &= 0x00000ff0;
  else
   VAR_28 &= 0x00000ff5;
  break;
 case 132:
  VAR_29 = VAR_13;
  VAR_28 &= 0x00000ff0;
  break;
 case 129:
 case 128:
  if (VAR_33 == 129)
   VAR_29 = VAR_16;
  else
   VAR_29 = VAR_15;
  if (VAR_37 == VAR_7) {
   if (VAR_21 == 1)
    VAR_28 &= 0x00070000;
   else if (VAR_21 == 2)
    VAR_28 &= 0x0007f000;
   else
    VAR_28 &= 0x0007f005;
  } else {
   if (VAR_24->rf_type == VAR_18 ||
       VAR_24->rf_type == VAR_17) {
    if (VAR_30) {
     if (VAR_21 == 1)
      VAR_28 &= 0x000f0000;
     else if (VAR_21 == 2)
      VAR_28 &= 0x000ff000;
     else
      VAR_28 &= 0x000ff015;
    } else {
     if (VAR_21 == 1)
      VAR_28 &= 0x000f0000;
     else if (VAR_21 == 2)
      VAR_28 &= 0x000ff000;
     else
      VAR_28 &= 0x000ff005;
    }
   } else {
    if (VAR_30) {
     if (VAR_21 == 1)
      VAR_28 &= 0x0f0f0000;
     else if (VAR_21 == 2)
      VAR_28 &= 0x0f0ff000;
     else
      VAR_28 &= 0x0f0ff015;
    } else {
     if (VAR_21 == 1)
      VAR_28 &= 0x0f0f0000;
     else if (VAR_21 == 2)
      VAR_28 &= 0x0f0ff000;
     else
      VAR_28 &= 0x0f0ff005;
    }
   }
  }
  if ((VAR_30 && VAR_31) ||
      (!VAR_30 && VAR_32)) {

   if (VAR_36 == 0)
    VAR_34 = 1;
   else if (VAR_36 == 1)
    VAR_34 = 0;
  }
  break;
 default:
  VAR_29 = VAR_16;

  if (VAR_24->rf_type == VAR_18)
   VAR_28 &= 0x000ff0ff;
  else
   VAR_28 &= 0x0f0ff0ff;
  break;
 }

 VAR_35[0] = (VAR_28 & 0x0fffffff) | (VAR_29 << 28);
 VAR_35[1] = VAR_36 | (VAR_34 ? 0x20 : 0x00) | 0x80;
 FUNC_0(VAR_23, VAR_1, VAR_2,
   "ratr_bitmap :%x value0:%x value1:%x\n",
   VAR_28, VAR_35[0], VAR_35[1]);
 FUNC_1(VAR_19, VAR_3, 5, (u8 *) VAR_35);
 if (VAR_36 != 0)
  VAR_27->ratr_index = VAR_29;
}
