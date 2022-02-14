
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int* internal_pa_5g; } ;
struct rtl_hal {scalar_t__ current_bandtype; scalar_t__ macphymode; int interfaceindex; int during_mac1init_radioa; int during_mac0init_radiob; } ;
struct rtl_phy {int num_total_rfpath; } ;
struct rtl_priv {TYPE_1__ efuse; struct rtl_hal rtlhal; struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum radio_path { ____Placeholder_radio_path } radio_path ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,int) ;
 int FUNC_2 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_3 (struct ieee80211_hw*,int,int*) ;
 int FUNC_4 (struct ieee80211_hw*,int,int*) ;
 int* VAR_19 ;
 int* VAR_20 ;
 int* VAR_21 ;
 int* VAR_22 ;
 int* VAR_23 ;
 int** VAR_24 ;
 int* VAR_25 ;
 int* VAR_26 ;
 int * VAR_27 ;
 int** VAR_28 ;
 int** VAR_29 ;
 int VAR_30 ;
 int FUNC_5 (struct ieee80211_hw*,int) ;
 int FUNC_6 (struct ieee80211_hw*,int) ;
 int FUNC_7 (struct ieee80211_hw*,int,int,int) ;
 struct rtl_priv* FUNC_8 (struct ieee80211_hw*) ;
 int FUNC_9 (struct ieee80211_hw*,int,int,int,int) ;

