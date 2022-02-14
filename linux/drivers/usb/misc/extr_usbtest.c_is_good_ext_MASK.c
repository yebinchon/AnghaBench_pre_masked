
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct usbtest_dev {int dummy; } ;
struct usb_ext_cap_descriptor {scalar_t__ bLength; int bmAttributes; } ;


 int FUNC_0 (struct usbtest_dev*,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct usbtest_dev *VAR_1, u8 *VAR_2)
{
 struct usb_ext_cap_descriptor *VAR_3;
 u32 VAR_4;

 VAR_3 = (struct usb_ext_cap_descriptor *) VAR_2;

 if (VAR_3->bLength != VAR_0) {
  FUNC_0(VAR_1, "bogus usb 2.0 extension descriptor length\n");
  return 0;
 }

 VAR_4 = FUNC_1(VAR_3->bmAttributes);

 if (VAR_4 & ~0xfffe) {
  FUNC_0(VAR_1, "reserved bits set\n");
  return 0;
 }

 return 1;
}
