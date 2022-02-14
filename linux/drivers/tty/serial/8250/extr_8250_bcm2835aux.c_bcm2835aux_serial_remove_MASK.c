
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_3__ {int line; } ;
struct TYPE_4__ {TYPE_1__ port; } ;
struct bcm2835aux_data {int clk; TYPE_2__ uart; } ;


 int FUNC_0 (int ) ;
 struct bcm2835aux_data* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct bcm2835aux_data *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_1->uart.port.line);
 FUNC_0(VAR_1->clk);

 return 0;
}
