
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrf24j40 {int regmap_short; } ;
struct ieee802154_hw {struct mrf24j40* priv; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (scalar_t__**) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__** VAR_2 ;
 int FUNC_1 (int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct ieee802154_hw *VAR_3, s32 VAR_4)
{
 struct mrf24j40 *VAR_5 = VAR_3->priv;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_2); VAR_6++) {
  if (VAR_2[VAR_6][0] == VAR_4)
   return FUNC_1(VAR_5->regmap_short, VAR_1,
         VAR_2[VAR_6][1]);
 }

 return -VAR_0;
}
