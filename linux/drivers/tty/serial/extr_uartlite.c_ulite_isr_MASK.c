
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {TYPE_1__* state; int lock; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct uart_port*) ;
 int FUNC_4 (struct uart_port*,int) ;
 int FUNC_5 (struct uart_port*,int) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_3, void *VAR_4)
{
 struct uart_port *VAR_5 = VAR_4;
 int VAR_6, VAR_7, VAR_8 = 0;
 unsigned long VAR_9;

 do {
  FUNC_0(&VAR_5->lock, VAR_9);
  VAR_6 = FUNC_3(VAR_2, VAR_5);
  VAR_7 = FUNC_4(VAR_5, VAR_6);
  VAR_7 |= FUNC_5(VAR_5, VAR_6);
  FUNC_1(&VAR_5->lock, VAR_9);
  VAR_8++;
 } while (VAR_7);


 if (VAR_8 > 1) {
  FUNC_2(&VAR_5->state->port);
  return VAR_0;
 } else {
  return VAR_1;
 }
}
