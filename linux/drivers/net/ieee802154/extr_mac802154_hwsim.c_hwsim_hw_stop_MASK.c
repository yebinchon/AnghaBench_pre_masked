
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee802154_hw {struct hwsim_phy* priv; } ;
struct hwsim_phy {int suspended; } ;



__attribute__((used)) static void FUNC_0(struct ieee802154_hw *VAR_0)
{
 struct hwsim_phy *VAR_1 = VAR_0->priv;

 VAR_1->suspended = 1;
}
