
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct pic32_sqi {int sys_clk; int base_clk; int irq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct pic32_sqi*) ;
 struct pic32_sqi* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct pic32_sqi*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct pic32_sqi *VAR_1 = FUNC_2(VAR_0);


 FUNC_1(VAR_1->irq, VAR_1);
 FUNC_3(VAR_1);


 FUNC_0(VAR_1->base_clk);
 FUNC_0(VAR_1->sys_clk);

 return 0;
}
