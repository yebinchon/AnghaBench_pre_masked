
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy {int dummy; } ;
struct mvebu_comphy_priv {int cp_phys; } ;
struct mvebu_comphy_lane {int id; struct mvebu_comphy_priv* priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct phy*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 struct mvebu_comphy_lane* FUNC_2 (struct phy*) ;

__attribute__((used)) static int FUNC_3(struct phy *VAR_1)
{
 struct mvebu_comphy_lane *VAR_2 = FUNC_2(VAR_1);
 struct mvebu_comphy_priv *VAR_3 = VAR_2->priv;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_3->cp_phys,
          VAR_2->id, 0);
 if (!VAR_4)
  return VAR_4;


 return FUNC_0(VAR_1);
}
