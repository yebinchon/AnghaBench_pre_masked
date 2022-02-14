
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct am35x_glue {int phy_clk; int clk; int phy; int musb; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct am35x_glue*) ;
 int FUNC_3 (int ) ;
 struct am35x_glue* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct am35x_glue *VAR_1 = FUNC_4(VAR_0);

 FUNC_3(VAR_1->musb);
 FUNC_5(VAR_1->phy);
 FUNC_0(VAR_1->clk);
 FUNC_0(VAR_1->phy_clk);
 FUNC_1(VAR_1->clk);
 FUNC_1(VAR_1->phy_clk);
 FUNC_2(VAR_1);

 return 0;
}
