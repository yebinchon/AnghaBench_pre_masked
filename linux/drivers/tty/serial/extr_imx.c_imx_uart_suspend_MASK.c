
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int irq; } ;
struct imx_port {int clk_ipg; TYPE_1__ port; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct imx_port* FUNC_1 (struct device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct imx_port*,int) ;
 int VAR_0 ;
 int FUNC_4 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_1)
{
 struct imx_port *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 FUNC_4(&VAR_0, &VAR_2->port);
 FUNC_2(VAR_2->port.irq);

 VAR_3 = FUNC_0(VAR_2->clk_ipg);
 if (VAR_3)
  return VAR_3;


 FUNC_3(VAR_2, 1);

 return 0;
}
