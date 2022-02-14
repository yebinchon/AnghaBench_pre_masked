
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {TYPE_1__* state; struct aspeed_vuart* private_data; int lock; } ;
struct uart_8250_port {int dummy; } ;
struct aspeed_vuart {int unthrottle_timer; struct uart_8250_port* port; } ;
struct TYPE_2__ {int port; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (struct uart_8250_port*,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (struct uart_8250_port*) ;
 int FUNC_4 (struct uart_8250_port*,unsigned int) ;
 int FUNC_5 (struct uart_8250_port*) ;
 unsigned int FUNC_6 (struct uart_8250_port*,int ) ;
 unsigned int FUNC_7 (struct uart_port*,int ) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct uart_port*,unsigned long) ;
 scalar_t__ VAR_7 ;
 struct uart_8250_port* FUNC_13 (struct uart_port*) ;

__attribute__((used)) static int FUNC_14(struct uart_port *VAR_8)
{
 struct uart_8250_port *VAR_9 = FUNC_13(VAR_8);
 unsigned int VAR_10, VAR_11;
 unsigned long VAR_12;
 int VAR_13, VAR_14;

 VAR_10 = FUNC_7(VAR_8, VAR_0);

 if (VAR_10 & VAR_1)
  return 0;

 FUNC_8(&VAR_8->lock, VAR_12);

 VAR_11 = FUNC_7(VAR_8, VAR_2);

 if (VAR_11 & (VAR_4 | VAR_3)) {
  VAR_13 = FUNC_10(&VAR_8->state->port);

  if (!VAR_13) {

   struct aspeed_vuart *VAR_15 = VAR_8->private_data;
   FUNC_0(VAR_9, 1);

   if (!FUNC_9(&VAR_15->unthrottle_timer)) {
    VAR_15->port = VAR_9;
    FUNC_2(&VAR_15->unthrottle_timer,
       VAR_6 + VAR_7);
   }

  } else {
   VAR_14 = FUNC_1(VAR_13, 256);

   do {
    FUNC_4(VAR_9, VAR_11);
    VAR_11 = FUNC_6(VAR_9, VAR_2);
    if (--VAR_14 == 0)
     break;
   } while (VAR_11 & (VAR_4 | VAR_3));

   FUNC_11(&VAR_8->state->port);
  }
 }

 FUNC_3(VAR_9);
 if (VAR_11 & VAR_5)
  FUNC_5(VAR_9);

 FUNC_12(VAR_8, VAR_12);

 return 1;
}
