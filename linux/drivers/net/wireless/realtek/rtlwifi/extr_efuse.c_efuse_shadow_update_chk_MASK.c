
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct rtl_priv {TYPE_1__* cfg; } ;
struct rtl_efuse {scalar_t__** efuse_map; int efuse_usedbytes; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_2__ {int* maps; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int,int,int,int) ;
 struct rtl_efuse* FUNC_1 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;

bool FUNC_3(struct ieee80211_hw *VAR_6)
{
 struct rtl_priv *VAR_7 = FUNC_2(VAR_6);
 struct rtl_efuse *VAR_8 = FUNC_1(FUNC_2(VAR_6));
 u8 VAR_9, VAR_10, VAR_11;
 u16 VAR_12 = 0, VAR_13 = 0, VAR_14, VAR_15;
 bool VAR_16, VAR_17 = 1;

 for (VAR_9 = 0; VAR_9 < 16; VAR_9++) {
  VAR_11 = VAR_9 * 8;
  VAR_16 = 0;

  for (VAR_10 = 0; VAR_10 < 8; VAR_10 = VAR_10 + 2) {
   if (VAR_8->efuse_map[VAR_2][VAR_11 + VAR_10] !=
       VAR_8->efuse_map[VAR_4][VAR_11 + VAR_10] ||
       VAR_8->efuse_map[VAR_2][VAR_11 + VAR_10 + 1] !=
       VAR_8->efuse_map[VAR_4][VAR_11 + VAR_10 +
           1]) {
    VAR_12++;
    VAR_16 = 1;
   }
  }

  if (VAR_16)
   VAR_13++;
 }

 VAR_14 = VAR_13 + VAR_12 * 2;
 VAR_15 = VAR_8->efuse_usedbytes;

 if ((VAR_14 + VAR_15) >=
     (VAR_3 - VAR_7->cfg->maps[VAR_5]))
  VAR_17 = 0;

 FUNC_0(VAR_7, VAR_0, VAR_1,
   "efuse_shadow_update_chk(): totalbytes(%#x), hdr_num(%#x), words_need(%#x), efuse_used(%d)\n",
   VAR_14, VAR_13, VAR_12, VAR_15);

 return VAR_17;
}
