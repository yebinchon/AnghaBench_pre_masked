
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sti_dwmac {struct regmap* clk; int speed; int tx_retime_src; int interface; void* ext_phyclk; void* gmac_en; struct regmap* regmap; int ctrl_reg; int clk_sel_reg; } ;
struct resource {int start; } ;
struct regmap {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct regmap*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct device*,char*,int) ;
 int FUNC_4 (struct device*,char*) ;
 struct regmap* FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct device_node*) ;
 void* FUNC_7 (struct device_node*,char*) ;
 int FUNC_8 (struct device_node*,char*,char const**) ;
 int FUNC_9 (struct device_node*,char*,int,int *) ;
 struct resource* FUNC_10 (struct platform_device*,int ,char*) ;
 int FUNC_11 (char const*,char*) ;
 struct regmap* FUNC_12 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_13(struct sti_dwmac *VAR_8,
    struct platform_device *VAR_9)
{
 struct resource *VAR_10;
 struct device *VAR_11 = &VAR_9->dev;
 struct device_node *VAR_12 = VAR_11->of_node;
 struct regmap *VAR_13;
 int VAR_14;


 VAR_8->clk_sel_reg = -VAR_0;
 VAR_10 = FUNC_10(VAR_9, VAR_1, "sti-clkconf");
 if (VAR_10)
  VAR_8->clk_sel_reg = VAR_10->start;

 VAR_13 = FUNC_12(VAR_12, "st,syscon");
 if (FUNC_0(VAR_13))
  return FUNC_2(VAR_13);

 VAR_14 = FUNC_9(VAR_12, "st,syscon", 1, &VAR_8->ctrl_reg);
 if (VAR_14) {
  FUNC_3(VAR_11, "Can't get sysconfig ctrl offset (%d)\n", VAR_14);
  return VAR_14;
 }

 VAR_8->interface = FUNC_6(VAR_12);
 VAR_8->regmap = VAR_13;
 VAR_8->gmac_en = FUNC_7(VAR_12, "st,gmac_en");
 VAR_8->ext_phyclk = FUNC_7(VAR_12, "st,ext-phyclk");
 VAR_8->tx_retime_src = VAR_6;
 VAR_8->speed = VAR_2;

 if (FUNC_1(VAR_8->interface)) {
  const char *VAR_15;

  VAR_8->tx_retime_src = VAR_4;

  VAR_14 = FUNC_8(VAR_12, "st,tx-retime-src", &VAR_15);
  if (VAR_14 < 0) {
   FUNC_4(VAR_11, "Use internal clock source\n");
  } else {
   if (!FUNC_11(VAR_15, "clk_125"))
    VAR_8->tx_retime_src = VAR_5;
   else if (!FUNC_11(VAR_15, "txclk"))
    VAR_8->tx_retime_src = VAR_7;
  }
  VAR_8->speed = VAR_3;
 }

 VAR_8->clk = FUNC_5(VAR_11, "sti-ethclk");
 if (FUNC_0(VAR_8->clk)) {
  FUNC_4(VAR_11, "No phy clock provided...\n");
  VAR_8->clk = ((void*)0);
 }

 return 0;
}
