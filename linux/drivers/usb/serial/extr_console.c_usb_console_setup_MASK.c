
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct usbcons_info {struct usb_serial_port* port; } ;
struct TYPE_10__ {int console; scalar_t__ count; } ;
struct usb_serial_port {TYPE_4__ port; int dev; struct usb_serial* serial; } ;
struct usb_serial {int disc_mutex; int interface; TYPE_1__* type; } ;
struct TYPE_9__ {int c_cflag; } ;
struct tty_struct {TYPE_3__ termios; int * ops; TYPE_2__* driver; int tty_files; int files_lock; int ldisc_sem; int index; int kref; } ;
struct ktermios {int dummy; } ;
struct console {int index; } ;
struct TYPE_8__ {int owner; int kref; } ;
struct TYPE_7__ {int (* open ) (int *,struct usb_serial_port*) ;int (* set_termios ) (struct tty_struct*,struct usb_serial_port*,struct ktermios*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct tty_struct* FUNC_6 (int,int ) ;
 int FUNC_7 (struct ktermios*,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (char*,int *,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,struct usb_serial_port*) ;
 int FUNC_13 (struct tty_struct*,struct usb_serial_port*,struct ktermios*) ;
 int FUNC_14 (struct tty_struct*) ;
 int FUNC_15 (struct tty_struct*) ;
 int FUNC_16 (TYPE_4__*) ;
 int FUNC_17 (TYPE_4__*,int) ;
 int FUNC_18 (TYPE_4__*,struct tty_struct*) ;
 int FUNC_19 (struct tty_struct*) ;
 int FUNC_20 (TYPE_3__*,int,int) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int VAR_10 ;
 struct usb_serial_port* FUNC_23 (int ) ;
 int FUNC_24 (struct usb_serial*) ;
 TYPE_2__* VAR_11 ;
 struct usbcons_info VAR_12 ;

__attribute__((used)) static int FUNC_25(struct console *VAR_13, char *VAR_14)
{
 struct usbcons_info *VAR_15 = &VAR_12;
 int VAR_16 = 9600;
 int VAR_17 = 8;
 int VAR_18 = 'n';
 int VAR_19 = 0;
 int VAR_20 = VAR_1 | VAR_7 | VAR_0;
 char *VAR_21;
 struct usb_serial *VAR_22;
 struct usb_serial_port *VAR_23;
 int VAR_24;
 struct tty_struct *VAR_25 = ((void*)0);
 struct ktermios VAR_26;

 if (VAR_14) {
  VAR_16 = FUNC_10(VAR_14, ((void*)0), 10);
  VAR_21 = VAR_14;
  while (*VAR_21 >= '0' && *VAR_21 <= '9')
   VAR_21++;
  if (*VAR_21)
   VAR_18 = *VAR_21++;
  if (*VAR_21)
   VAR_17 = *VAR_21++ - '0';
  if (*VAR_21)
   VAR_19 = (*VAR_21++ == 'r');
 }


 if (VAR_16 == 0)
  VAR_16 = 9600;

 switch (VAR_17) {
 case 7:
  VAR_20 |= VAR_2;
  break;
 default:
 case 8:
  VAR_20 |= VAR_3;
  break;
 }
 switch (VAR_18) {
 case 'o': case 'O':
  VAR_20 |= VAR_9;
  break;
 case 'e': case 'E':
  VAR_20 |= VAR_8;
  break;
 }





 VAR_23 = FUNC_23(VAR_13->index);
 if (VAR_23 == ((void*)0)) {

  FUNC_9("No USB device connected to ttyUSB%i\n", VAR_13->index);
  return -VAR_4;
 }
 VAR_22 = VAR_23->serial;

 VAR_24 = FUNC_21(VAR_22->interface);
 if (VAR_24)
  goto error_get_interface;

 FUNC_18(&VAR_23->port, ((void*)0));

 VAR_15->port = VAR_23;

 ++VAR_23->port.count;
 if (!FUNC_16(&VAR_23->port)) {
  if (VAR_22->type->set_termios) {





   VAR_25 = FUNC_6(sizeof(*VAR_25), VAR_6);
   if (!VAR_25) {
    VAR_24 = -VAR_5;
    goto reset_open_count;
   }
   FUNC_5(&VAR_25->kref);
   VAR_25->driver = VAR_11;
   VAR_25->index = VAR_13->index;
   FUNC_3(&VAR_25->ldisc_sem);
   FUNC_11(&VAR_25->files_lock);
   FUNC_0(&VAR_25->tty_files);
   FUNC_4(&VAR_25->driver->kref);
   FUNC_1(VAR_25->driver->owner);
   VAR_25->ops = &VAR_10;
   FUNC_14(VAR_25);
   FUNC_18(&VAR_23->port, VAR_25);
  }



  VAR_24 = VAR_22->type->open(((void*)0), VAR_23);
  if (VAR_24) {
   FUNC_2(&VAR_23->dev, "could not open USB console port\n");
   goto fail;
  }

  if (VAR_22->type->set_termios) {
   VAR_25->termios.c_cflag = VAR_20;
   FUNC_20(&VAR_25->termios, VAR_16, VAR_16);
   FUNC_7(&VAR_26, 0, sizeof(struct ktermios));
   VAR_22->type->set_termios(VAR_25, VAR_23, &VAR_26);

   FUNC_18(&VAR_23->port, ((void*)0));
   FUNC_19(VAR_25);
   FUNC_15(VAR_25);
  }
  FUNC_17(&VAR_23->port, 1);
 }


 --VAR_23->port.count;


 VAR_23->port.console = 1;

 FUNC_8(&VAR_22->disc_mutex);
 return VAR_24;

 fail:
 FUNC_18(&VAR_23->port, ((void*)0));
 FUNC_15(VAR_25);
 reset_open_count:
 VAR_23->port.count = 0;
 VAR_15->port = ((void*)0);
 FUNC_22(VAR_22->interface);
 error_get_interface:
 FUNC_24(VAR_22);
 FUNC_8(&VAR_22->disc_mutex);
 return VAR_24;
}
