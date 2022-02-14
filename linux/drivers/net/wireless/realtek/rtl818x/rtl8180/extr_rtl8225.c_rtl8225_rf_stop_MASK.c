
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtl8180_priv {TYPE_1__* map; } ;
struct ieee80211_hw {struct rtl8180_priv* priv; } ;
struct TYPE_2__ {int EEPROM_CMD; int CONFIG3; int ANAPARAM; int ANAPARAM2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct rtl8180_priv*,int *) ;
 int FUNC_2 (struct rtl8180_priv*,int *,int ) ;
 int FUNC_3 (struct rtl8180_priv*,int *,int) ;
 int FUNC_4 (struct ieee80211_hw*,int,int) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_5)
{
 struct rtl8180_priv *VAR_6 = VAR_5->priv;
 u8 VAR_7;

 FUNC_4(VAR_5, 0x4, 0x1f); FUNC_0(1);

 FUNC_3(VAR_6, &VAR_6->map->EEPROM_CMD, VAR_1);
 VAR_7 = FUNC_1(VAR_6, &VAR_6->map->CONFIG3);
 FUNC_3(VAR_6, &VAR_6->map->CONFIG3, VAR_7 | VAR_0);
 FUNC_2(VAR_6, &VAR_6->map->ANAPARAM2, VAR_3);
 FUNC_2(VAR_6, &VAR_6->map->ANAPARAM, VAR_4);
 FUNC_3(VAR_6, &VAR_6->map->CONFIG3, VAR_7 & ~VAR_0);
 FUNC_3(VAR_6, &VAR_6->map->EEPROM_CMD, VAR_2);
}
