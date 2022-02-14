
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct davinci_glue {int clk; int musb; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct davinci_glue* FUNC_2 (struct platform_device*) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct davinci_glue *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(VAR_1->musb);
 FUNC_3();
 FUNC_0(VAR_1->clk);

 return 0;
}
