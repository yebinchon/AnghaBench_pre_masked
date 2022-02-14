
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee802154_hw {struct at86rf230_local* priv; } ;
struct at86rf230_local {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct at86rf230_local*,int ,int) ;

__attribute__((used)) static int
FUNC_1(struct ieee802154_hw *VAR_1, bool VAR_2)
{
 struct at86rf230_local *VAR_3 = VAR_1->priv;

 return FUNC_0(VAR_3, VAR_0, VAR_2);
}
