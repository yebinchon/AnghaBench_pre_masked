
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct rtl_priv {TYPE_1__* cfg; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_2__ {scalar_t__* maps; } ;


 size_t VAR_0 ;
 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct rtl_priv*,scalar_t__) ;
 int FUNC_2 (struct rtl_priv*,scalar_t__) ;
 int FUNC_3 (struct rtl_priv*,scalar_t__,int) ;
 int FUNC_4 (int) ;

void FUNC_5(struct ieee80211_hw *VAR_1, u16 VAR_2, u8 *VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_0(VAR_1);
 u32 VAR_5;
 u8 VAR_6;
 u16 VAR_7;

 FUNC_3(VAR_4, VAR_4->cfg->maps[VAR_0] + 1,
         (VAR_2 & 0xff));
 VAR_6 = FUNC_1(VAR_4, VAR_4->cfg->maps[VAR_0] + 2);
 FUNC_3(VAR_4, VAR_4->cfg->maps[VAR_0] + 2,
         ((VAR_2 >> 8) & 0x03) | (VAR_6 & 0xfc));

 VAR_6 = FUNC_1(VAR_4, VAR_4->cfg->maps[VAR_0] + 3);
 FUNC_3(VAR_4, VAR_4->cfg->maps[VAR_0] + 3,
         (VAR_6 & 0x7f));

 VAR_7 = 0;
 VAR_5 = FUNC_2(VAR_4, VAR_4->cfg->maps[VAR_0]);
 while (!(((VAR_5 >> 24) & 0xff) & 0x80) && (VAR_7 < 10000)) {
  VAR_5 = FUNC_2(VAR_4,
      VAR_4->cfg->maps[VAR_0]);
  VAR_7++;
 }

 FUNC_4(50);
 VAR_5 = FUNC_2(VAR_4, VAR_4->cfg->maps[VAR_0]);

 *VAR_3 = (u8) (VAR_5 & 0xff);
}
