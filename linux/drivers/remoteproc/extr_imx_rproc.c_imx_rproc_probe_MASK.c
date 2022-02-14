
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {struct device_node* of_node; } ;
struct rproc {struct device dev; struct imx_rproc* priv; } ;
struct regmap_config {char* name; } ;
struct regmap {int dummy; } ;
struct platform_device {struct device dev; } ;
struct imx_rproc_dcfg {int dummy; } ;
struct imx_rproc {struct regmap* clk; struct device* dev; struct imx_rproc_dcfg const* dcfg; struct regmap* regmap; struct rproc* rproc; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (struct regmap*) ;
 int FUNC_3 (struct regmap*) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,struct rproc*) ;
 struct regmap* FUNC_6 (struct device*,int *) ;
 int FUNC_7 (struct imx_rproc*,struct platform_device*) ;
 int VAR_2 ;
 struct imx_rproc_dcfg* FUNC_8 (struct device*) ;
 int FUNC_9 (struct device*,struct regmap*,struct regmap_config*) ;
 int FUNC_10 (struct rproc*) ;
 struct rproc* FUNC_11 (struct device*,char*,int *,int *,int) ;
 int FUNC_12 (struct rproc*) ;
 struct regmap* FUNC_13 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_3)
{
 struct device *VAR_4 = &VAR_3->dev;
 struct device_node *VAR_5 = VAR_4->of_node;
 struct imx_rproc *VAR_6;
 struct rproc *VAR_7;
 struct regmap_config VAR_8 = { .name = "imx-rproc" };
 const struct imx_rproc_dcfg *VAR_9;
 struct regmap *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_13(VAR_5, "syscon");
 if (FUNC_0(VAR_10)) {
  FUNC_4(VAR_4, "failed to find syscon\n");
  return FUNC_1(VAR_10);
 }
 FUNC_9(VAR_4, VAR_10, &VAR_8);


 VAR_7 = FUNC_11(VAR_4, "imx-rproc", &VAR_2,
       ((void*)0), sizeof(*VAR_6));
 if (!VAR_7)
  return -VAR_1;

 VAR_9 = FUNC_8(VAR_4);
 if (!VAR_9) {
  VAR_11 = -VAR_0;
  goto err_put_rproc;
 }

 VAR_6 = VAR_7->priv;
 VAR_6->rproc = VAR_7;
 VAR_6->regmap = VAR_10;
 VAR_6->dcfg = VAR_9;
 VAR_6->dev = VAR_4;

 FUNC_5(VAR_4, VAR_7);

 VAR_11 = FUNC_7(VAR_6, VAR_3);
 if (VAR_11) {
  FUNC_4(VAR_4, "failed on imx_rproc_addr_init\n");
  goto err_put_rproc;
 }

 VAR_6->clk = FUNC_6(VAR_4, ((void*)0));
 if (FUNC_0(VAR_6->clk)) {
  FUNC_4(VAR_4, "Failed to get clock\n");
  VAR_11 = FUNC_1(VAR_6->clk);
  goto err_put_rproc;
 }





 VAR_11 = FUNC_3(VAR_6->clk);
 if (VAR_11) {
  FUNC_4(&VAR_7->dev, "Failed to enable clock\n");
  goto err_put_rproc;
 }

 VAR_11 = FUNC_10(VAR_7);
 if (VAR_11) {
  FUNC_4(VAR_4, "rproc_add failed\n");
  goto err_put_clk;
 }

 return 0;

err_put_clk:
 FUNC_2(VAR_6->clk);
err_put_rproc:
 FUNC_12(VAR_7);

 return VAR_11;
}
