
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dev; } ;
struct clps711x_port {int gpios; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 struct clps711x_port* FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ,unsigned int*) ;

__attribute__((used)) static unsigned int FUNC_2(struct uart_port *VAR_3)
{
 unsigned int VAR_4 = VAR_2 | VAR_1 | VAR_0;
 struct clps711x_port *VAR_5 = FUNC_0(VAR_3->dev);

 return FUNC_1(VAR_5->gpios, &VAR_4);
}
