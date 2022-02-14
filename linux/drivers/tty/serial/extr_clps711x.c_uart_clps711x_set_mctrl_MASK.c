
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dev; } ;
struct clps711x_port {int gpios; } ;


 struct clps711x_port* FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_0, unsigned int VAR_1)
{
 struct clps711x_port *VAR_2 = FUNC_0(VAR_0->dev);

 FUNC_1(VAR_2->gpios, VAR_1);
}
