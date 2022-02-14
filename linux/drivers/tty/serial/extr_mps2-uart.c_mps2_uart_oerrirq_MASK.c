
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int overrun; } ;
struct uart_port {int lock; TYPE_2__ icount; TYPE_1__* state; } ;
struct tty_port {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {struct tty_port port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct uart_port*,int ) ;
 int FUNC_1 (struct uart_port*,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct tty_port*) ;
 int FUNC_5 (struct tty_port*,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_6, void *VAR_7)
{
 irqreturn_t VAR_8 = VAR_1;
 struct uart_port *VAR_9 = VAR_7;
 u8 VAR_10 = FUNC_0(VAR_9, VAR_3);

 FUNC_2(&VAR_9->lock);

 if (VAR_10 & VAR_4) {
  struct tty_port *VAR_11 = &VAR_9->state->port;

  FUNC_1(VAR_9, VAR_4, VAR_3);
  VAR_9->icount.overrun++;
  FUNC_5(VAR_11, 0, VAR_2);
  FUNC_4(VAR_11);
  VAR_8 = VAR_0;
 }






 if (VAR_10 & VAR_5) {
  FUNC_1(VAR_9, VAR_5, VAR_3);
  VAR_8 = VAR_0;
 }

 FUNC_3(&VAR_9->lock);

 return VAR_8;
}
