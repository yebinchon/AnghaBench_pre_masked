
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct uart_port*,unsigned int,unsigned int) ;

__attribute__((used)) static void
FUNC_3(struct uart_port *VAR_0, unsigned int VAR_1, unsigned int VAR_2)
{
 if (!VAR_1)
  FUNC_0(VAR_0->dev);

 FUNC_2(VAR_0, VAR_1, VAR_2);

 if (VAR_1)
  FUNC_1(VAR_0->dev);
}
