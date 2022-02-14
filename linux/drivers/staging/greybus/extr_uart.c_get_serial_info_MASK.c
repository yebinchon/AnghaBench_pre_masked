
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {struct gb_tty* driver_data; } ;
struct serial_struct {int xmit_fifo_size; int baud_base; int close_delay; int closing_wait; int line; int type; } ;
struct TYPE_2__ {int close_delay; int closing_wait; } ;
struct gb_tty {TYPE_1__ port; int minor; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct tty_struct *VAR_2,
      struct serial_struct *VAR_3)
{
 struct gb_tty *VAR_4 = VAR_2->driver_data;

 VAR_3->type = VAR_1;
 VAR_3->line = VAR_4->minor;
 VAR_3->xmit_fifo_size = 16;
 VAR_3->baud_base = 9600;
 VAR_3->close_delay = VAR_4->port.close_delay / 10;
 VAR_3->closing_wait =
  VAR_4->port.closing_wait == VAR_0 ?
  VAR_0 : VAR_4->port.closing_wait / 10;
 return 0;
}
