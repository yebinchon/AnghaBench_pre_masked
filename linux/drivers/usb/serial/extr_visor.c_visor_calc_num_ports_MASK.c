
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_serial_endpoints {int num_interrupt_in; int num_bulk_in; int * interrupt_in; int * bulk_in; } ;
struct usb_serial {TYPE_3__* interface; TYPE_2__* dev; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_4__ {int idVendor; } ;
struct TYPE_5__ {TYPE_1__ descriptor; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct usb_serial*) ;
 int FUNC_4 (struct usb_serial*,int *) ;

__attribute__((used)) static int FUNC_5(struct usb_serial *VAR_3,
     struct usb_serial_endpoints *VAR_4)
{
 unsigned int VAR_5 = FUNC_1(VAR_3->dev->descriptor.idVendor);
 int VAR_6 = (int)(long)(FUNC_3(VAR_3));

 if (VAR_6)
  FUNC_4(VAR_3, ((void*)0));





 if (!(VAR_5 == VAR_1 || VAR_5 == VAR_2) ||
   VAR_4->num_interrupt_in == 0)
  goto out;

 if (VAR_4->num_bulk_in < 2 || VAR_4->num_interrupt_in < 2) {
  FUNC_0(&VAR_3->interface->dev, "missing endpoints\n");
  return -VAR_0;
 }
 FUNC_2(VAR_4->bulk_in[0], VAR_4->bulk_in[1]);
 FUNC_2(VAR_4->interrupt_in[0], VAR_4->interrupt_in[1]);
out:
 return VAR_6;
}
