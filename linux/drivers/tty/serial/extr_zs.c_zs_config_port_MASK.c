
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zs_port {int dummy; } ;
struct uart_port {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct zs_port* FUNC_0 (struct uart_port*) ;
 scalar_t__ FUNC_1 (struct uart_port*) ;
 int FUNC_2 (struct zs_port*) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_2, int VAR_3)
{
 struct zs_port *VAR_4 = FUNC_0(VAR_2);

 if (VAR_3 & VAR_1) {
  if (FUNC_1(VAR_2))
   return;

  VAR_2->type = VAR_0;

  FUNC_2(VAR_4);
 }
}
