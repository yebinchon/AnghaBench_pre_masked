
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* tty; } ;
struct slgt_info {int signals; TYPE_3__ port; int lock; int gpio_wait_q; int * tx_buf; int rx_timer; int tx_timer; int event_wait_q; int status_event_wait_q; int device_name; } ;
struct TYPE_5__ {int c_cflag; } ;
struct TYPE_6__ {int flags; TYPE_1__ termios; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct slgt_info*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct slgt_info*) ;
 int FUNC_7 (struct slgt_info*,int) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*,int ) ;
 int FUNC_12 (struct slgt_info*) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(struct slgt_info *VAR_6)
{
 unsigned long VAR_7;

 if (!FUNC_10(&VAR_6->port))
  return;

 FUNC_0(("%s shutdown\n", VAR_6->device_name));



 FUNC_13(&VAR_6->status_event_wait_q);
 FUNC_13(&VAR_6->event_wait_q);

 FUNC_1(&VAR_6->tx_timer);
 FUNC_1(&VAR_6->rx_timer);

 FUNC_3(VAR_6->tx_buf);
 VAR_6->tx_buf = ((void*)0);

 FUNC_8(&VAR_6->lock,VAR_7);

 FUNC_12(VAR_6);
 FUNC_4(VAR_6);

 FUNC_7(VAR_6, VAR_1 | VAR_2);

  if (!VAR_6->port.tty || VAR_6->port.tty->termios.c_cflag & VAR_0) {
  VAR_6->signals &= ~(VAR_4 | VAR_3);
  FUNC_6(VAR_6);
 }

 FUNC_2(&VAR_6->gpio_wait_q);

 FUNC_9(&VAR_6->lock,VAR_7);

 if (VAR_6->port.tty)
  FUNC_5(VAR_5, &VAR_6->port.tty->flags);

 FUNC_11(&VAR_6->port, 0);
}
