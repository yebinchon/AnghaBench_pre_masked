
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phy {int dev; } ;
struct mixel_dphy_priv {int regmap; } ;


 int FUNC_0 (int *,char*,unsigned int,int) ;
 struct mixel_dphy_priv* FUNC_1 (struct phy*) ;
 int FUNC_2 (int ,unsigned int,int ) ;

__attribute__((used)) static int FUNC_3(struct phy *VAR_0, u32 VAR_1, unsigned int VAR_2)
{
 struct mixel_dphy_priv *VAR_3 = FUNC_1(VAR_0);
 int VAR_4;

 VAR_4 = FUNC_2(VAR_3->regmap, VAR_2, VAR_1);
 if (VAR_4 < 0)
  FUNC_0(&VAR_0->dev, "Failed to write DPHY reg %d: %d\n", VAR_2,
   VAR_4);
 return VAR_4;
}
