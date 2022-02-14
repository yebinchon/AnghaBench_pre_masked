
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {scalar_t__ index; struct moxa_port* driver_data; } ;
struct serial_struct {int baud_base; int close_delay; int flags; int line; int type; } ;
struct TYPE_4__ {int mutex; int close_delay; int flags; TYPE_1__* tty; } ;
struct moxa_port {TYPE_2__ port; int type; } ;
struct TYPE_3__ {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct tty_struct *VAR_3,
  struct serial_struct *VAR_4)
{
 struct moxa_port *VAR_5 = VAR_3->driver_data;

 if (VAR_3->index == VAR_2)
  return -VAR_0;
 if (!VAR_5)
  return -VAR_1;
 FUNC_0(&VAR_5->port.mutex);
 VAR_4->type = VAR_5->type,
 VAR_4->line = VAR_5->port.tty->index,
 VAR_4->flags = VAR_5->port.flags,
 VAR_4->baud_base = 921600,
 VAR_4->close_delay = VAR_5->port.close_delay;
 FUNC_1(&VAR_5->port.mutex);
 return 0;
}
