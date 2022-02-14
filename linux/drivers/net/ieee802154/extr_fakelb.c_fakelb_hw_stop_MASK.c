
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee802154_hw {struct fakelb_phy* priv; } ;
struct fakelb_phy {int suspended; int list_ifup; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ieee802154_hw *VAR_1)
{
 struct fakelb_phy *VAR_2 = VAR_1->priv;

 FUNC_1(&VAR_0);
 VAR_2->suspended = 1;
 FUNC_0(&VAR_2->list_ifup);
 FUNC_2(&VAR_0);
}
