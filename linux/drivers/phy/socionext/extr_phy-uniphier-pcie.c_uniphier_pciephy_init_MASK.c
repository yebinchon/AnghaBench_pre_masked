
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uniphier_pciephy_priv {int clk; int rst; } ;
struct phy {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct uniphier_pciephy_priv* FUNC_3 (struct phy*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct uniphier_pciephy_priv*) ;
 int FUNC_6 (struct uniphier_pciephy_priv*,int ,int ,int ) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static int FUNC_8(struct phy *VAR_8)
{
 struct uniphier_pciephy_priv *VAR_9 = FUNC_3(VAR_8);
 int VAR_10;

 VAR_10 = FUNC_2(VAR_9->clk);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_4(VAR_9->rst);
 if (VAR_10)
  goto out_clk_disable;

 FUNC_6(VAR_9, VAR_0,
       VAR_4, VAR_4);
 FUNC_6(VAR_9, VAR_1, VAR_3,
       FUNC_0(VAR_3, VAR_5));
 FUNC_6(VAR_9, VAR_2, VAR_6,
       FUNC_0(VAR_6, VAR_7));
 FUNC_7(1, 10);

 FUNC_5(VAR_9);
 FUNC_7(1, 10);

 return 0;

out_clk_disable:
 FUNC_1(VAR_9->clk);

 return VAR_10;
}
