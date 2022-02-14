
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct sci_port {int dummy; } ;



 int FUNC_0 (struct sci_port*) ;
 int FUNC_1 (struct sci_port*) ;
 struct sci_port* FUNC_2 (struct uart_port*) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_0, unsigned int VAR_1,
     unsigned int VAR_2)
{
 struct sci_port *VAR_3 = FUNC_2(VAR_0);

 switch (VAR_1) {
 case 128:
  FUNC_0(VAR_3);
  break;
 default:
  FUNC_1(VAR_3);
  break;
 }
}
