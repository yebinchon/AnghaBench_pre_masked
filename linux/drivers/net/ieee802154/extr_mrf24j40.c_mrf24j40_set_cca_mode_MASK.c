
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpan_phy_cca {int mode; int opt; } ;
struct mrf24j40 {int regmap_short; } ;
struct ieee802154_hw {struct mrf24j40* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct ieee802154_hw *VAR_4,
     const struct wpan_phy_cca *VAR_5)
{
 struct mrf24j40 *VAR_6 = VAR_4->priv;
 u8 VAR_7;


 switch (VAR_5->mode) {
 case 130:
  VAR_7 = 2;
  break;
 case 131:
  VAR_7 = 1;
  break;
 case 129:
  switch (VAR_5->opt) {
  case 128:
   VAR_7 = 3;
   break;
  default:
   return -VAR_2;
  }
  break;
 default:
  return -VAR_2;
 }

 return FUNC_0(VAR_6->regmap_short, VAR_3,
      VAR_0,
      VAR_7 << VAR_1);
}
