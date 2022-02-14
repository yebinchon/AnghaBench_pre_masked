
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {size_t id; } ;
struct mxs_auart_port {int clk_ahb; int clk; int port; } ;


 int VAR_0 ;
 int ** VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct mxs_auart_port*) ;
 int FUNC_2 (struct mxs_auart_port*) ;
 struct mxs_auart_port* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_2)
{
 struct mxs_auart_port *VAR_3 = FUNC_3(VAR_2);

 FUNC_4(&VAR_0, &VAR_3->port);
 VAR_1[VAR_2->id] = ((void*)0);
 FUNC_2(VAR_3);
 if (FUNC_1(VAR_3)) {
  FUNC_0(VAR_3->clk);
  FUNC_0(VAR_3->clk_ahb);
 }

 return 0;
}
