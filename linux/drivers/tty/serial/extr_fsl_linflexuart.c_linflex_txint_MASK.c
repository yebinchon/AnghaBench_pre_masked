
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int lock; scalar_t__ membase; scalar_t__ x_char; TYPE_1__* state; } ;
struct circ_buf {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {struct circ_buf xmit; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct uart_port*) ;
 int FUNC_1 (struct uart_port*) ;
 unsigned long FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (struct circ_buf*) ;
 scalar_t__ FUNC_6 (struct circ_buf*) ;
 scalar_t__ FUNC_7 (struct uart_port*) ;
 int FUNC_8 (struct uart_port*) ;
 int FUNC_9 (scalar_t__,scalar_t__) ;
 int FUNC_10 (unsigned long,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_5, void *VAR_6)
{
 struct uart_port *VAR_7 = VAR_6;
 struct circ_buf *VAR_8 = &VAR_7->state->xmit;
 unsigned long VAR_9;
 unsigned long VAR_10;

 FUNC_3(&VAR_7->lock, VAR_9);

 if (VAR_7->x_char) {
  FUNC_9(VAR_7->x_char, VAR_7->membase + VAR_0);


  while (((VAR_10 = FUNC_2(VAR_7->membase + VAR_3)) &
   VAR_2) != VAR_2)
   ;

  FUNC_10(VAR_10 | VAR_2,
         VAR_7->membase + VAR_3);

  goto out;
 }

 if (FUNC_6(VAR_8) || FUNC_7(VAR_7)) {
  FUNC_0(VAR_7);
  goto out;
 }

 FUNC_1(VAR_7);

 if (FUNC_5(VAR_8) < VAR_4)
  FUNC_8(VAR_7);

out:
 FUNC_4(&VAR_7->lock, VAR_9);
 return VAR_1;
}
