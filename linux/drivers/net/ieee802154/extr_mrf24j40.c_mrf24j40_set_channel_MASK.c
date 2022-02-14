
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct mrf24j40 {int regmap_short; int regmap_long; } ;
struct ieee802154_hw {struct mrf24j40* priv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (struct mrf24j40*) ;
 int FUNC_3 (int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct ieee802154_hw *VAR_9, u8 VAR_10, u8 VAR_11)
{
 struct mrf24j40 *VAR_12 = VAR_9->priv;
 u8 VAR_13;
 int VAR_14;

 FUNC_1(FUNC_2(VAR_12), "Set Channel %d\n", VAR_11);

 FUNC_0(VAR_10 != 0);
 FUNC_0(VAR_11 < VAR_2);
 FUNC_0(VAR_11 > VAR_1);


 VAR_13 = (VAR_11 - 11) << VAR_6 | VAR_7;
 VAR_14 = FUNC_3(VAR_12->regmap_long, VAR_3,
     VAR_5, VAR_13);
 if (VAR_14)
  return VAR_14;


 VAR_14 = FUNC_3(VAR_12->regmap_short, VAR_4, VAR_0,
     VAR_0);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_3(VAR_12->regmap_short, VAR_4, VAR_0, 0);
 if (!VAR_14)
  FUNC_4(VAR_8);

 return VAR_14;
}
