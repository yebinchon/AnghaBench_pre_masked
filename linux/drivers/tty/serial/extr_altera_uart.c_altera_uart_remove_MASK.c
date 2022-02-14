
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int membase; scalar_t__ mapbase; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct uart_port* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *,struct uart_port*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_1)
{
 struct uart_port *VAR_2 = FUNC_1(VAR_1);

 if (VAR_2) {
  FUNC_2(&VAR_0, VAR_2);
  VAR_2->mapbase = 0;
  FUNC_0(VAR_2->membase);
 }

 return 0;
}
