
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct img_ir_priv {int sys_clk; int clk; int irq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct img_ir_priv*) ;
 int FUNC_3 (struct img_ir_priv*) ;
 int FUNC_4 (struct img_ir_priv*) ;
 struct img_ir_priv* FUNC_5 (struct platform_device*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct img_ir_priv *VAR_1 = FUNC_5(VAR_0);

 FUNC_2(VAR_1->irq, VAR_1);
 FUNC_3(VAR_1);
 FUNC_4(VAR_1);

 if (!FUNC_0(VAR_1->clk))
  FUNC_1(VAR_1->clk);
 if (!FUNC_0(VAR_1->sys_clk))
  FUNC_1(VAR_1->sys_clk);
 return 0;
}
