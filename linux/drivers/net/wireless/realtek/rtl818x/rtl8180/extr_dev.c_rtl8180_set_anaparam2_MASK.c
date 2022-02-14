
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rtl8180_priv {TYPE_1__* map; } ;
struct TYPE_2__ {int EEPROM_CMD; int CONFIG3; int ANAPARAM2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtl8180_priv*,int *) ;
 int FUNC_1 (struct rtl8180_priv*,int *,int ) ;
 int FUNC_2 (struct rtl8180_priv*,int *,int) ;

void FUNC_3(struct rtl8180_priv *VAR_3, u32 VAR_4)
{
 u8 VAR_5;

 FUNC_2(VAR_3, &VAR_3->map->EEPROM_CMD,
    VAR_1);

 VAR_5 = FUNC_0(VAR_3, &VAR_3->map->CONFIG3);
 FUNC_2(VAR_3, &VAR_3->map->CONFIG3,
   VAR_5 | VAR_0);

 FUNC_1(VAR_3, &VAR_3->map->ANAPARAM2, VAR_4);

 FUNC_2(VAR_3, &VAR_3->map->CONFIG3,
   VAR_5 & ~VAR_0);

 FUNC_2(VAR_3, &VAR_3->map->EEPROM_CMD,
    VAR_2);
}