__attribute__((used)) static void FUNC_10(struct ieee80211_hw *VAR_31, u8 VAR_32)
{
 struct rtl_priv *VAR_33 = FUNC_8(VAR_31);
 struct rtl_phy *VAR_34 = &(VAR_33->phy);
 struct rtl_hal *VAR_35 = &(VAR_33->rtlhal);
 u8 VAR_36 = VAR_35->current_bandtype ==
     VAR_1 ? VAR_9 : VAR_10;
 u8 VAR_37 = 0, VAR_38 = 0, VAR_39 = VAR_9;
 bool VAR_40 = 0, VAR_41 = 0;
 u32 VAR_42, VAR_43 = 0x1C000, VAR_44 = 0, VAR_45, VAR_46;

 FUNC_2(VAR_33, VAR_2, VAR_4, "====>\n");

 if (VAR_35->current_bandtype == VAR_1) {
  FUNC_2(VAR_33, VAR_2, VAR_4, "====>5G\n");
  VAR_45 = VAR_20[VAR_32 - 1];
  FUNC_1(VAR_33, VAR_7, VAR_8,
   "ver 1 set RF-A, 5G, 0x28 = 0x%x !!\n", VAR_45);
  for (VAR_38 = 0; VAR_38 < VAR_12; VAR_38++) {
   if (VAR_32 == VAR_21[VAR_38] && VAR_32 <= 140)
    VAR_37 = 0;
  }
  for (VAR_38 = 0; VAR_38 < VAR_13; VAR_38++) {
   if (VAR_32 == VAR_22[VAR_38] && VAR_32 <= 140)
    VAR_37 = 1;
  }
  if (VAR_32 == 149 || VAR_32 == 155 || VAR_32 == 161)
   VAR_37 = 2;
  else if (VAR_32 == 151 || VAR_32 == 153 || VAR_32 == 163
    || VAR_32 == 165)
   VAR_37 = 3;
  else if (VAR_32 == 157 || VAR_32 == 159)
   VAR_37 = 4;

  if (VAR_35->macphymode == VAR_6
      && VAR_35->interfaceindex == 1) {
   VAR_40 = FUNC_5(VAR_31, 0);
   VAR_35->during_mac1init_radioa = 1;

   if (VAR_40)
    FUNC_3(VAR_31, VAR_36,
         &VAR_42);
  }
  for (VAR_38 = 0; VAR_38 < VAR_15; VAR_38++) {
   if (VAR_38 == 0 && (VAR_35->macphymode == VAR_6)) {
    FUNC_9(VAR_31, (enum radio_path)VAR_36,
           VAR_26[VAR_38],
           VAR_11, 0xE439D);
   } else if (VAR_26[VAR_38] == VAR_17) {
    VAR_46 = (VAR_29[VAR_37][VAR_38] &
         0x7FF) | (VAR_45 << 11);
    if (VAR_32 == 36)
     VAR_46 &= ~(FUNC_0(7) | FUNC_0(6));
    FUNC_9(VAR_31, (enum radio_path)VAR_36,
           VAR_26[VAR_38],
           VAR_11, VAR_46);
   } else {
    FUNC_9(VAR_31, (enum radio_path)VAR_36,
           VAR_26[VAR_38],
           VAR_11,
           VAR_29[VAR_37][VAR_38]);
   }
   FUNC_2(VAR_33, VAR_3, VAR_5,
     "offset 0x%x value 0x%x path %d index %d readback 0x%x\n",
     VAR_26[VAR_38],
     VAR_29[VAR_37][VAR_38],
     VAR_36, VAR_37,
     FUNC_7(VAR_31, (enum radio_path)VAR_36,
            VAR_26[VAR_38],
            VAR_11));
  }
  if (VAR_40)
   FUNC_4(VAR_31, VAR_36, &VAR_42);
  if (VAR_35->during_mac1init_radioa)
   FUNC_6(VAR_31, 0);
  if (VAR_32 < 149)
   VAR_44 = 0x07;
  else if (VAR_32 >= 149)
   VAR_44 = 0x02;
  if (VAR_32 >= 36 && VAR_32 <= 64)
   VAR_37 = 0;
  else if (VAR_32 >= 100 && VAR_32 <= 140)
   VAR_37 = 1;
  else
   VAR_37 = 2;
  for (VAR_39 = VAR_9; VAR_39 < VAR_34->num_total_rfpath;
   VAR_39++) {
   if (VAR_35->macphymode == VAR_6 &&
    VAR_35->interfaceindex == 1)
    VAR_41 = VAR_33->efuse.internal_pa_5g[1];
   else
    VAR_41 =
      VAR_33->efuse.internal_pa_5g[VAR_39];
   if (VAR_41) {
    for (VAR_38 = 0;
         VAR_38 < VAR_16;
         VAR_38++) {
     FUNC_9(VAR_31, VAR_39,
      VAR_23[VAR_38],
      VAR_11,
      VAR_24[VAR_37][VAR_38]);
     FUNC_2(VAR_33, VAR_3, VAR_4,
       "offset 0x%x value 0x%x path %d index %d\n",
       VAR_23[VAR_38],
       VAR_24[VAR_37][VAR_38],
       VAR_39, VAR_37);
    }
   } else {
    FUNC_9(VAR_31, (enum radio_path)VAR_39, 0x0B,
           VAR_43, VAR_44);
   }
  }
 } else if (VAR_35->current_bandtype == VAR_0) {
  FUNC_2(VAR_33, VAR_2, VAR_4, "====>2.4G\n");
  VAR_45 = VAR_19[VAR_32 - 1];
  FUNC_1(VAR_33, VAR_7, VAR_8,
   "ver 3 set RF-B, 2G, 0x28 = 0x%x !!\n", VAR_45);
  if (VAR_32 == 1 || VAR_32 == 2 || VAR_32 == 4 || VAR_32 == 9
      || VAR_32 == 10 || VAR_32 == 11 || VAR_32 == 12)
   VAR_37 = 0;
  else if (VAR_32 == 3 || VAR_32 == 13 || VAR_32 == 14)
   VAR_37 = 1;
  else if (VAR_32 >= 5 && VAR_32 <= 8)
   VAR_37 = 2;
  if (VAR_35->macphymode == VAR_6) {
   VAR_36 = VAR_9;
   if (VAR_35->interfaceindex == 0) {
    VAR_40 =
      FUNC_5(VAR_31, 1);
    VAR_35->during_mac0init_radiob = 1;

    if (VAR_40)
     FUNC_3(VAR_31, VAR_36,
          &VAR_42);
   }
  }
  for (VAR_38 = 0; VAR_38 < VAR_14; VAR_38++) {
   if (VAR_25[VAR_38] == VAR_18)
    FUNC_9(VAR_31, (enum radio_path)VAR_36,
     VAR_25[VAR_38],
     VAR_11,
     (VAR_28[VAR_37][VAR_38] |
     FUNC_0(17)));
   else
    FUNC_9(VAR_31, (enum radio_path)VAR_36,
           VAR_25[VAR_38],
           VAR_11,
           VAR_28
           [VAR_37][VAR_38]);
   FUNC_2(VAR_33, VAR_3, VAR_5,
     "offset 0x%x value 0x%x mak 0x%x path %d index %d readback 0x%x\n",
     VAR_25[VAR_38],
     VAR_28[VAR_37][VAR_38],
     VAR_27[VAR_38], VAR_36, VAR_37,
     FUNC_7(VAR_31, (enum radio_path)VAR_36,
            VAR_25[VAR_38],
            VAR_11));
  }
  FUNC_1(VAR_33, VAR_7, VAR_8,
   "cosa ver 3 set RF-B, 2G, 0x28 = 0x%x !!\n",
   VAR_30 | (VAR_45 << 11));

  FUNC_9(VAR_31, (enum radio_path)VAR_36, VAR_17,
         VAR_11,
         VAR_30 | (VAR_45 << 11));
  if (VAR_40)
   FUNC_4(VAR_31, VAR_36, &VAR_42);
  if (VAR_35->during_mac0init_radiob)
   FUNC_6(VAR_31, 1);
 }
 FUNC_2(VAR_33, VAR_2, VAR_4, "<====\n");
}
