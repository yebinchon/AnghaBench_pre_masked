
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int name; struct cyclades_port* driver_data; } ;
struct serial_struct {int custom_divisor; int baud_base; int closing_wait; int close_delay; int flags; int irq; scalar_t__ port; scalar_t__ line; int type; } ;
struct TYPE_2__ {int closing_wait; int close_delay; int flags; } ;
struct cyclades_port {int custom_divisor; int baud; TYPE_1__ port; scalar_t__ line; struct cyclades_card* card; int type; } ;
struct cyclades_card {int irq; scalar_t__ first_line; } ;


 int VAR_0 ;
 struct cyclades_card* VAR_1 ;
 scalar_t__ FUNC_0 (struct cyclades_port*,int ,char*) ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_2,
    struct serial_struct *VAR_3)
{
 struct cyclades_port *VAR_4 = VAR_2->driver_data;
 struct cyclades_card *VAR_5 = VAR_4->card;

 if (FUNC_0(VAR_4, VAR_2->name, "cy_ioctl"))
  return -VAR_0;
 VAR_3->type = VAR_4->type;
 VAR_3->line = VAR_4->line;
 VAR_3->port = (VAR_4->card - VAR_1) * 0x100 + VAR_4->line -
   VAR_5->first_line;
 VAR_3->irq = VAR_5->irq;
 VAR_3->flags = VAR_4->port.flags;
 VAR_3->close_delay = VAR_4->port.close_delay;
 VAR_3->closing_wait = VAR_4->port.closing_wait;
 VAR_3->baud_base = VAR_4->baud;
 VAR_3->custom_divisor = VAR_4->custom_divisor;
 return 0;
}
