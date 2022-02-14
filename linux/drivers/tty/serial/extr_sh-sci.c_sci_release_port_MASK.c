
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int flags; int mapbase; int * membase; TYPE_1__* dev; } ;
struct sci_port {int reg_size; } ;
struct TYPE_2__ {scalar_t__ of_node; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 struct sci_port* FUNC_2 (struct uart_port*) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_1)
{
 struct sci_port *VAR_2 = FUNC_2(VAR_1);

 if (VAR_1->dev->of_node || (VAR_1->flags & VAR_0)) {
  FUNC_0(VAR_1->membase);
  VAR_1->membase = ((void*)0);
 }

 FUNC_1(VAR_1->mapbase, VAR_2->reg_size);
}
