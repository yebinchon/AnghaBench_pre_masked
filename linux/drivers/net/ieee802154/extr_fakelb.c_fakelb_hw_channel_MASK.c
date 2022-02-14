
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct ieee802154_hw {struct fakelb_phy* priv; } ;
struct fakelb_phy {void* channel; void* page; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct ieee802154_hw *VAR_1, u8 VAR_2, u8 VAR_3)
{
 struct fakelb_phy *VAR_4 = VAR_1->priv;

 FUNC_0(&VAR_0);
 VAR_4->page = VAR_2;
 VAR_4->channel = VAR_3;
 FUNC_1(&VAR_0);
 return 0;
}
