
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uniphier_pciephy_priv {int clk; int rst; } ;
struct phy {int dummy; } ;


 int FUNC_0 (int ) ;
 struct uniphier_pciephy_priv* FUNC_1 (struct phy*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct uniphier_pciephy_priv*) ;

__attribute__((used)) static int FUNC_4(struct phy *VAR_0)
{
 struct uniphier_pciephy_priv *VAR_1 = FUNC_1(VAR_0);

 FUNC_3(VAR_1);
 FUNC_2(VAR_1->rst);
 FUNC_0(VAR_1->clk);

 return 0;
}
