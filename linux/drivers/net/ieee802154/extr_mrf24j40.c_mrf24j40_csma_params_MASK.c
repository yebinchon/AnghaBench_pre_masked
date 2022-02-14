
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mrf24j40 {int regmap_short; } ;
struct ieee802154_hw {struct mrf24j40* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int,int) ;

__attribute__((used)) static int
FUNC_1(struct ieee802154_hw *VAR_5, u8 VAR_6, u8 VAR_7,
       u8 VAR_8)
{
 struct mrf24j40 *VAR_9 = VAR_5->priv;
 u8 VAR_10;


 VAR_10 = VAR_6 << VAR_4;

 VAR_10 |= VAR_8 << VAR_2;

 return FUNC_0(VAR_9->regmap_short, VAR_0,
      VAR_3 | VAR_1,
      VAR_10);
}
