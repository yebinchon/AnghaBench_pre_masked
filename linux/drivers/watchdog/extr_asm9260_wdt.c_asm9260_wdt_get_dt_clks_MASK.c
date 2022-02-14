
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asm9260_wdt_priv {unsigned long wdt_freq; int dev; void* clk; void* clk_ahb; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_2 ;
 unsigned long FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*,int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,int ,void*) ;
 void* FUNC_7 (int ,char*) ;

__attribute__((used)) static int FUNC_8(struct asm9260_wdt_priv *VAR_3)
{
 int VAR_4;
 unsigned long VAR_5;

 VAR_3->clk = FUNC_7(VAR_3->dev, "mod");
 if (FUNC_0(VAR_3->clk)) {
  FUNC_5(VAR_3->dev, "Failed to get \"mod\" clk\n");
  return FUNC_1(VAR_3->clk);
 }


 VAR_3->clk_ahb = FUNC_7(VAR_3->dev, "ahb");
 if (FUNC_0(VAR_3->clk_ahb)) {
  FUNC_5(VAR_3->dev, "Failed to get \"ahb\" clk\n");
  return FUNC_1(VAR_3->clk_ahb);
 }

 VAR_4 = FUNC_3(VAR_3->clk_ahb);
 if (VAR_4) {
  FUNC_5(VAR_3->dev, "Failed to enable ahb_clk!\n");
  return VAR_4;
 }
 VAR_4 = FUNC_6(VAR_3->dev,
           VAR_2,
           VAR_3->clk_ahb);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_4(VAR_3->clk, VAR_0);
 if (VAR_4) {
  FUNC_5(VAR_3->dev, "Failed to set rate!\n");
  return VAR_4;
 }

 VAR_4 = FUNC_3(VAR_3->clk);
 if (VAR_4) {
  FUNC_5(VAR_3->dev, "Failed to enable clk!\n");
  return VAR_4;
 }
 VAR_4 = FUNC_6(VAR_3->dev,
           VAR_2,
           VAR_3->clk);
 if (VAR_4)
  return VAR_4;


 VAR_5 = FUNC_2(VAR_3->clk);
 if (!VAR_5) {
  FUNC_5(VAR_3->dev, "Failed, clk is 0!\n");
  return -VAR_1;
 }

 VAR_3->wdt_freq = VAR_5 / 2;

 return 0;
}
