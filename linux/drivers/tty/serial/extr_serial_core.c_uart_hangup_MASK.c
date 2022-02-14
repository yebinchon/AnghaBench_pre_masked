
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_port {int mutex; int delta_msr_wait; int open_wait; int lock; scalar_t__ count; } ;
struct uart_state {struct tty_port port; } ;
struct uart_port {int dummy; } ;
struct tty_struct {int index; struct uart_state* driver_data; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (struct tty_port*) ;
 int FUNC_7 (struct tty_port*,int ) ;
 int FUNC_8 (struct tty_port*,int *) ;
 int FUNC_9 (struct uart_state*,int ) ;
 int FUNC_10 (struct uart_port*) ;
 int FUNC_11 (struct tty_struct*) ;
 struct uart_port* FUNC_12 (struct uart_state*) ;
 int FUNC_13 (struct tty_struct*,struct uart_state*) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void FUNC_15(struct tty_struct *VAR_1)
{
 struct uart_state *VAR_2 = VAR_1->driver_data;
 struct tty_port *VAR_3 = &VAR_2->port;
 struct uart_port *VAR_4;
 unsigned long VAR_5;

 FUNC_3("uart_hangup(%d)\n", VAR_1->index);

 FUNC_1(&VAR_3->mutex);
 VAR_4 = FUNC_12(VAR_2);
 FUNC_0(!VAR_4, "hangup of detached port!\n");

 if (FUNC_6(VAR_3)) {
  FUNC_11(VAR_1);
  FUNC_13(VAR_1, VAR_2);
  FUNC_4(&VAR_3->lock, VAR_5);
  VAR_3->count = 0;
  FUNC_5(&VAR_3->lock, VAR_5);
  FUNC_7(VAR_3, 0);
  FUNC_8(VAR_3, ((void*)0));
  if (VAR_4 && !FUNC_10(VAR_4))
   FUNC_9(VAR_2, VAR_0);
  FUNC_14(&VAR_3->open_wait);
  FUNC_14(&VAR_3->delta_msr_wait);
 }
 FUNC_2(&VAR_3->mutex);
}
