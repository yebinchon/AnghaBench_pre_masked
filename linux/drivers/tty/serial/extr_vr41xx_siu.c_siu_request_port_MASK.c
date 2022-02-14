
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int flags; int * membase; int mapbase; } ;
struct resource {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (struct resource*) ;
 struct resource* FUNC_2 (int ,unsigned long,int ) ;
 unsigned long FUNC_3 (struct uart_port*) ;
 int FUNC_4 (struct uart_port*) ;

__attribute__((used)) static int FUNC_5(struct uart_port *VAR_3)
{
 unsigned long VAR_4;
 struct resource *VAR_5;

 VAR_4 = FUNC_3(VAR_3);
 VAR_5 = FUNC_2(VAR_3->mapbase, VAR_4, FUNC_4(VAR_3));
 if (VAR_5 == ((void*)0))
  return -VAR_0;

 if (VAR_3->flags & VAR_2) {
  VAR_3->membase = FUNC_0(VAR_3->mapbase, VAR_4);
  if (VAR_3->membase == ((void*)0)) {
   FUNC_1(VAR_5);
   return -VAR_1;
  }
 }

 return 0;
}
