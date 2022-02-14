
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dev; struct serial_state* driver_data; } ;
struct tty_port {int flags; int close_delay; int closing_wait; int low_latency; } ;
struct serial_struct {int flags; scalar_t__ custom_divisor; scalar_t__ port; scalar_t__ xmit_fifo_size; int baud_base; int close_delay; int closing_wait; scalar_t__ irq; } ;
struct serial_state {scalar_t__ custom_divisor; scalar_t__ port; scalar_t__ xmit_fifo_size; int baud_base; struct tty_port tport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct tty_struct*,struct serial_state*,int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct tty_struct*,struct serial_state*) ;
 int FUNC_4 (struct tty_struct*) ;
 scalar_t__ FUNC_5 (struct tty_port*) ;
 int FUNC_6 (struct tty_struct*) ;

__attribute__((used)) static int FUNC_7(struct tty_struct *VAR_7, struct serial_struct *VAR_8)
{
 struct serial_state *VAR_9 = VAR_7->driver_data;
 struct tty_port *VAR_10 = &VAR_9->tport;
 bool VAR_11;
 int VAR_12 = 0;

 FUNC_4(VAR_7);
 VAR_11 = ((VAR_8->flags ^ VAR_10->flags) & VAR_2) ||
  VAR_8->custom_divisor != VAR_9->custom_divisor;
 if (VAR_8->irq || VAR_8->port != VAR_9->port ||
   VAR_8->xmit_fifo_size != VAR_9->xmit_fifo_size) {
  FUNC_6(VAR_7);
  return -VAR_4;
 }

 if (!FUNC_2()) {
  if ((VAR_8->baud_base != VAR_9->baud_base) ||
      (VAR_8->close_delay != VAR_10->close_delay) ||
      (VAR_8->xmit_fifo_size != VAR_9->xmit_fifo_size) ||
      ((VAR_8->flags & ~VAR_3) !=
       (VAR_10->flags & ~VAR_3))) {
   FUNC_6(VAR_7);
   return -VAR_5;
  }
  VAR_10->flags = ((VAR_10->flags & ~VAR_3) |
          (VAR_8->flags & VAR_3));
  VAR_9->custom_divisor = VAR_8->custom_divisor;
  goto check_and_exit;
 }

 if (VAR_8->baud_base < 9600) {
  FUNC_6(VAR_7);
  return -VAR_4;
 }






 VAR_9->baud_base = VAR_8->baud_base;
 VAR_10->flags = ((VAR_10->flags & ~VAR_0) |
   (VAR_8->flags & VAR_0));
 VAR_9->custom_divisor = VAR_8->custom_divisor;
 VAR_10->close_delay = VAR_8->close_delay * VAR_6/100;
 VAR_10->closing_wait = VAR_8->closing_wait * VAR_6/100;
 VAR_10->low_latency = (VAR_10->flags & VAR_1) ? 1 : 0;

check_and_exit:
 if (FUNC_5(VAR_10)) {
  if (VAR_11) {

   if (VAR_8->flags & VAR_2)
    FUNC_1(VAR_7->dev, "use of SPD flags is deprecated\n");
   FUNC_0(VAR_7, VAR_9, ((void*)0));
  }
 } else
  VAR_12 = FUNC_3(VAR_7, VAR_9);
 FUNC_6(VAR_7);
 return VAR_12;
}
