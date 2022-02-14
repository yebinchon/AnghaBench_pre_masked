
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct mxs_auart_port {void* clk_ahb; int * dev; void* clk; } ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (void*,int ) ;
 int FUNC_7 (int *,char*) ;
 void* FUNC_8 (int *,char*) ;
 int FUNC_9 (struct mxs_auart_port*) ;

__attribute__((used)) static int FUNC_10(struct mxs_auart_port *VAR_0,
   struct platform_device *VAR_1)
{
 int VAR_2;

 if (!FUNC_9(VAR_0)) {
  VAR_0->clk = FUNC_8(&VAR_1->dev, ((void*)0));
  return FUNC_2(VAR_0->clk);
 }

 VAR_0->clk = FUNC_8(VAR_0->dev, "mod");
 if (FUNC_0(VAR_0->clk)) {
  FUNC_7(VAR_0->dev, "Failed to get \"mod\" clk\n");
  return FUNC_1(VAR_0->clk);
 }

 VAR_0->clk_ahb = FUNC_8(VAR_0->dev, "ahb");
 if (FUNC_0(VAR_0->clk_ahb)) {
  FUNC_7(VAR_0->dev, "Failed to get \"ahb\" clk\n");
  return FUNC_1(VAR_0->clk_ahb);
 }

 VAR_2 = FUNC_5(VAR_0->clk_ahb);
 if (VAR_2) {
  FUNC_7(VAR_0->dev, "Failed to enable ahb_clk!\n");
  return VAR_2;
 }

 VAR_2 = FUNC_6(VAR_0->clk, FUNC_4(VAR_0->clk_ahb));
 if (VAR_2) {
  FUNC_7(VAR_0->dev, "Failed to set rate!\n");
  goto disable_clk_ahb;
 }

 VAR_2 = FUNC_5(VAR_0->clk);
 if (VAR_2) {
  FUNC_7(VAR_0->dev, "Failed to enable clk!\n");
  goto disable_clk_ahb;
 }

 return 0;

disable_clk_ahb:
 FUNC_3(VAR_0->clk_ahb);
 return VAR_2;
}
