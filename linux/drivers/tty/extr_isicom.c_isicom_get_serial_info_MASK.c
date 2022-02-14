
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {int name; struct isi_port* driver_data; } ;
struct serial_struct {int closing_wait; int close_delay; int flags; int irq; int port; struct isi_port* line; } ;
struct TYPE_4__ {int mutex; int closing_wait; int close_delay; int flags; } ;
struct isi_port {TYPE_2__ port; TYPE_1__* card; } ;
struct TYPE_3__ {int irq; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct isi_port*,int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct tty_struct *VAR_2,
 struct serial_struct *VAR_3)
{
 struct isi_port *VAR_4 = VAR_2->driver_data;

 if (FUNC_0(VAR_4, VAR_2->name, "isicom_ioctl"))
  return -VAR_0;

 FUNC_1(&VAR_4->port.mutex);

 VAR_3->line = VAR_4 - VAR_1;
 VAR_3->port = VAR_4->card->base;
 VAR_3->irq = VAR_4->card->irq;
 VAR_3->flags = VAR_4->port.flags;

 VAR_3->close_delay = VAR_4->port.close_delay;
 VAR_3->closing_wait = VAR_4->port.closing_wait;
 FUNC_2(&VAR_4->port.mutex);
 return 0;
}
