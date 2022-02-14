
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct tty_struct {struct hso_serial* driver_data; } ;
struct TYPE_3__ {scalar_t__ count; } ;
struct hso_serial {TYPE_2__* parent; int unthrottle_tasklet; TYPE_1__ port; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int mutex; int interface; int usb_gone; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct tty_struct *VAR_0, struct file *VAR_1)
{
 struct hso_serial *VAR_2 = VAR_0->driver_data;
 u8 VAR_3;

 FUNC_0(0x1, "Closing serial port\n");


 if (VAR_2 == ((void*)0))
  return;

 FUNC_2(&VAR_2->parent->mutex);
 VAR_3 = VAR_2->parent->usb_gone;

 if (!VAR_3)
  FUNC_6(VAR_2->parent->interface);



 VAR_2->port.count--;

 if (VAR_2->port.count <= 0) {
  VAR_2->port.count = 0;
  FUNC_5(&VAR_2->port, ((void*)0));
  if (!VAR_3)
   FUNC_1(VAR_2->parent);
  FUNC_4(&VAR_2->unthrottle_tasklet);
 }

 if (!VAR_3)
  FUNC_7(VAR_2->parent->interface);

 FUNC_3(&VAR_2->parent->mutex);
}
