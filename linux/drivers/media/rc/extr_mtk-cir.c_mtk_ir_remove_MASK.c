
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct mtk_ir {int clk; int bus; int irq; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mtk_ir*,int ) ;
 struct mtk_ir* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1)
{
 struct mtk_ir *VAR_2 = FUNC_2(VAR_1);






 FUNC_1(VAR_2, VAR_0);
 FUNC_3(VAR_2->irq);

 FUNC_0(VAR_2->bus);
 FUNC_0(VAR_2->clk);

 return 0;
}
