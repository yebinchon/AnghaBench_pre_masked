
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbtest_dev {scalar_t__ buf; } ;
struct usb_config_descriptor {int bDescriptorType; int bLength; int bmAttributes; int wTotalLength; } ;


 int FUNC_0 (struct usbtest_dev*,char*) ;
 int VAR_0 ;


 int FUNC_1 (int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct usbtest_dev *VAR_2, int VAR_3)
{
 struct usb_config_descriptor *VAR_4;

 if (VAR_3 < sizeof(*VAR_4))
  return 0;
 VAR_4 = (struct usb_config_descriptor *) VAR_2->buf;

 switch (VAR_4->bDescriptorType) {
 case 129:
 case 128:
  if (VAR_4->bLength != 9) {
   FUNC_0(VAR_2, "bogus config descriptor length\n");
   return 0;
  }

  if (!VAR_1 && !(VAR_4->bmAttributes & 0x80)) {
   FUNC_0(VAR_2, "high bit of config attributes not set\n");
   return 0;
  }
  if (VAR_4->bmAttributes & 0x1f) {
   FUNC_0(VAR_2, "reserved config bits set\n");
   return 0;
  }
  break;
 default:
  return 0;
 }

 if (FUNC_1(VAR_4->wTotalLength) == VAR_3)
  return 1;
 if (FUNC_1(VAR_4->wTotalLength) >= VAR_0)
  return 1;
 FUNC_0(VAR_2, "bogus config descriptor read size\n");
 return 0;
}
