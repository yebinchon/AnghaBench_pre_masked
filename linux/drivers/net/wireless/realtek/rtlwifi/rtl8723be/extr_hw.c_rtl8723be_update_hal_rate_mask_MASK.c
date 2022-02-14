
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
struct TYPE_3__ {int* rx_mask; } ;
struct TYPE_4__ {int cap; TYPE_1__ mcs; } ;
struct ieee80211_sta {int aid; int* supp_rates; TYPE_2__ ht_cap; scalar_t__ drv_priv; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum wireless_mode { ____Placeholder_wireless_mode } wireless_mode ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,int,...) ;




 int FUNC_2 (struct ieee80211_hw*,int) ;
 int FUNC_3 (struct ieee80211_hw*,int ,int ) ;
 int FUNC_4 (struct ieee80211_hw*,int ,int,int*) ;
 struct rtl_mac* FUNC_5 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_6 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_hw *VAR_15,
        struct ieee80211_sta *VAR_16,
        u8 VAR_17, bool VAR_18)
{
 struct rtl_priv *VAR_19 = FUNC_6(VAR_15);
 struct rtl_phy *VAR_20 = &(VAR_19->phy);
 struct rtl_mac *VAR_21 = FUNC_5(FUNC_6(VAR_15));
 struct rtl_sta_info *VAR_22 = ((void*)0);
 u32 VAR_23;
 u8 VAR_24;
 u8 VAR_25 = (VAR_16->ht_cap.cap &
         VAR_5) ? 1 : 0;
 u8 VAR_26 = (VAR_16->ht_cap.cap & VAR_4) ?
    1 : 0;
 u8 VAR_27 = (VAR_16->ht_cap.cap & VAR_3) ?
    1 : 0;
 enum wireless_mode VAR_28 = 0;
 bool VAR_29 = 0;
 u8 VAR_30[7];
 u8 VAR_31 = 0;

 VAR_22 = (struct rtl_sta_info *)VAR_16->drv_priv;
 VAR_28 = VAR_22->wireless_mode;
 if (VAR_21->opmode == VAR_9 ||
     VAR_21->opmode == VAR_8)
  VAR_25 = VAR_21->bw_40;
 else if (VAR_21->opmode == VAR_7 ||
   VAR_21->opmode == VAR_6)
  VAR_31 = VAR_16->aid + 1;

 VAR_23 = VAR_16->supp_rates[0];

 if (VAR_21->opmode == VAR_6)
  VAR_23 = 0xfff;

 VAR_23 |= (VAR_16->ht_cap.mcs.rx_mask[1] << 20 |
   VAR_16->ht_cap.mcs.rx_mask[0] << 12);
 switch (VAR_28) {
 case 131:
  VAR_24 = VAR_10;
  if (VAR_23 & 0x0000000c)
   VAR_23 &= 0x0000000d;
  else
   VAR_23 &= 0x0000000f;
  break;
 case 130:
  VAR_24 = VAR_11;

  if (VAR_17 == 1)
   VAR_23 &= 0x00000f00;
  else if (VAR_17 == 2)
   VAR_23 &= 0x00000ff0;
  else
   VAR_23 &= 0x00000ff5;
  break;
 case 129:
 case 128:
  VAR_24 = VAR_12;
  if (VAR_20->rf_type == VAR_13) {
   if (VAR_25) {
    if (VAR_17 == 1)
     VAR_23 &= 0x000f0000;
    else if (VAR_17 == 2)
     VAR_23 &= 0x000ff000;
    else
     VAR_23 &= 0x000ff015;
   } else {
    if (VAR_17 == 1)
     VAR_23 &= 0x000f0000;
    else if (VAR_17 == 2)
     VAR_23 &= 0x000ff000;
    else
     VAR_23 &= 0x000ff005;
   }
  } else {
   if (VAR_25) {
    if (VAR_17 == 1)
     VAR_23 &= 0x0f8f0000;
    else if (VAR_17 == 2)
     VAR_23 &= 0x0f8ff000;
    else
     VAR_23 &= 0x0f8ff015;
   } else {
    if (VAR_17 == 1)
     VAR_23 &= 0x0f8f0000;
    else if (VAR_17 == 2)
     VAR_23 &= 0x0f8ff000;
    else
     VAR_23 &= 0x0f8ff005;
   }
  }
  if ((VAR_25 && VAR_26) ||
      (!VAR_25 && VAR_27)) {
   if (VAR_31 == 0)
    VAR_29 = 1;
   else if (VAR_31 == 1)
    VAR_29 = 0;
  }
  break;
 default:
  VAR_24 = VAR_12;

  if (VAR_20->rf_type == VAR_14)
   VAR_23 &= 0x000ff0ff;
  else
   VAR_23 &= 0x0f0ff0ff;
  break;
 }

 VAR_22->ratr_index = VAR_24;

 FUNC_1(VAR_19, VAR_0, VAR_1,
   "ratr_bitmap :%x\n", VAR_23);
 *(u32 *)&VAR_30 = (VAR_23 & 0x0fffffff) |
           (VAR_24 << 28);
 VAR_30[0] = VAR_31;
 VAR_30[1] = FUNC_2(VAR_15, VAR_24) |
            (VAR_29 ? 0x80 : 0x00);
 VAR_30[2] = VAR_25 | ((!VAR_18) << 3);

 VAR_30[3] = (u8)(VAR_23 & 0x000000ff);
 VAR_30[4] = (u8)((VAR_23 & 0x0000ff00) >> 8);
 VAR_30[5] = (u8)((VAR_23 & 0x00ff0000) >> 16);
 VAR_30[6] = (u8)((VAR_23 & 0xff000000) >> 24);

 FUNC_1(VAR_19, VAR_0, VAR_1,
   "Rate_index:%x, ratr_val:%x, %x:%x:%x:%x:%x:%x:%x\n",
   VAR_24, VAR_23,
   VAR_30[0], VAR_30[1],
   VAR_30[2], VAR_30[3],
   VAR_30[4], VAR_30[5],
   VAR_30[6]);
 FUNC_4(VAR_15, VAR_2, 7, VAR_30);
 FUNC_3(VAR_15, FUNC_0(3), 0);
}
