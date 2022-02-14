
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int iotype; int flags; int iobase; int mapbase; int * membase; } ;
struct uart_8250_port {struct uart_port port; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int ,unsigned int) ;
 unsigned int FUNC_3 (struct uart_8250_port*) ;

__attribute__((used)) static void FUNC_4(struct uart_8250_port *VAR_1)
{
 unsigned int VAR_2 = FUNC_3(VAR_1);
 struct uart_port *VAR_3 = &VAR_1->port;

 switch (VAR_3->iotype) {
 case 135:
 case 128:
 case 131:
 case 130:
 case 132:
 case 133:
  if (!VAR_3->mapbase)
   break;

  if (VAR_3->flags & VAR_0) {
   FUNC_0(VAR_3->membase);
   VAR_3->membase = ((void*)0);
  }

  FUNC_1(VAR_3->mapbase, VAR_2);
  break;

 case 134:
 case 129:
  FUNC_2(VAR_3->iobase, VAR_2);
  break;
 }
}
