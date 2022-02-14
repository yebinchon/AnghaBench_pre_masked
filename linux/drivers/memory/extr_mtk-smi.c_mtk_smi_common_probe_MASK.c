
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct mtk_smi {void* base; void* clk_async; void* smi_ao_base; TYPE_1__* plat; void* clk_gals1; void* clk_gals0; void* clk_smi; void* clk_apb; struct device* dev; } ;
struct TYPE_2__ {scalar_t__ gen; scalar_t__ has_gals; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (struct device*,char*) ;
 void* FUNC_4 (struct device*,struct resource*) ;
 struct mtk_smi* FUNC_5 (struct device*,int,int ) ;
 TYPE_1__* FUNC_6 (struct device*) ;
 struct resource* FUNC_7 (struct platform_device*,int ,int ) ;
 int FUNC_8 (struct platform_device*,struct mtk_smi*) ;
 int FUNC_9 (struct device*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_4)
{
 struct device *VAR_5 = &VAR_4->dev;
 struct mtk_smi *VAR_6;
 struct resource *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_5(VAR_5, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;
 VAR_6->dev = VAR_5;
 VAR_6->plat = FUNC_6(VAR_5);

 VAR_6->clk_apb = FUNC_3(VAR_5, "apb");
 if (FUNC_0(VAR_6->clk_apb))
  return FUNC_1(VAR_6->clk_apb);

 VAR_6->clk_smi = FUNC_3(VAR_5, "smi");
 if (FUNC_0(VAR_6->clk_smi))
  return FUNC_1(VAR_6->clk_smi);

 if (VAR_6->plat->has_gals) {
  VAR_6->clk_gals0 = FUNC_3(VAR_5, "gals0");
  if (FUNC_0(VAR_6->clk_gals0))
   return FUNC_1(VAR_6->clk_gals0);

  VAR_6->clk_gals1 = FUNC_3(VAR_5, "gals1");
  if (FUNC_0(VAR_6->clk_gals1))
   return FUNC_1(VAR_6->clk_gals1);
 }







 if (VAR_6->plat->gen == VAR_3) {
  VAR_7 = FUNC_7(VAR_4, VAR_2, 0);
  VAR_6->smi_ao_base = FUNC_4(VAR_5, VAR_7);
  if (FUNC_0(VAR_6->smi_ao_base))
   return FUNC_1(VAR_6->smi_ao_base);

  VAR_6->clk_async = FUNC_3(VAR_5, "async");
  if (FUNC_0(VAR_6->clk_async))
   return FUNC_1(VAR_6->clk_async);

  VAR_8 = FUNC_2(VAR_6->clk_async);
  if (VAR_8)
   return VAR_8;
 } else {
  VAR_7 = FUNC_7(VAR_4, VAR_2, 0);
  VAR_6->base = FUNC_4(VAR_5, VAR_7);
  if (FUNC_0(VAR_6->base))
   return FUNC_1(VAR_6->base);
 }
 FUNC_9(VAR_5);
 FUNC_8(VAR_4, VAR_6);
 return 0;
}
