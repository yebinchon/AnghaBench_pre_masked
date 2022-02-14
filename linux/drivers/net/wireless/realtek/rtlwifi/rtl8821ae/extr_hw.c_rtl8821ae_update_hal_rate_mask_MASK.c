
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rtl_sta_info {int wireless_mode; int ratr_index; } ;
struct rtl_phy {int current_chan_bw; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct rtl_mac {scalar_t__ opmode; int bw_40; } ;
struct TYPE_7__ {int rx_mcs_map; } ;
struct TYPE_8__ {TYPE_3__ vht_mcs; } ;
struct TYPE_5__ {int* rx_mask; } ;
struct TYPE_6__ {int cap; TYPE_1__ mcs; } ;
struct ieee80211_sta {int aid; int* supp_rates; TYPE_4__ vht_cap; TYPE_2__ ht_cap; scalar_t__ drv_priv; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum wireless_mode { ____Placeholder_wireless_mode } wireless_mode ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,int,...) ;



 int VAR_23 ;




 int FUNC_2 (struct ieee80211_hw*,int,struct rtl_sta_info*,int) ;
 int FUNC_3 (struct ieee80211_hw*,int,int) ;
 int FUNC_4 (struct ieee80211_hw*,struct ieee80211_sta*,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct ieee80211_hw*,int ,int ) ;
 int FUNC_8 (struct ieee80211_hw*,int,int) ;
 int FUNC_9 (struct ieee80211_hw*,int ,int,int*) ;
 struct rtl_mac* FUNC_10 (struct rtl_priv*) ;
 int FUNC_11 (struct ieee80211_hw*,int,int) ;
 struct rtl_priv* FUNC_12 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_13(struct ieee80211_hw *VAR_24,
  struct ieee80211_sta *VAR_25, u8 VAR_26, bool VAR_27)
{
 struct rtl_priv *VAR_28 = FUNC_12(VAR_24);
 struct rtl_phy *VAR_29 = &VAR_28->phy;
 struct rtl_mac *VAR_30 = FUNC_10(FUNC_12(VAR_24));
 struct rtl_sta_info *VAR_31 = ((void*)0);
 u32 VAR_32;
 u8 VAR_33;
 enum wireless_mode VAR_34 = 0;
 u8 VAR_35 = (VAR_25->ht_cap.cap & VAR_4)
    ? 1 : 0;
 bool VAR_36 = 0;
 u8 VAR_37[7];
 u8 VAR_38 = 0;
 u8 VAR_39 = VAR_6;
 u8 VAR_40;

 VAR_31 = (struct rtl_sta_info *)VAR_25->drv_priv;
 VAR_34 = VAR_31->wireless_mode;

 FUNC_1(VAR_28, VAR_0, VAR_2,
   "wireless mode = 0x%x\n", VAR_34);
 if (VAR_30->opmode == VAR_13 ||
  VAR_30->opmode == VAR_12) {
  VAR_35 = VAR_30->bw_40;
 } else if (VAR_30->opmode == VAR_11 ||
  VAR_30->opmode == VAR_10)
  VAR_38 = VAR_25->aid + 1;
 if (VAR_34 == 128 ||
     VAR_34 == 132 ||
     VAR_34 == 134)
  VAR_32 = VAR_25->supp_rates[VAR_9] << 4;
 else
  VAR_32 = VAR_25->supp_rates[VAR_8];

 if (VAR_30->opmode == VAR_10)
  VAR_32 = 0xfff;

 if (VAR_34 == 129
  || VAR_34 == 128)
  VAR_32 |= (VAR_25->ht_cap.mcs.rx_mask[1] << 20 |
    VAR_25->ht_cap.mcs.rx_mask[0] << 12);
 else if (VAR_34 == 133
  || VAR_34 == 132
  || VAR_34 == VAR_23)
  VAR_32 |= FUNC_6(
    VAR_25->vht_cap.vht_mcs.rx_mcs_map) << 12;

 VAR_36 = FUNC_4(VAR_24, VAR_25, VAR_38);
 VAR_40 = FUNC_3(VAR_24, VAR_34, VAR_32);


