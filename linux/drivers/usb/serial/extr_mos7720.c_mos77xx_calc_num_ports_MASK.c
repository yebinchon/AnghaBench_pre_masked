
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct usb_serial_endpoints {int * bulk_out; int * bulk_in; } ;
struct usb_serial {TYPE_2__* dev; } ;
struct TYPE_3__ {int idProduct; } ;
struct TYPE_4__ {TYPE_1__ descriptor; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct usb_serial *VAR_1,
     struct usb_serial_endpoints *VAR_2)
{
 u16 VAR_3 = FUNC_0(VAR_1->dev->descriptor.idProduct);

 if (VAR_3 == VAR_0) {







  FUNC_1(VAR_2->bulk_in[0], VAR_2->bulk_in[1]);
  FUNC_1(VAR_2->bulk_out[0], VAR_2->bulk_out[1]);

  return 1;
 }

 return 2;
}
