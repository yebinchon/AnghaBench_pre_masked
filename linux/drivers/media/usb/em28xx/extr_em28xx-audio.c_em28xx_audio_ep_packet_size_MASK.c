
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_endpoint_descriptor {int wMaxPacketSize; } ;
struct usb_device {scalar_t__ speed; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct usb_device *VAR_1,
           struct usb_endpoint_descriptor *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_2->wMaxPacketSize);

 if (VAR_1->speed == VAR_0)
  return (VAR_3 & 0x7ff) * (1 + (((VAR_3) >> 11) & 0x03));

 return VAR_3 & 0x7ff;
}
