
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int read_urb; } ;
struct tty_struct {int dummy; } ;
struct garmin_data {scalar_t__ state; int lock; int flags; scalar_t__ count; int mode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct usb_serial_port*) ;
 int VAR_3 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct garmin_data* FUNC_3 (struct usb_serial_port*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct tty_struct *VAR_4, struct usb_serial_port *VAR_5)
{
 unsigned long VAR_6;
 int VAR_7 = 0;
 struct garmin_data *VAR_8 = FUNC_3(VAR_5);

 FUNC_1(&VAR_8->lock, VAR_6);
 VAR_8->mode = VAR_3;
 VAR_8->count = 0;
 VAR_8->flags &= VAR_0;
 FUNC_2(&VAR_8->lock, VAR_6);


 FUNC_4(VAR_5->read_urb);

 if (VAR_8->state == VAR_2)
  VAR_7 = FUNC_0(VAR_5);

 VAR_8->state = VAR_1;
 return VAR_7;
}
