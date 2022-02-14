
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_dwc3 {struct regmap* rstc_pwrdn; struct regmap* rstc_rst; int dr_mode; int syscfg_reg_off; struct regmap* glue_base; struct regmap* regmap; struct device* dev; } ;
struct resource {int start; } ;
struct regmap {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*,struct regmap*,int ) ;
 struct regmap* FUNC_4 (struct device*,struct resource*) ;
 struct st_dwc3* FUNC_5 (struct device*,int,int ) ;
 struct regmap* FUNC_6 (struct device*,char*) ;
 struct regmap* FUNC_7 (struct device*,char*) ;
 int FUNC_8 (struct platform_device*) ;
 struct platform_device* FUNC_9 (struct device_node*) ;
 struct device_node* FUNC_10 (struct device_node*,char*) ;
 int FUNC_11 (struct device_node*) ;
 int FUNC_12 (struct device_node*,int *,int *,struct device*) ;
 int FUNC_13 (struct platform_device*) ;
 struct resource* FUNC_14 (struct platform_device*,int ,char*) ;
 int FUNC_15 (struct platform_device*,struct st_dwc3*) ;
 int FUNC_16 (struct regmap*) ;
 int FUNC_17 (struct regmap*) ;
 int FUNC_18 (struct st_dwc3*) ;
 int FUNC_19 (struct st_dwc3*) ;
 struct regmap* FUNC_20 (struct device_node*,char*) ;
 int FUNC_21 (struct device*) ;

__attribute__((used)) static int FUNC_22(struct platform_device *VAR_5)
{
 struct st_dwc3 *VAR_6;
 struct resource *VAR_7;
 struct device *VAR_8 = &VAR_5->dev;
 struct device_node *VAR_9 = VAR_8->of_node, *VAR_10;
 struct platform_device *VAR_11;
 struct regmap *VAR_12;
 int VAR_13;

 VAR_6 = FUNC_5(VAR_8, sizeof(*VAR_6), VAR_3);
 if (!VAR_6)
  return -VAR_1;

 VAR_7 = FUNC_14(VAR_5, VAR_4, "reg-glue");
 VAR_6->glue_base = FUNC_4(VAR_8, VAR_7);
 if (FUNC_0(VAR_6->glue_base))
  return FUNC_1(VAR_6->glue_base);

 VAR_12 = FUNC_20(VAR_9, "st,syscfg");
 if (FUNC_0(VAR_12))
  return FUNC_1(VAR_12);

 VAR_6->dev = VAR_8;
 VAR_6->regmap = VAR_12;

 VAR_7 = FUNC_14(VAR_5, VAR_4, "syscfg-reg");
 if (!VAR_7) {
  VAR_13 = -VAR_2;
  goto undo_platform_dev_alloc;
 }

 VAR_6->syscfg_reg_off = VAR_7->start;

 FUNC_3(&VAR_5->dev, "glue-logic addr 0x%pK, syscfg-reg offset 0x%x\n",
   VAR_6->glue_base, VAR_6->syscfg_reg_off);

 VAR_6->rstc_pwrdn =
  FUNC_6(VAR_8, "powerdown");
 if (FUNC_0(VAR_6->rstc_pwrdn)) {
  FUNC_2(&VAR_5->dev, "could not get power controller\n");
  VAR_13 = FUNC_1(VAR_6->rstc_pwrdn);
  goto undo_platform_dev_alloc;
 }


 FUNC_17(VAR_6->rstc_pwrdn);

 VAR_6->rstc_rst =
  FUNC_7(VAR_8, "softreset");
 if (FUNC_0(VAR_6->rstc_rst)) {
  FUNC_2(&VAR_5->dev, "could not get reset controller\n");
  VAR_13 = FUNC_1(VAR_6->rstc_rst);
  goto undo_powerdown;
 }


 FUNC_17(VAR_6->rstc_rst);

 VAR_10 = FUNC_10(VAR_9, "dwc3");
 if (!VAR_10) {
  FUNC_2(&VAR_5->dev, "failed to find dwc3 core node\n");
  VAR_13 = -VAR_0;
  goto err_node_put;
 }


 VAR_13 = FUNC_12(VAR_9, ((void*)0), ((void*)0), VAR_8);
 if (VAR_13) {
  FUNC_2(VAR_8, "failed to add dwc3 core\n");
  goto err_node_put;
 }

 VAR_11 = FUNC_9(VAR_10);
 if (!VAR_11) {
  FUNC_2(VAR_8, "failed to find dwc3 core device\n");
  VAR_13 = -VAR_0;
  goto err_node_put;
 }

 VAR_6->dr_mode = FUNC_21(&VAR_11->dev);
 FUNC_11(VAR_10);
 FUNC_8(VAR_11);







 VAR_13 = FUNC_18(VAR_6);
 if (VAR_13) {
  FUNC_2(VAR_8, "drd initialisation failed\n");
  goto undo_softreset;
 }


 FUNC_19(VAR_6);

 FUNC_15(VAR_5, VAR_6);
 return 0;

err_node_put:
 FUNC_11(VAR_10);
undo_softreset:
 FUNC_16(VAR_6->rstc_rst);
undo_powerdown:
 FUNC_16(VAR_6->rstc_pwrdn);
undo_platform_dev_alloc:
 FUNC_13(VAR_5);
 return VAR_13;
}
