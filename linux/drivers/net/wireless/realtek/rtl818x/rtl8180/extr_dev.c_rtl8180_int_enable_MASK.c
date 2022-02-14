
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl8180_priv {scalar_t__ chip_family; TYPE_1__* map; } ;
struct ieee80211_hw {struct rtl8180_priv* priv; } ;
struct TYPE_2__ {int INT_MASK; int IMR; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (struct rtl8180_priv*,int *,int) ;
 int FUNC_1 (struct rtl8180_priv*,int *,int) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_15)
{
 struct rtl8180_priv *VAR_16 = VAR_15->priv;

 if (VAR_16->chip_family == VAR_14) {
  FUNC_1(VAR_16, &VAR_16->map->IMR,
     VAR_4 | VAR_5 |
     VAR_12 | VAR_13 |
     VAR_10 | VAR_11 |
     VAR_6 | VAR_7 |
     VAR_8 | VAR_9 |
     VAR_0 | VAR_1 |
     VAR_2 | VAR_3);
 } else {
  FUNC_0(VAR_16, &VAR_16->map->INT_MASK, 0xFFFF);
 }
}
