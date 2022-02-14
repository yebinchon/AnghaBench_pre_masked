
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpan_phy_cca {int mode; int opt; } ;
struct ieee802154_hw {struct at86rf230_local* priv; } ;
struct at86rf230_local {int dummy; } ;


 int VAR_0 ;





 int VAR_1 ;
 int FUNC_0 (struct at86rf230_local*,int ,int) ;

__attribute__((used)) static int
FUNC_1(struct ieee802154_hw *VAR_2,
         const struct wpan_phy_cca *VAR_3)
{
 struct at86rf230_local *VAR_4 = VAR_2->priv;
 u8 VAR_5;


 switch (VAR_3->mode) {
 case 131:
  VAR_5 = 1;
  break;
 case 132:
  VAR_5 = 2;
  break;
 case 130:
  switch (VAR_3->opt) {
  case 129:
   VAR_5 = 3;
   break;
  case 128:
   VAR_5 = 0;
   break;
  default:
   return -VAR_0;
  }
  break;
 default:
  return -VAR_0;
 }

 return FUNC_0(VAR_4, VAR_1, VAR_5);
}
