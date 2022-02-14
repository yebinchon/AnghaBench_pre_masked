
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


 size_t VAR_0 ;
 size_t VAR_1 ;
 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct rtl_priv*,scalar_t__) ;
 int FUNC_2 (struct rtl_priv*,scalar_t__,int) ;

u8 FUNC_3(struct ieee80211_hw *VAR_2, u16 VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_0(VAR_2);
 u8 VAR_5;
 u8 VAR_6;
 u8 VAR_7;
 u32 VAR_8 = 0;
 const u32 VAR_9 =
  VAR_4->cfg->maps[VAR_1];

 if (VAR_3 < VAR_9) {
  VAR_7 = VAR_3 & 0xFF;
  FUNC_2(VAR_4, VAR_4->cfg->maps[VAR_0] + 1,
          VAR_7);
  VAR_6 = FUNC_1(VAR_4,
      VAR_4->cfg->maps[VAR_0] + 2);
  VAR_7 = ((VAR_3 >> 8) & 0x03) | (VAR_6 & 0xFC);
  FUNC_2(VAR_4, VAR_4->cfg->maps[VAR_0] + 2,
          VAR_7);

  VAR_6 = FUNC_1(VAR_4,
      VAR_4->cfg->maps[VAR_0] + 3);
  VAR_7 = VAR_6 & 0x7F;
  FUNC_2(VAR_4, VAR_4->cfg->maps[VAR_0] + 3,
          VAR_7);

  VAR_6 = FUNC_1(VAR_4,
      VAR_4->cfg->maps[VAR_0] + 3);
  while (!(VAR_6 & 0x80)) {
   VAR_6 = FUNC_1(VAR_4,
       VAR_4->cfg->
       maps[VAR_0] + 3);
   VAR_8++;
   if (VAR_8 == 1000)
    break;
  }
  VAR_5 = FUNC_1(VAR_4, VAR_4->cfg->maps[VAR_0]);
  return VAR_5;
 } else
  return 0xFF;

}
