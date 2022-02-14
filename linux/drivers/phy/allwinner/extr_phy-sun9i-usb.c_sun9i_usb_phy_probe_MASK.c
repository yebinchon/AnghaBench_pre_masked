
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun9i_usb_phy {scalar_t__ type; void* phy; void* pmu; void* reset; void* clk; void* hsic_clk; } ;
struct resource {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct phy_provider {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct phy_provider*) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (struct device*,char*) ;
 void* FUNC_4 (struct device*,char*) ;
 void* FUNC_5 (struct device*,struct resource*) ;
 struct sun9i_usb_phy* FUNC_6 (struct device*,int,int ) ;
 struct phy_provider* FUNC_7 (struct device*,int ) ;
 void* FUNC_8 (struct device*,int *,int *) ;
 void* FUNC_9 (struct device*,char*) ;
 int VAR_4 ;
 scalar_t__ FUNC_10 (struct device_node*) ;
 int FUNC_11 (void*,struct sun9i_usb_phy*) ;
 struct resource* FUNC_12 (struct platform_device*,int ,int ) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_6)
{
 struct sun9i_usb_phy *VAR_7;
 struct device *VAR_8 = &VAR_6->dev;
 struct device_node *VAR_9 = VAR_8->of_node;
 struct phy_provider *VAR_10;
 struct resource *VAR_11;

 VAR_7 = FUNC_6(VAR_8, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->type = FUNC_10(VAR_9);
 if (VAR_7->type == VAR_3) {
  VAR_7->clk = FUNC_4(VAR_8, "hsic_480M");
  if (FUNC_0(VAR_7->clk)) {
   FUNC_3(VAR_8, "failed to get hsic_480M clock\n");
   return FUNC_1(VAR_7->clk);
  }

  VAR_7->hsic_clk = FUNC_4(VAR_8, "hsic_12M");
  if (FUNC_0(VAR_7->hsic_clk)) {
   FUNC_3(VAR_8, "failed to get hsic_12M clock\n");
   return FUNC_1(VAR_7->hsic_clk);
  }

  VAR_7->reset = FUNC_9(VAR_8, "hsic");
  if (FUNC_0(VAR_7->reset)) {
   FUNC_3(VAR_8, "failed to get reset control\n");
   return FUNC_1(VAR_7->reset);
  }
 } else {
  VAR_7->clk = FUNC_4(VAR_8, "phy");
  if (FUNC_0(VAR_7->clk)) {
   FUNC_3(VAR_8, "failed to get phy clock\n");
   return FUNC_1(VAR_7->clk);
  }

  VAR_7->reset = FUNC_9(VAR_8, "phy");
  if (FUNC_0(VAR_7->reset)) {
   FUNC_3(VAR_8, "failed to get reset control\n");
   return FUNC_1(VAR_7->reset);
  }
 }

 VAR_11 = FUNC_12(VAR_6, VAR_2, 0);
 VAR_7->pmu = FUNC_5(VAR_8, VAR_11);
 if (FUNC_0(VAR_7->pmu))
  return FUNC_1(VAR_7->pmu);

 VAR_7->phy = FUNC_8(VAR_8, ((void*)0), &VAR_5);
 if (FUNC_0(VAR_7->phy)) {
  FUNC_3(VAR_8, "failed to create PHY\n");
  return FUNC_1(VAR_7->phy);
 }

 FUNC_11(VAR_7->phy, VAR_7);
 VAR_10 = FUNC_7(VAR_8, VAR_4);

 return FUNC_2(VAR_10);
}
