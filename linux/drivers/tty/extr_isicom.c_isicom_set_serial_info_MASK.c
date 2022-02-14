
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {int name; struct isi_port* driver_data; } ;
struct serial_struct {int flags; scalar_t__ close_delay; scalar_t__ closing_wait; } ;
struct TYPE_4__ {int flags; scalar_t__ close_delay; scalar_t__ closing_wait; int mutex; } ;
struct isi_port {TYPE_2__ port; TYPE_1__* card; } ;
struct TYPE_3__ {int card_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct tty_struct*) ;
 scalar_t__ FUNC_2 (struct isi_port*,int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct tty_struct *VAR_6,
     struct serial_struct *VAR_7)
{
 struct isi_port *VAR_8 = VAR_6->driver_data;
 int VAR_9;

 if (FUNC_2(VAR_8, VAR_6->name, "isicom_ioctl"))
  return -VAR_4;

 FUNC_3(&VAR_8->port.mutex);
 VAR_9 = ((VAR_8->port.flags & VAR_1) !=
  (VAR_7->flags & VAR_1));

 if (!FUNC_0(VAR_3)) {
  if ((VAR_7->close_delay != VAR_8->port.close_delay) ||
    (VAR_7->closing_wait != VAR_8->port.closing_wait) ||
    ((VAR_7->flags & ~VAR_2) !=
    (VAR_8->port.flags & ~VAR_2))) {
   FUNC_4(&VAR_8->port.mutex);
   return -VAR_5;
  }
  VAR_8->port.flags = ((VAR_8->port.flags & ~VAR_2) |
    (VAR_7->flags & VAR_2));
 } else {
  VAR_8->port.close_delay = VAR_7->close_delay;
  VAR_8->port.closing_wait = VAR_7->closing_wait;
  VAR_8->port.flags = ((VAR_8->port.flags & ~VAR_0) |
    (VAR_7->flags & VAR_0));
 }
 if (VAR_9) {
  unsigned long VAR_10;
  FUNC_5(&VAR_8->card->card_lock, VAR_10);
  FUNC_1(VAR_6);
  FUNC_6(&VAR_8->card->card_lock, VAR_10);
 }
 FUNC_4(&VAR_8->port.mutex);
 return 0;
}
