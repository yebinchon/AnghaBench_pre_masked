
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ const u16 ;
struct rtl_priv {TYPE_1__* cfg; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_2__ {scalar_t__* maps; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,scalar_t__ const,int) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct rtl_priv*,scalar_t__) ;
 int FUNC_3 (struct rtl_priv*,scalar_t__,int) ;

void FUNC_4(struct ieee80211_hw *VAR_4, u16 VAR_5, u8 VAR_6)
{
 struct rtl_priv *VAR_7 = FUNC_1(VAR_4);
 u8 VAR_8;
 u8 VAR_9;
 u32 VAR_10 = 0;
 const u32 VAR_11 =
  VAR_7->cfg->maps[VAR_3];

 FUNC_0(VAR_7, VAR_0, VAR_1, "Addr=%x Data =%x\n",
   VAR_5, VAR_6);

 if (VAR_5 < VAR_11) {
  FUNC_3(VAR_7, VAR_7->cfg->maps[VAR_2], VAR_6);

  VAR_9 = VAR_5 & 0xFF;
  FUNC_3(VAR_7, VAR_7->cfg->maps[VAR_2] + 1,
          VAR_9);
  VAR_8 = FUNC_2(VAR_7,
      VAR_7->cfg->maps[VAR_2] + 2);

  VAR_9 = ((VAR_5 >> 8) & 0x03) | (VAR_8 & 0xFC);
  FUNC_3(VAR_7,
          VAR_7->cfg->maps[VAR_2] + 2, VAR_9);

  VAR_8 = FUNC_2(VAR_7,
      VAR_7->cfg->maps[VAR_2] + 3);
  VAR_9 = VAR_8 | 0x80;
  FUNC_3(VAR_7,
          VAR_7->cfg->maps[VAR_2] + 3, VAR_9);

  VAR_8 = FUNC_2(VAR_7,
      VAR_7->cfg->maps[VAR_2] + 3);

  while (VAR_8 & 0x80) {
   VAR_8 = FUNC_2(VAR_7,
       VAR_7->cfg->
       maps[VAR_2] + 3);
   VAR_10++;
   if (VAR_10 == 100) {
    VAR_10 = 0;
    break;
   }
  }
 }

}
