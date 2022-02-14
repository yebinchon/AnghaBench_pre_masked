
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usbtest_dev {int dummy; } ;
struct usb_ss_container_id_descriptor {scalar_t__ bLength; scalar_t__ bReserved; } ;


 int FUNC_0 (struct usbtest_dev*,char*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_1(struct usbtest_dev *VAR_1, u8 *VAR_2)
{
 struct usb_ss_container_id_descriptor *VAR_3;

 VAR_3 = (struct usb_ss_container_id_descriptor *) VAR_2;

 if (VAR_3->bLength != VAR_0) {
  FUNC_0(VAR_1, "bogus container id descriptor length\n");
  return 0;
 }

 if (VAR_3->bReserved) {
  FUNC_0(VAR_1, "reserved bits set\n");
  return 0;
 }

 return 1;
}
