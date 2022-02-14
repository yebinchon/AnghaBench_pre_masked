
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtl_phy {int current_channel; int num_total_rfpath; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct rtl_hal {scalar_t__ hw_type; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,...) ;
 scalar_t__ FUNC_2 (struct rtl_hal*) ;
 int FUNC_3 (struct ieee80211_hw*,int,int ,int,int) ;
 struct rtl_hal* FUNC_4 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (struct ieee80211_hw*,int ,int,int) ;

void FUNC_7(struct ieee80211_hw *VAR_9)
{
 struct rtl_priv *VAR_10 = FUNC_5(VAR_9);
 struct rtl_hal *VAR_11 = FUNC_4(FUNC_5(VAR_9));
 struct rtl_phy *VAR_12 = &VAR_10->phy;
 u8 VAR_13 = VAR_12->current_channel;
 u8 VAR_14;
 u32 VAR_15;

 FUNC_1(VAR_10, VAR_2, VAR_3,
   "switch to channel%d\n", VAR_12->current_channel);
 if (FUNC_2(VAR_11))
  return;

 if (36 <= VAR_13 && VAR_13 <= 48)
  VAR_15 = 0x494;
 else if (50 <= VAR_13 && VAR_13 <= 64)
  VAR_15 = 0x453;
 else if (100 <= VAR_13 && VAR_13 <= 116)
  VAR_15 = 0x452;
 else if (118 <= VAR_13)
  VAR_15 = 0x412;
 else
  VAR_15 = 0x96a;
 FUNC_6(VAR_9, VAR_6, 0x1ffe0000, VAR_15);

 for (VAR_14 = VAR_5; VAR_14 < VAR_12->num_total_rfpath; VAR_14++) {
  if (36 <= VAR_13 && VAR_13 <= 64)
   VAR_15 = 0x101;
  else if (100 <= VAR_13 && VAR_13 <= 140)
   VAR_15 = 0x301;
  else if (140 < VAR_13)
   VAR_15 = 0x501;
  else
   VAR_15 = 0x000;
  FUNC_3(VAR_9, VAR_14, VAR_8,
   FUNC_0(18)|FUNC_0(17)|FUNC_0(16)|FUNC_0(9)|FUNC_0(8), VAR_15);

  FUNC_3(VAR_9, VAR_14, VAR_8,
   VAR_0, VAR_13);

  if (VAR_13 > 14) {
   if (VAR_11->hw_type == VAR_4) {
    if (36 <= VAR_13 && VAR_13 <= 64)
     VAR_15 = 0x114E9;
    else if (100 <= VAR_13 && VAR_13 <= 140)
     VAR_15 = 0x110E9;
    else
     VAR_15 = 0x110E9;
    FUNC_3(VAR_9, VAR_14, VAR_7,
     VAR_1, VAR_15);
   }
  }
 }
 FUNC_1(VAR_10, VAR_2, VAR_3, "\n");
}
