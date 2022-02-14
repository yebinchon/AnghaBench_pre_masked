
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl8180_priv {scalar_t__ chip_family; TYPE_1__* map; } ;
struct ieee80211_hw {struct rtl8180_priv* priv; } ;
struct TYPE_2__ {int INT_MASK; int IMR; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct rtl8180_priv*,int *,int ) ;
 int FUNC_1 (struct rtl8180_priv*,int *,int ) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_1)
{
 struct rtl8180_priv *VAR_2 = VAR_1->priv;

 if (VAR_2->chip_family == VAR_0) {
  FUNC_1(VAR_2, &VAR_2->map->IMR, 0);
 } else {
  FUNC_0(VAR_2, &VAR_2->map->INT_MASK, 0);
 }
}
