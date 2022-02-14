
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_uart_port_info {int flags; int uartclk; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct omap_uart_port_info* FUNC_0 (struct device*,int,int ) ;
 int FUNC_1 (int ,char*,int *) ;

__attribute__((used)) static struct omap_uart_port_info *FUNC_2(struct device *VAR_2)
{
 struct omap_uart_port_info *VAR_3;

 VAR_3 = FUNC_0(VAR_2, sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 FUNC_1(VAR_2->of_node, "clock-frequency",
      &VAR_3->uartclk);

 VAR_3->flags = VAR_1;

 return VAR_3;
}
