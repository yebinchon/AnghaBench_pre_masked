
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct macb_platform_data {struct clk* hclk; struct clk* pclk; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 scalar_t__ FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;
 int FUNC_3 (struct clk*) ;
 int FUNC_4 (struct clk*) ;
 int FUNC_5 (int *,char*,int) ;
 struct macb_platform_data* FUNC_6 (int *) ;
 struct clk* FUNC_7 (int *,char*) ;
 struct clk* FUNC_8 (int *,char*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_1, struct clk **VAR_2,
    struct clk **VAR_3, struct clk **VAR_4,
    struct clk **VAR_5, struct clk **VAR_6)
{
 struct macb_platform_data *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_6(&VAR_1->dev);
 if (VAR_7) {
  *VAR_2 = VAR_7->pclk;
  *VAR_3 = VAR_7->hclk;
 } else {
  *VAR_2 = FUNC_7(&VAR_1->dev, "pclk");
  *VAR_3 = FUNC_7(&VAR_1->dev, "hclk");
 }

 if (FUNC_1(*VAR_2)) {
  VAR_8 = FUNC_2(*VAR_2);
  if (!VAR_8)
   VAR_8 = -VAR_0;

  FUNC_5(&VAR_1->dev, "failed to get macb_clk (%d)\n", VAR_8);
  return VAR_8;
 }

 if (FUNC_1(*VAR_3)) {
  VAR_8 = FUNC_2(*VAR_3);
  if (!VAR_8)
   VAR_8 = -VAR_0;

  FUNC_5(&VAR_1->dev, "failed to get hclk (%d)\n", VAR_8);
  return VAR_8;
 }

 *VAR_4 = FUNC_8(&VAR_1->dev, "tx_clk");
 if (FUNC_0(*VAR_4))
  return FUNC_2(*VAR_4);

 *VAR_5 = FUNC_8(&VAR_1->dev, "rx_clk");
 if (FUNC_0(*VAR_5))
  return FUNC_2(*VAR_5);

 *VAR_6 = FUNC_8(&VAR_1->dev, "tsu_clk");
 if (FUNC_0(*VAR_6))
  return FUNC_2(*VAR_6);

 VAR_8 = FUNC_4(*VAR_2);
 if (VAR_8) {
  FUNC_5(&VAR_1->dev, "failed to enable pclk (%d)\n", VAR_8);
  return VAR_8;
 }

 VAR_8 = FUNC_4(*VAR_3);
 if (VAR_8) {
  FUNC_5(&VAR_1->dev, "failed to enable hclk (%d)\n", VAR_8);
  goto err_disable_pclk;
 }

 VAR_8 = FUNC_4(*VAR_4);
 if (VAR_8) {
  FUNC_5(&VAR_1->dev, "failed to enable tx_clk (%d)\n", VAR_8);
  goto err_disable_hclk;
 }

 VAR_8 = FUNC_4(*VAR_5);
 if (VAR_8) {
  FUNC_5(&VAR_1->dev, "failed to enable rx_clk (%d)\n", VAR_8);
  goto err_disable_txclk;
 }

 VAR_8 = FUNC_4(*VAR_6);
 if (VAR_8) {
  FUNC_5(&VAR_1->dev, "failed to enable tsu_clk (%d)\n", VAR_8);
  goto err_disable_rxclk;
 }

 return 0;

err_disable_rxclk:
 FUNC_3(*VAR_5);

err_disable_txclk:
 FUNC_3(*VAR_4);

err_disable_hclk:
 FUNC_3(*VAR_3);

err_disable_pclk:
 FUNC_3(*VAR_2);

 return VAR_8;
}
