
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usdhi6_host {int mmc; int clk; int timeout_work; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct usdhi6_host* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct usdhi6_host*) ;
 int FUNC_6 (struct usdhi6_host*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 struct usdhi6_host *VAR_1 = FUNC_4(VAR_0);

 FUNC_3(VAR_1->mmc);

 FUNC_6(VAR_1);
 FUNC_0(&VAR_1->timeout_work);
 FUNC_5(VAR_1);
 FUNC_1(VAR_1->clk);
 FUNC_2(VAR_1->mmc);

 return 0;
}
