
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct rtl8180_priv {scalar_t__ chip_family; TYPE_1__* map; } ;
struct ieee80211_hw {struct rtl8180_priv* priv; } ;
struct TYPE_2__ {int FEMR; int CONFIG3; } ;


 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct rtl8180_priv*,int *) ;
 int FUNC_1 (struct rtl8180_priv*,int *) ;
 int FUNC_2 (struct rtl8180_priv*,int *,int) ;
 int FUNC_3 (struct rtl8180_priv*,int *,int) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_2)
{
 struct rtl8180_priv *VAR_3 = VAR_2->priv;
 u16 VAR_4;
 u8 VAR_5;

 VAR_5 = FUNC_1(VAR_3, &VAR_3->map->CONFIG3);
 VAR_5 |= 1 << 1;
 FUNC_3(VAR_3, &VAR_3->map->CONFIG3, VAR_5);

 if (VAR_3->chip_family == VAR_1) {
  FUNC_2(VAR_3, VAR_0, 0xffff);
 } else {
  VAR_4 = FUNC_0(VAR_3, &VAR_3->map->FEMR);
  VAR_4 |= (1 << 15) | (1 << 14) | (1 << 4);
  FUNC_2(VAR_3, &VAR_3->map->FEMR, VAR_4);
 }

}
