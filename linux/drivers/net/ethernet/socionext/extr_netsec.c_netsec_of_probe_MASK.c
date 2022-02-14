
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct netsec_priv {int clk; int freq; int phy_np; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_1,
      struct netsec_priv *VAR_2, u32 *VAR_3)
{
 VAR_2->phy_np = FUNC_6(VAR_1->dev.of_node, "phy-handle", 0);
 if (!VAR_2->phy_np) {
  FUNC_3(&VAR_1->dev, "missing required property 'phy-handle'\n");
  return -VAR_0;
 }

 *VAR_3 = FUNC_5(&VAR_1->dev, VAR_2->phy_np);

 VAR_2->clk = FUNC_4(&VAR_1->dev, ((void*)0));
 if (FUNC_0(VAR_2->clk)) {
  FUNC_3(&VAR_1->dev, "phy_ref_clk not found\n");
  return FUNC_1(VAR_2->clk);
 }
 VAR_2->freq = FUNC_2(VAR_2->clk);

 return 0;
}
