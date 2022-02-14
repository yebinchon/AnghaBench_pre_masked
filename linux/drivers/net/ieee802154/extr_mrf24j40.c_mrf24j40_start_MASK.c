
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
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mrf24j40*) ;
 int FUNC_2 (int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_3(struct ieee802154_hw *VAR_4)
{
 struct mrf24j40 *VAR_5 = VAR_4->priv;

 FUNC_0(FUNC_1(VAR_5), "start\n");


 return FUNC_2(VAR_5->regmap_short, VAR_3,
      VAR_2 | VAR_0 | VAR_1, 0);
}
