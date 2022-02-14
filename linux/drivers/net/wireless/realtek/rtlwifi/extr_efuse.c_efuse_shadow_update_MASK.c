
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct rtl_priv {TYPE_1__* cfg; } ;
struct rtl_efuse {int** efuse_map; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_2__ {int* maps; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,int*,int) ;
 int FUNC_2 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_3 (struct ieee80211_hw*,int,int,int*) ;
 int FUNC_4 (struct ieee80211_hw*,int,int) ;
 int FUNC_5 (struct ieee80211_hw*,int*) ;
 int FUNC_6 (struct ieee80211_hw*) ;
 int FUNC_7 (int*,int*,int) ;
 struct rtl_efuse* FUNC_8 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_9 (struct ieee80211_hw*) ;

bool FUNC_10(struct ieee80211_hw *VAR_8)
{
 struct rtl_priv *VAR_9 = FUNC_9(VAR_8);
 struct rtl_efuse *VAR_10 = FUNC_8(FUNC_9(VAR_8));
 u16 VAR_11, VAR_12, VAR_13;
 u8 VAR_14 = 0x0F;
 u8 VAR_15 = 0;

 FUNC_2(VAR_9, VAR_0, VAR_3, "\n");

 if (!FUNC_6(VAR_8)) {
  FUNC_5(VAR_8, &VAR_10->efuse_map[VAR_6][0]);
  FUNC_7(&VAR_10->efuse_map[VAR_7][0],
         &VAR_10->efuse_map[VAR_6][0],
         VAR_9->cfg->maps[VAR_5]);

  FUNC_2(VAR_9, VAR_0, VAR_3,
    "efuse out of capacity!!\n");
  return 0;
 }
 FUNC_4(VAR_8, 1, 1);

 for (VAR_12 = 0; VAR_12 < 16; VAR_12++) {

  VAR_14 = 0x0F;
  VAR_13 = VAR_12 * 8;

  for (VAR_11 = 0; VAR_11 < 8; VAR_11++) {
   if (VAR_15) {
    VAR_14 &= ~(FUNC_0(VAR_11 / 2));

    VAR_10->efuse_map[VAR_6][VAR_13 + VAR_11] =
        VAR_10->efuse_map[VAR_7][VAR_13 + VAR_11];
   } else {

    if (VAR_10->efuse_map[VAR_6][VAR_13 + VAR_11] !=
        VAR_10->efuse_map[VAR_7][VAR_13 + VAR_11]) {
     VAR_14 &= ~(FUNC_0(VAR_11 / 2));

     VAR_10->efuse_map[VAR_6][VAR_13 + VAR_11] =
         VAR_10->efuse_map[VAR_7][VAR_13 + VAR_11];
    }
   }
  }

  if (VAR_14 != 0x0F) {
   u8 VAR_16[8];

   FUNC_7(VAR_16,
          &VAR_10->efuse_map[VAR_7][VAR_13],
          8);
   FUNC_1(VAR_9, VAR_2, VAR_3,
          "U-efuse\n", VAR_16, 8);

   if (!FUNC_3(VAR_8, (u8) VAR_12, VAR_14,
         VAR_16)) {
    FUNC_2(VAR_9, VAR_1, VAR_4,
      "PG section(%#x) fail!!\n", VAR_12);
    break;
   }
  }
 }

 FUNC_4(VAR_8, 1, 0);
 FUNC_5(VAR_8, &VAR_10->efuse_map[VAR_6][0]);

 FUNC_7(&VAR_10->efuse_map[VAR_7][0],
        &VAR_10->efuse_map[VAR_6][0],
        VAR_9->cfg->maps[VAR_5]);

 FUNC_2(VAR_9, VAR_0, VAR_3, "\n");
 return 1;
}
