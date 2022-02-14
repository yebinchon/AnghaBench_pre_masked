
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct stm32_iwdg {void* clk_lsi; int rate; void* clk_pclk; TYPE_1__* data; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {scalar_t__ has_pclk; } ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,int ,void*) ;
 void* FUNC_6 (struct device*,char*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_1,
          struct stm32_iwdg *VAR_2)
{
 struct device *VAR_3 = &VAR_1->dev;
 u32 VAR_4;

 VAR_2->clk_lsi = FUNC_6(VAR_3, "lsi");
 if (FUNC_0(VAR_2->clk_lsi)) {
  FUNC_4(VAR_3, "Unable to get lsi clock\n");
  return FUNC_1(VAR_2->clk_lsi);
 }


 if (VAR_2->data->has_pclk) {
  VAR_2->clk_pclk = FUNC_6(VAR_3, "pclk");
  if (FUNC_0(VAR_2->clk_pclk)) {
   FUNC_4(VAR_3, "Unable to get pclk clock\n");
   return FUNC_1(VAR_2->clk_pclk);
  }

  VAR_4 = FUNC_3(VAR_2->clk_pclk);
  if (VAR_4) {
   FUNC_4(VAR_3, "Unable to prepare pclk clock\n");
   return VAR_4;
  }
  VAR_4 = FUNC_5(VAR_3,
            VAR_0,
            VAR_2->clk_pclk);
  if (VAR_4)
   return VAR_4;
 }

 VAR_4 = FUNC_3(VAR_2->clk_lsi);
 if (VAR_4) {
  FUNC_4(VAR_3, "Unable to prepare lsi clock\n");
  return VAR_4;
 }
 VAR_4 = FUNC_5(VAR_3, VAR_0,
           VAR_2->clk_lsi);
 if (VAR_4)
  return VAR_4;

 VAR_2->rate = FUNC_2(VAR_2->clk_lsi);

 return 0;
}
