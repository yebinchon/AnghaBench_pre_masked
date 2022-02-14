
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {scalar_t__ index; struct moxa_port* driver_data; } ;
struct serial_struct {scalar_t__ irq; scalar_t__ port; scalar_t__ custom_divisor; int baud_base; int flags; int close_delay; scalar_t__ type; } ;
struct TYPE_2__ {int flags; int close_delay; int mutex; } ;
struct moxa_port {scalar_t__ type; TYPE_1__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct moxa_port*,int) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct tty_struct *VAR_8,
  struct serial_struct *VAR_9)
{
 struct moxa_port *VAR_10 = VAR_8->driver_data;

 if (VAR_8->index == VAR_6)
  return -VAR_2;
 if (!VAR_10)
  return -VAR_3;

 if (VAR_9->irq != 0 || VAR_9->port != 0 ||
   VAR_9->custom_divisor != 0 ||
   VAR_9->baud_base != 921600)
  return -VAR_4;

 FUNC_2(&VAR_10->port.mutex);
 if (!FUNC_1(VAR_1)) {
  if (((VAR_9->flags & ~VAR_0) !=
       (VAR_10->port.flags & ~VAR_0))) {
   FUNC_3(&VAR_10->port.mutex);
   return -VAR_4;
  }
 }
 VAR_10->port.close_delay = VAR_9->close_delay * VAR_5 / 100;

 FUNC_0(VAR_10, VAR_9->type == VAR_7);

 VAR_10->type = VAR_9->type;
 FUNC_3(&VAR_10->port.mutex);
 return 0;
}
