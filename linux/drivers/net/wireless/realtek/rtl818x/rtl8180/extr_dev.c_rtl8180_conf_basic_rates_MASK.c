
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct rtl8180_priv {int chip_family; TYPE_1__* map; } ;
struct ieee80211_hw {struct rtl8180_priv* priv; } ;
struct TYPE_2__ {int BRSR_8187SE; int RESP_RATE; int BRSR; } ;





 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct rtl8180_priv*,int *) ;
 int FUNC_3 (struct rtl8180_priv*,int *,int) ;
 int FUNC_4 (struct rtl8180_priv*,int *,int) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_0,
       u32 VAR_1)
{
 struct rtl8180_priv *VAR_2 = VAR_0->priv;
 u16 VAR_3;
 u32 VAR_4;
 u8 VAR_5;
 u8 VAR_6, VAR_7;

 VAR_4 = VAR_1;






 if ((VAR_4 & 0xf) == VAR_4)
  VAR_4 |= 0x150;

 switch (VAR_2->chip_family) {

 case 130:

  VAR_5 = FUNC_1(VAR_1) - 1;
  VAR_3 = FUNC_2(VAR_2, &VAR_2->map->BRSR);
  VAR_3 &= ~3;
  VAR_3 |= VAR_5;
  FUNC_3(VAR_2, &VAR_2->map->BRSR, VAR_3);
  break;

 case 129:
  VAR_6 = FUNC_1(VAR_4) - 1;
  VAR_7 = FUNC_0(VAR_4) - 1;

  FUNC_3(VAR_2, &VAR_2->map->BRSR, VAR_1);
  FUNC_4(VAR_2, &VAR_2->map->RESP_RATE, (VAR_6 << 4) |
    VAR_7);
  break;

 case 128:



  FUNC_3(VAR_2, &VAR_2->map->BRSR_8187SE, VAR_4);
  break;
 }
}
