
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct img_ir_priv {int irq; void* sys_clk; void* clk; void* reg_base; int lock; int * dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (int *,char*) ;
 void* FUNC_6 (int *,char*) ;
 void* FUNC_7 (int *,struct resource*) ;
 struct img_ir_priv* FUNC_8 (int *,int,int ) ;
 int FUNC_9 (struct img_ir_priv*) ;
 int VAR_5 ;
 int FUNC_10 (struct img_ir_priv*) ;
 int FUNC_11 (struct img_ir_priv*) ;
 int FUNC_12 (struct img_ir_priv*) ;
 int FUNC_13 (struct img_ir_priv*) ;
 int FUNC_14 (struct img_ir_priv*) ;
 int FUNC_15 (struct platform_device*,int ) ;
 struct resource* FUNC_16 (struct platform_device*,int ,int ) ;
 int FUNC_17 (struct platform_device*,struct img_ir_priv*) ;
 int FUNC_18 (int,int ,int ,char*,struct img_ir_priv*) ;
 int FUNC_19 (int *) ;

__attribute__((used)) static int FUNC_20(struct platform_device *VAR_6)
{
 struct img_ir_priv *VAR_7;
 struct resource *VAR_8;
 int VAR_9, VAR_10, VAR_11;


 VAR_9 = FUNC_15(VAR_6, 0);
 if (VAR_9 < 0)
  return VAR_9;


 VAR_7 = FUNC_8(&VAR_6->dev, sizeof(*VAR_7), VAR_3);
 if (!VAR_7)
  return -VAR_2;

 FUNC_17(VAR_6, VAR_7);
 VAR_7->dev = &VAR_6->dev;
 FUNC_19(&VAR_7->lock);


 VAR_8 = FUNC_16(VAR_6, VAR_4, 0);
 VAR_7->reg_base = FUNC_7(&VAR_6->dev, VAR_8);
 if (FUNC_0(VAR_7->reg_base))
  return FUNC_1(VAR_7->reg_base);


 VAR_7->clk = FUNC_6(&VAR_6->dev, "core");
 if (FUNC_0(VAR_7->clk))
  FUNC_5(&VAR_6->dev, "cannot get core clock resource\n");


 VAR_7->sys_clk = FUNC_6(&VAR_6->dev, "sys");
 if (FUNC_0(VAR_7->sys_clk))
  FUNC_5(&VAR_6->dev, "cannot get sys clock resource\n");





 if (!FUNC_0(VAR_7->sys_clk)) {
  VAR_10 = FUNC_3(VAR_7->sys_clk);
  if (VAR_10) {
   FUNC_4(&VAR_6->dev, "cannot enable sys clock\n");
   return VAR_10;
  }
 }


 VAR_10 = FUNC_11(VAR_7);
 VAR_11 = FUNC_10(VAR_7);
 if (VAR_10 && VAR_11) {
  if (VAR_10 == -VAR_1)
   VAR_10 = VAR_11;
  goto err_probe;
 }


 VAR_7->irq = VAR_9;
 VAR_10 = FUNC_18(VAR_7->irq, VAR_5, 0, "img-ir", VAR_7);
 if (VAR_10) {
  FUNC_4(&VAR_6->dev, "cannot register IRQ %u\n",
   VAR_7->irq);
  VAR_10 = -VAR_0;
  goto err_irq;
 }

 FUNC_9(VAR_7);
 FUNC_14(VAR_7);

 return 0;

err_irq:
 FUNC_12(VAR_7);
 FUNC_13(VAR_7);
err_probe:
 if (!FUNC_0(VAR_7->sys_clk))
  FUNC_2(VAR_7->sys_clk);
 return VAR_10;
}
