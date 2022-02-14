
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvebu_comphy_priv {int * axi_clk; int * mg_core_clk; int * mg_domain_clk; int dev; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct mvebu_comphy_priv *VAR_0)
{
 int VAR_1;

 VAR_0->mg_domain_clk = FUNC_4(VAR_0->dev, "mg_clk");
 if (FUNC_0(VAR_0->mg_domain_clk))
  return FUNC_1(VAR_0->mg_domain_clk);

 VAR_1 = FUNC_3(VAR_0->mg_domain_clk);
 if (VAR_1 < 0)
  return VAR_1;

 VAR_0->mg_core_clk = FUNC_4(VAR_0->dev, "mg_core_clk");
 if (FUNC_0(VAR_0->mg_core_clk)) {
  VAR_1 = FUNC_1(VAR_0->mg_core_clk);
  goto dis_mg_domain_clk;
 }

 VAR_1 = FUNC_3(VAR_0->mg_core_clk);
 if (VAR_1 < 0)
  goto dis_mg_domain_clk;

 VAR_0->axi_clk = FUNC_4(VAR_0->dev, "axi_clk");
 if (FUNC_0(VAR_0->axi_clk)) {
  VAR_1 = FUNC_1(VAR_0->axi_clk);
  goto dis_mg_core_clk;
 }

 VAR_1 = FUNC_3(VAR_0->axi_clk);
 if (VAR_1 < 0)
  goto dis_mg_core_clk;

 return 0;

dis_mg_core_clk:
 FUNC_2(VAR_0->mg_core_clk);

dis_mg_domain_clk:
 FUNC_2(VAR_0->mg_domain_clk);

 VAR_0->mg_domain_clk = ((void*)0);
 VAR_0->mg_core_clk = ((void*)0);
 VAR_0->axi_clk = ((void*)0);

 return VAR_1;
}
