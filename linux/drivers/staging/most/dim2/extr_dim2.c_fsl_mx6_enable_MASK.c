
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct dim2_hdm {scalar_t__ clk_speed; void* clk_pll; scalar_t__ io_base; void* clk; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int *,char*,...) ;
 void* FUNC_4 (int *,char*) ;
 struct dim2_hdm* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_2)
{
 struct dim2_hdm *VAR_3 = FUNC_5(VAR_2);
 int VAR_4;

 VAR_3->clk = FUNC_4(&VAR_2->dev, "mlb");
 if (FUNC_0(VAR_3->clk)) {
  FUNC_3(&VAR_2->dev, "unable to get mlb clock\n");
  return -VAR_1;
 }

 VAR_4 = FUNC_2(VAR_3->clk);
 if (VAR_4) {
  FUNC_3(&VAR_2->dev, "%s\n", "clk_prepare_enable failed");
  return VAR_4;
 }

 if (VAR_3->clk_speed >= VAR_0) {

  VAR_3->clk_pll = FUNC_4(&VAR_2->dev, "pll8_mlb");
  if (FUNC_0(VAR_3->clk_pll)) {
   FUNC_3(&VAR_2->dev, "unable to get mlb pll clock\n");
   FUNC_1(VAR_3->clk);
   return -VAR_1;
  }

  FUNC_6(0x888, VAR_3->io_base + 0x38);
  FUNC_2(VAR_3->clk_pll);
 }

 return 0;
}
