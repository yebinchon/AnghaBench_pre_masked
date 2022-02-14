
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int type; } ;
struct sci_port {TYPE_1__* cfg; } ;
struct TYPE_2__ {int type; } ;


 int VAR_0 ;
 int FUNC_0 (struct uart_port*) ;
 struct sci_port* FUNC_1 (struct uart_port*) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_1, int VAR_2)
{
 if (VAR_2 & VAR_0) {
  struct sci_port *VAR_3 = FUNC_1(VAR_1);

  VAR_1->type = VAR_3->cfg->type;
  FUNC_0(VAR_1);
 }
}
