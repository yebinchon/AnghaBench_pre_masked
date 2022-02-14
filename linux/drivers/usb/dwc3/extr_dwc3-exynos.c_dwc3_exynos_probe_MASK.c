
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct dwc3_exynos_driverdata {int num_clks; size_t suspend_clk_idx; scalar_t__ clk_names; } ;
struct dwc3_exynos {int num_clks; char const** clk_names; size_t suspend_clk_idx; void** clks; void* vdd33; void* vdd10; struct device* dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (struct device*,char*,...) ;
 void* FUNC_5 (struct device*,char const*) ;
 struct dwc3_exynos* FUNC_6 (struct device*,int,int ) ;
 void* FUNC_7 (struct device*,char*) ;
 struct dwc3_exynos_driverdata* FUNC_8 (struct device*) ;
 int FUNC_9 (struct device_node*,int *,int *,struct device*) ;
 int FUNC_10 (struct platform_device*,struct dwc3_exynos*) ;
 int FUNC_11 (void*) ;
 int FUNC_12 (void*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_3)
{
 struct dwc3_exynos *VAR_4;
 struct device *VAR_5 = &VAR_3->dev;
 struct device_node *VAR_6 = VAR_5->of_node;
 const struct dwc3_exynos_driverdata *VAR_7;
 int VAR_8, VAR_9;

 VAR_4 = FUNC_6(VAR_5, sizeof(*VAR_4), VAR_2);
 if (!VAR_4)
  return -VAR_1;

 VAR_7 = FUNC_8(VAR_5);
 VAR_4->dev = VAR_5;
 VAR_4->num_clks = VAR_7->num_clks;
 VAR_4->clk_names = (const char **)VAR_7->clk_names;
 VAR_4->suspend_clk_idx = VAR_7->suspend_clk_idx;

 FUNC_10(VAR_3, VAR_4);

 for (VAR_8 = 0; VAR_8 < VAR_4->num_clks; VAR_8++) {
  VAR_4->clks[VAR_8] = FUNC_5(VAR_5, VAR_4->clk_names[VAR_8]);
  if (FUNC_0(VAR_4->clks[VAR_8])) {
   FUNC_4(VAR_5, "failed to get clock: %s\n",
    VAR_4->clk_names[VAR_8]);
   return FUNC_1(VAR_4->clks[VAR_8]);
  }
 }

 for (VAR_8 = 0; VAR_8 < VAR_4->num_clks; VAR_8++) {
  VAR_9 = FUNC_3(VAR_4->clks[VAR_8]);
  if (VAR_9) {
   while (VAR_8-- > 0)
    FUNC_2(VAR_4->clks[VAR_8]);
   return VAR_9;
  }
 }

 if (VAR_4->suspend_clk_idx >= 0)
  FUNC_3(VAR_4->clks[VAR_4->suspend_clk_idx]);

 VAR_4->vdd33 = FUNC_7(VAR_5, "vdd33");
 if (FUNC_0(VAR_4->vdd33)) {
  VAR_9 = FUNC_1(VAR_4->vdd33);
  goto vdd33_err;
 }
 VAR_9 = FUNC_12(VAR_4->vdd33);
 if (VAR_9) {
  FUNC_4(VAR_5, "Failed to enable VDD33 supply\n");
  goto vdd33_err;
 }

 VAR_4->vdd10 = FUNC_7(VAR_5, "vdd10");
 if (FUNC_0(VAR_4->vdd10)) {
  VAR_9 = FUNC_1(VAR_4->vdd10);
  goto vdd10_err;
 }
 VAR_9 = FUNC_12(VAR_4->vdd10);
 if (VAR_9) {
  FUNC_4(VAR_5, "Failed to enable VDD10 supply\n");
  goto vdd10_err;
 }

 if (VAR_6) {
  VAR_9 = FUNC_9(VAR_6, ((void*)0), ((void*)0), VAR_5);
  if (VAR_9) {
   FUNC_4(VAR_5, "failed to add dwc3 core\n");
   goto populate_err;
  }
 } else {
  FUNC_4(VAR_5, "no device node, failed to add dwc3 core\n");
  VAR_9 = -VAR_0;
  goto populate_err;
 }

 return 0;

populate_err:
 FUNC_11(VAR_4->vdd10);
vdd10_err:
 FUNC_11(VAR_4->vdd33);
vdd33_err:
 for (VAR_8 = VAR_4->num_clks - 1; VAR_8 >= 0; VAR_8--)
  FUNC_2(VAR_4->clks[VAR_8]);

 if (VAR_4->suspend_clk_idx >= 0)
  FUNC_2(VAR_4->clks[VAR_4->suspend_clk_idx]);

 return VAR_9;
}
