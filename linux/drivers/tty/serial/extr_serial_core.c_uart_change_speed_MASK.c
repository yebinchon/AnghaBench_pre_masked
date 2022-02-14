
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_state {int dummy; } ;
struct uart_port {scalar_t__ type; int hw_stopped; int lock; TYPE_1__* ops; int status; } ;
struct ktermios {int c_cflag; } ;
struct tty_struct {struct ktermios termios; } ;
struct TYPE_2__ {int (* get_mctrl ) (struct uart_port*) ;int (* stop_tx ) (struct uart_port*) ;int (* set_termios ) (struct uart_port*,struct ktermios*,struct ktermios*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct uart_port*,struct ktermios*,struct ktermios*) ;
 int FUNC_4 (struct uart_port*) ;
 int FUNC_5 (struct uart_port*) ;
 struct uart_port* FUNC_6 (struct uart_state*) ;
 scalar_t__ FUNC_7 (struct uart_port*) ;

__attribute__((used)) static void FUNC_8(struct tty_struct *VAR_6, struct uart_state *VAR_7,
     struct ktermios *VAR_8)
{
 struct uart_port *VAR_9 = FUNC_6(VAR_7);
 struct ktermios *VAR_10;
 int VAR_11;





 if (!VAR_6 || VAR_9->type == VAR_2)
  return;

 VAR_10 = &VAR_6->termios;
 VAR_9->ops->set_termios(VAR_9, VAR_10, VAR_8);




 FUNC_1(&VAR_9->lock);
 if (VAR_10->c_cflag & VAR_1)
  VAR_9->status |= VAR_4;
 else
  VAR_9->status &= ~VAR_4;

 if (VAR_10->c_cflag & VAR_0)
  VAR_9->status &= ~VAR_5;
 else
  VAR_9->status |= VAR_5;


 VAR_11 = VAR_9->hw_stopped;
 VAR_9->hw_stopped = FUNC_7(VAR_9) &&
    !(VAR_9->ops->get_mctrl(VAR_9) & VAR_3);
 if (VAR_9->hw_stopped) {
  if (!VAR_11)
   VAR_9->ops->stop_tx(VAR_9);
 } else {
  if (VAR_11)
   FUNC_0(VAR_6);
 }
 FUNC_2(&VAR_9->lock);
}
