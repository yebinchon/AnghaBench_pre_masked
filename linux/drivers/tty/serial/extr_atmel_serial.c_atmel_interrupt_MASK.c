
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct atmel_uart_port {unsigned int pending; unsigned int pending_status; int lock_suspended; scalar_t__ suspended; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct uart_port*,unsigned int) ;
 int FUNC_1 (struct uart_port*,unsigned int,unsigned int) ;
 int FUNC_2 (struct uart_port*,unsigned int) ;
 unsigned int FUNC_3 (struct uart_port*,int ) ;
 int FUNC_4 (struct uart_port*,int ,unsigned int) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct atmel_uart_port* FUNC_8 (struct uart_port*) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_6, void *VAR_7)
{
 struct uart_port *VAR_8 = VAR_7;
 struct atmel_uart_port *VAR_9 = FUNC_8(VAR_8);
 unsigned int VAR_10, VAR_11, VAR_12, VAR_13 = 0;

 FUNC_6(&VAR_9->lock_suspended);

 do {
  VAR_10 = FUNC_3(VAR_8, VAR_1);
  VAR_12 = FUNC_3(VAR_8, VAR_3);
  VAR_11 = VAR_10 & VAR_12;
  if (!VAR_11)
   break;

  if (VAR_9->suspended) {
   VAR_9->pending |= VAR_11;
   VAR_9->pending_status = VAR_10;
   FUNC_4(VAR_8, VAR_2, VAR_12);
   FUNC_5();
   break;
  }

  FUNC_0(VAR_8, VAR_11);
  FUNC_1(VAR_8, VAR_11, VAR_10);
  FUNC_2(VAR_8, VAR_11);
 } while (VAR_13++ < VAR_0);

 FUNC_7(&VAR_9->lock_suspended);

 return VAR_13 ? VAR_4 : VAR_5;
}
