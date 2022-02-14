
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrf24j40 {int regmap_short; } ;
struct ieee802154_hw {struct mrf24j40* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct ieee802154_hw *VAR_4, bool VAR_5)
{
 struct mrf24j40 *VAR_6 = VAR_4->priv;
 int VAR_7;

 if (VAR_5) {

  VAR_7 = FUNC_0(VAR_6->regmap_short, VAR_3,
      VAR_2 | VAR_0 | VAR_1,
      VAR_2 | VAR_0 | VAR_1);
 } else {

  VAR_7 = FUNC_0(VAR_6->regmap_short, VAR_3,
      VAR_2 | VAR_0 | VAR_1,
      0);
 }

 return VAR_7;
}
