
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dev; } ;
struct serial_struct {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int
FUNC_1(struct uart_port *VAR_1, struct serial_struct *VAR_2)
{

 FUNC_0(VAR_1->dev, "serial_omap_verify_port+\n");
 return -VAR_0;
}
