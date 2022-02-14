
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usbtest_dev {int dummy; } ;
struct usb_ss_cap_descriptor {scalar_t__ bLength; int bmAttributes; int wSpeedSupported; } ;


 int FUNC_0 (struct usbtest_dev*,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct usbtest_dev *VAR_1, u8 *VAR_2)
{
 struct usb_ss_cap_descriptor *VAR_3;

 VAR_3 = (struct usb_ss_cap_descriptor *) VAR_2;

 if (VAR_3->bLength != VAR_0) {
  FUNC_0(VAR_1, "bogus superspeed device capability descriptor length\n");
  return 0;
 }





 if (VAR_3->bmAttributes & ~0x02) {
  FUNC_0(VAR_1, "reserved bits set in bmAttributes\n");
  return 0;
 }


 if (FUNC_1(VAR_3->wSpeedSupported) & ~0x0f) {
  FUNC_0(VAR_1, "reserved bits set in wSpeedSupported\n");
  return 0;
 }

 return 1;
}
