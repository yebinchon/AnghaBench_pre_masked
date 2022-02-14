
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {scalar_t__ index; struct mxser_port* driver_data; } ;
struct tty_port {unsigned int flags; scalar_t__ close_delay; int closing_wait; int low_latency; int mutex; } ;
struct serial_struct {scalar_t__ irq; scalar_t__ port; scalar_t__ baud_base; scalar_t__ close_delay; int flags; int closing_wait; scalar_t__ custom_divisor; int type; } ;
struct mxser_port {scalar_t__ ioaddr; scalar_t__ baud_base; scalar_t__ custom_divisor; int slock; int type; struct tty_port port; TYPE_1__* board; } ;
typedef int speed_t ;
struct TYPE_2__ {scalar_t__ irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tty_port*,struct tty_struct*) ;
 int FUNC_4 (struct tty_struct*) ;
 int FUNC_5 (struct mxser_port*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct tty_struct*,int,int) ;
 scalar_t__ FUNC_9 (struct tty_struct*) ;
 scalar_t__ FUNC_10 (struct tty_port*) ;
 int FUNC_11 (struct tty_port*,int) ;

__attribute__((used)) static int FUNC_12(struct tty_struct *VAR_13,
  struct serial_struct *VAR_14)
{
 struct mxser_port *VAR_15 = VAR_13->driver_data;
 struct tty_port *VAR_16 = &VAR_15->port;
 speed_t VAR_17;
 unsigned long VAR_18;
 unsigned int VAR_19;
 int VAR_20 = 0;

 if (VAR_13->index == VAR_12)
  return -VAR_9;
 if (FUNC_9(VAR_13))
  return -VAR_7;

 FUNC_1(&VAR_16->mutex);
 if (!VAR_15->ioaddr) {
  FUNC_2(&VAR_16->mutex);
  return -VAR_8;
 }

 if (VAR_14->irq != VAR_15->board->irq ||
   VAR_14->port != VAR_15->ioaddr) {
  FUNC_2(&VAR_16->mutex);
  return -VAR_6;
 }

 VAR_19 = VAR_16->flags & VAR_3;

 if (!FUNC_0(VAR_5)) {
  if ((VAR_14->baud_base != VAR_15->baud_base) ||
    (VAR_14->close_delay != VAR_15->port.close_delay) ||
    ((VAR_14->flags & ~VAR_4) != (VAR_15->port.flags & ~VAR_4))) {
   FUNC_2(&VAR_16->mutex);
   return -VAR_10;
  }
  VAR_15->port.flags = ((VAR_15->port.flags & ~VAR_4) |
    (VAR_14->flags & VAR_4));
 } else {




  VAR_16->flags = ((VAR_16->flags & ~VAR_0) |
    (VAR_14->flags & VAR_0));
  VAR_16->close_delay = VAR_14->close_delay * VAR_11 / 100;
  VAR_16->closing_wait = VAR_14->closing_wait * VAR_11 / 100;
  VAR_16->low_latency = (VAR_16->flags & VAR_1) ? 1 : 0;
  if ((VAR_16->flags & VAR_3) == VAR_2 &&
    (VAR_14->baud_base != VAR_15->baud_base ||
    VAR_14->custom_divisor !=
    VAR_15->custom_divisor)) {
   if (VAR_14->custom_divisor == 0) {
    FUNC_2(&VAR_16->mutex);
    return -VAR_6;
   }
   VAR_17 = VAR_14->baud_base / VAR_14->custom_divisor;
   FUNC_8(VAR_13, VAR_17, VAR_17);
  }
 }

 VAR_15->type = VAR_14->type;

 FUNC_5(VAR_15);

 if (FUNC_10(VAR_16)) {
  if (VAR_19 != (VAR_16->flags & VAR_3)) {
   FUNC_6(&VAR_15->slock, VAR_18);
   FUNC_4(VAR_13);
   FUNC_7(&VAR_15->slock, VAR_18);
  }
 } else {
  VAR_20 = FUNC_3(VAR_16, VAR_13);
  if (VAR_20 == 0)
   FUNC_11(VAR_16, 1);
 }
 FUNC_2(&VAR_16->mutex);
 return VAR_20;
}
