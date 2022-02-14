
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_serial_port {TYPE_2__* serial; } ;
struct tty_struct {int dummy; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct usb_serial_port*,int) ;
 int FUNC_2 (struct tty_struct*,struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_3(struct tty_struct *VAR_0,
    struct usb_serial_port *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1, 1);
 if (VAR_2) {
  FUNC_0(&VAR_1->serial->dev->dev,
         "Could not mark device as open (%d)\n",
         VAR_2);
  return VAR_2;
 }

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (VAR_2)
  FUNC_1(VAR_1, 0);

 return VAR_2;
}
