
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy {int dummy; } ;
struct mixel_dphy_priv {int phy_ref_clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct mixel_dphy_priv* FUNC_1 (struct phy*) ;
 int FUNC_2 (struct phy*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct phy *VAR_3)
{
 struct mixel_dphy_priv *VAR_4 = FUNC_1(VAR_3);

 FUNC_2(VAR_3, VAR_2, VAR_1);
 FUNC_2(VAR_3, VAR_2, VAR_0);

 FUNC_0(VAR_4->phy_ref_clk);

 return 0;
}
