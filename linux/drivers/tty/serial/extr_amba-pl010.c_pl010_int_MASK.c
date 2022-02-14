
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; scalar_t__ membase; } ;
struct uart_amba_port {TYPE_1__ port; } ;
typedef int irqreturn_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_1 (struct uart_amba_port*) ;
 int FUNC_2 (struct uart_amba_port*) ;
 int FUNC_3 (struct uart_amba_port*) ;
 unsigned int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_6, void *VAR_7)
{
 struct uart_amba_port *VAR_8 = VAR_7;
 unsigned int VAR_9, VAR_10 = VAR_0;
 int VAR_11 = 0;

 FUNC_5(&VAR_8->port.lock);

 VAR_9 = FUNC_4(VAR_8->port.membase + VAR_1);
 if (VAR_9) {
  do {
   if (VAR_9 & (VAR_4 | VAR_3))
    FUNC_2(VAR_8);
   if (VAR_9 & VAR_2)
    FUNC_1(VAR_8);
   if (VAR_9 & VAR_5)
    FUNC_3(VAR_8);

   if (VAR_10-- == 0)
    break;

   VAR_9 = FUNC_4(VAR_8->port.membase + VAR_1);
  } while (VAR_9 & (VAR_4 | VAR_3 |
       VAR_5));
  VAR_11 = 1;
 }

 FUNC_6(&VAR_8->port.lock);

 return FUNC_0(VAR_11);
}
