
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct mxc_w1_device {int clk; int bus_master; } ;


 int FUNC_0 (int ) ;
 struct mxc_w1_device* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct mxc_w1_device *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(&VAR_1->bus_master);

 FUNC_0(VAR_1->clk);

 return 0;
}
