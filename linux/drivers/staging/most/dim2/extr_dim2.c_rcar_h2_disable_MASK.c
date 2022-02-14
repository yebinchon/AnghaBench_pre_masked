
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct dim2_hdm {scalar_t__ io_base; int clk; } ;


 int FUNC_0 (int ) ;
 struct dim2_hdm* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct platform_device *VAR_0)
{
 struct dim2_hdm *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->clk);


 FUNC_2(0x0, VAR_1->io_base + 0x600);
}
