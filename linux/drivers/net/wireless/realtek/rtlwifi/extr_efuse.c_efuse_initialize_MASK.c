
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtl_priv {TYPE_1__* cfg; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_2__ {int* maps; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct rtl_priv*,int) ;
 int FUNC_2 (struct rtl_priv*,int,int) ;

void FUNC_3(struct ieee80211_hw *VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_0(VAR_4);
 u8 VAR_6;
 u8 VAR_7;

 VAR_6 = FUNC_1(VAR_5, VAR_5->cfg->maps[VAR_2] + 1);
 VAR_7 = VAR_6 | 0x20;
 FUNC_2(VAR_5, VAR_5->cfg->maps[VAR_2] + 1, VAR_7);

 VAR_6 = FUNC_1(VAR_5, VAR_5->cfg->maps[VAR_3] + 1);
 VAR_7 = VAR_6 & 0xFE;
 FUNC_2(VAR_5, VAR_5->cfg->maps[VAR_3] + 1, VAR_7);

 VAR_6 = FUNC_1(VAR_5, VAR_5->cfg->maps[VAR_1] + 3);
 VAR_7 = VAR_6 | 0x80;
 FUNC_2(VAR_5, VAR_5->cfg->maps[VAR_1] + 3, VAR_7);

 FUNC_2(VAR_5, 0x2F8, 0x3);

 FUNC_2(VAR_5, VAR_5->cfg->maps[VAR_0] + 3, 0x72);

}
