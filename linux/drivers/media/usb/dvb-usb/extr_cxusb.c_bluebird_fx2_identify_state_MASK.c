
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bDeviceClass; int bDeviceSubClass; int bDeviceProtocol; } ;
struct usb_device {TYPE_1__ descriptor; } ;
struct dvb_usb_device_properties {int dummy; } ;
struct dvb_usb_device_description {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct usb_device *VAR_0,
           struct dvb_usb_device_properties *VAR_1,
           struct dvb_usb_device_description **VAR_2,
           int *VAR_3)
{
 int VAR_4 = *VAR_3;

 *VAR_3 = VAR_0->descriptor.bDeviceClass == 0xff &&
  VAR_0->descriptor.bDeviceSubClass == 0xff &&
  VAR_0->descriptor.bDeviceProtocol == 0xff;

 if (*VAR_3 && !VAR_4)
  *VAR_2 = ((void*)0);

 return 0;
}
