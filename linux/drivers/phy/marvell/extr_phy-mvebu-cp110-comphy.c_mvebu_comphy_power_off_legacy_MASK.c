
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phy {int dummy; } ;
struct mvebu_comphy_priv {int regmap; scalar_t__ base; } ;
struct mvebu_comphy_lane {int id; struct mvebu_comphy_priv* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct mvebu_comphy_lane* FUNC_3 (struct phy*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int ,int*) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct phy *VAR_5)
{
 struct mvebu_comphy_lane *VAR_6 = FUNC_3(VAR_5);
 struct mvebu_comphy_priv *VAR_7 = VAR_6->priv;
 u32 VAR_8;

 VAR_8 = FUNC_4(VAR_7->base + FUNC_2(VAR_6->id));
 VAR_8 &= ~(VAR_3 |
   VAR_2 |
   VAR_4);
 FUNC_7(VAR_8, VAR_7->base + FUNC_2(VAR_6->id));

 FUNC_5(VAR_7->regmap, VAR_1, &VAR_8);
 VAR_8 &= ~(0xf << FUNC_1(VAR_6->id));
 FUNC_6(VAR_7->regmap, VAR_1, VAR_8);

 FUNC_5(VAR_7->regmap, VAR_0, &VAR_8);
 VAR_8 &= ~(0xf << FUNC_0(VAR_6->id));
 FUNC_6(VAR_7->regmap, VAR_0, VAR_8);

 return 0;
}
