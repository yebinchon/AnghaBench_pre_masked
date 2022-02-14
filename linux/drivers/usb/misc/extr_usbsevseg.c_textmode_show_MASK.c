
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_sevsegdev {int textmode; } ;
struct usb_interface {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char**) ;
 char** VAR_0 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 struct usb_interface* FUNC_3 (struct device*) ;
 struct usb_sevsegdev* FUNC_4 (struct usb_interface*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
 struct device_attribute *VAR_2, char *VAR_3)
{
 struct usb_interface *VAR_4 = FUNC_3(VAR_1);
 struct usb_sevsegdev *VAR_5 = FUNC_4(VAR_4);
 int VAR_6;

 VAR_3[0] = 0;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_0); VAR_6++) {
  if (VAR_5->textmode == VAR_6) {
   FUNC_1(VAR_3, " [");
   FUNC_1(VAR_3, VAR_0[VAR_6]);
   FUNC_1(VAR_3, "] ");
  } else {
   FUNC_1(VAR_3, " ");
   FUNC_1(VAR_3, VAR_0[VAR_6]);
   FUNC_1(VAR_3, " ");
  }
 }
 FUNC_1(VAR_3, "\n");


 return FUNC_2(VAR_3);
}
