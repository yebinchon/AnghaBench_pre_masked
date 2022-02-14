
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee802154_hw {struct fakelb_phy* priv; } ;
struct fakelb_phy {int suspended; int list_ifup; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct ieee802154_hw *VAR_2)
{
 struct fakelb_phy *VAR_3 = VAR_2->priv;

 FUNC_1(&VAR_1);
 VAR_3->suspended = 0;
 FUNC_0(&VAR_3->list_ifup, &VAR_0);
 FUNC_2(&VAR_1);

 return 0;
}
