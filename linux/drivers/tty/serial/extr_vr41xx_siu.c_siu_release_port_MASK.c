
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int flags; int mapbase; int * membase; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,unsigned long) ;
 unsigned long FUNC_2 (struct uart_port*) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_1)
{
 unsigned long VAR_2;

 if (VAR_1->flags & VAR_0) {
  FUNC_0(VAR_1->membase);
  VAR_1->membase = ((void*)0);
 }

 VAR_2 = FUNC_2(VAR_1);
 FUNC_1(VAR_1->mapbase, VAR_2);
}
