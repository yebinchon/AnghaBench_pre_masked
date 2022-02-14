
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {struct fwtty_port* driver_data; } ;
struct serial_struct {scalar_t__ irq; scalar_t__ port; scalar_t__ custom_divisor; int baud_base; int flags; int close_delay; } ;
struct TYPE_2__ {int flags; int close_delay; int mutex; } ;
struct fwtty_port {TYPE_1__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct tty_struct *VAR_4,
      struct serial_struct *VAR_5)
{
 struct fwtty_port *VAR_6 = VAR_4->driver_data;

 if (VAR_5->irq != 0 || VAR_5->port != 0 || VAR_5->custom_divisor != 0 ||
     VAR_5->baud_base != 400000000)
  return -VAR_2;

 FUNC_1(&VAR_6->port.mutex);
 if (!FUNC_0(VAR_1)) {
  if (((VAR_5->flags & ~VAR_0) !=
       (VAR_6->port.flags & ~VAR_0))) {
   FUNC_2(&VAR_6->port.mutex);
   return -VAR_2;
  }
 }
 VAR_6->port.close_delay = VAR_5->close_delay * VAR_3 / 100;
 FUNC_2(&VAR_6->port.mutex);

 return 0;
}
