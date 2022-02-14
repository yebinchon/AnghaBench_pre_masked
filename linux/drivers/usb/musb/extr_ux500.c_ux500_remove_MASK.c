
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ux500_glue {int clk; int musb; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct ux500_glue* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct ux500_glue *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(VAR_1->musb);
 FUNC_0(VAR_1->clk);

 return 0;
}