 switch (VAR_34) {
 case 131:
  VAR_33 = VAR_16;
  if (VAR_32 & 0x0000000c)
   VAR_32 &= 0x0000000d;
  else
   VAR_32 &= 0x0000000f;
  break;
 case 130:
  VAR_33 = VAR_18;

  if (VAR_26 == 1)
   VAR_32 &= 0x00000f00;
  else if (VAR_26 == 2)
   VAR_32 &= 0x00000ff0;
  else
   VAR_32 &= 0x00000ff5;
  break;
 case 134:
  VAR_33 = VAR_17;
  VAR_32 &= 0x00000ff0;
  break;
 case 129:
 case 128:
  if (VAR_34 == 129)
   VAR_33 = VAR_20;
  else
   VAR_33 = VAR_19;

  if (VAR_39 == VAR_7
   || VAR_39 == VAR_5) {
   if (VAR_26 == 1)
    VAR_32 &= 0x000f0000;
   else if (VAR_26 == 2)
    VAR_32 &= 0x000ff000;
   else
    VAR_32 &= 0x000ff005;
  } else {
   if (VAR_40 == VAR_21) {
    if (VAR_35) {
     if (VAR_26 == 1)
      VAR_32 &= 0x000f0000;
     else if (VAR_26 == 2)
      VAR_32 &= 0x000ff000;
     else
      VAR_32 &= 0x000ff015;
    } else {
     if (VAR_26 == 1)
      VAR_32 &= 0x000f0000;
     else if (VAR_26 == 2)
      VAR_32 &= 0x000ff000;
     else
      VAR_32 &= 0x000ff005;
    }
   } else {
    if (VAR_35) {
     if (VAR_26 == 1)
      VAR_32 &= 0x0fff0000;
     else if (VAR_26 == 2)
      VAR_32 &= 0x0ffff000;
     else
      VAR_32 &= 0x0ffff015;
    } else {
     if (VAR_26 == 1)
      VAR_32 &= 0x0fff0000;
     else if (VAR_26 == 2)
      VAR_32 &= 0x0ffff000;
     else
      VAR_32 &= 0x0ffff005;
    }
   }
  }
  break;

 case 133:
  VAR_33 = VAR_14;
  if (VAR_26 == 1)
   VAR_32 &= 0xfc3f0000;
  else if (VAR_26 == 2)
   VAR_32 &= 0xfffff000;
  else
   VAR_32 &= 0xffffffff;
  break;

 case 132:
  VAR_33 = VAR_15;

  if (VAR_40 == VAR_21) {
   if (VAR_26 == 1)
    VAR_32 &= 0x003f8000;
   else if (VAR_26 == 2)
    VAR_32 &= 0x003ff000;
   else
    VAR_32 &= 0x003ff010;
  } else {
   if (VAR_26 == 1)
    VAR_32 &= 0xfe3f8000;
   else if (VAR_26 == 2)
    VAR_32 &= 0xfffff000;
   else
    VAR_32 &= 0xfffff010;
  }
  break;

 default:
  VAR_33 = VAR_20;

  if (VAR_40 == VAR_22)
   VAR_32 &= 0x000ff0ff;
  else
   VAR_32 &= 0x0f8ff0ff;
  break;
 }

 VAR_33 = FUNC_11(VAR_24, VAR_33, VAR_34);
 VAR_31->ratr_index = VAR_33;
 VAR_32 = FUNC_8(VAR_24, VAR_34,
       VAR_32);

 FUNC_1(VAR_28, VAR_0, VAR_2,
   "ratr_bitmap :%x\n", VAR_32);




 VAR_37[0] = VAR_38;
 VAR_37[1] = VAR_33 | (VAR_36 ? 0x80 : 0x00);
 VAR_37[2] = VAR_29->current_chan_bw | ((!VAR_27) << 3)
      | FUNC_5(VAR_34, VAR_32)
      | FUNC_2(VAR_24, VAR_38, VAR_31, VAR_34);

 VAR_37[3] = (u8)(VAR_32 & 0x000000ff);
 VAR_37[4] = (u8)((VAR_32 & 0x0000ff00) >> 8);
 VAR_37[5] = (u8)((VAR_32 & 0x00ff0000) >> 16);
 VAR_37[6] = (u8)((VAR_32 & 0xff000000) >> 24);

 FUNC_1(VAR_28, VAR_0, VAR_1,
   "Rate_index:%x, ratr_val:%x, %x:%x:%x:%x:%x:%x:%x\n",
   VAR_33, VAR_32,
   VAR_37[0], VAR_37[1],
   VAR_37[2], VAR_37[3],
   VAR_37[4], VAR_37[5],
   VAR_37[6]);
 FUNC_9(VAR_24, VAR_3, 7, VAR_37);
 FUNC_7(VAR_24, FUNC_0(3), 0);
}
