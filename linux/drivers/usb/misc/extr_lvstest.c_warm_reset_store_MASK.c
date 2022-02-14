
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_device {int dummy; } ;
struct lvs_rh {int portnum; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int) ;
 struct usb_device* FUNC_1 (struct usb_interface*) ;
 int FUNC_2 (struct usb_device*,int ,int ) ;
 struct usb_interface* FUNC_3 (struct device*) ;
 struct lvs_rh* FUNC_4 (struct usb_interface*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
  struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct usb_interface *VAR_5 = FUNC_3(VAR_1);
 struct usb_device *VAR_6 = FUNC_1(VAR_5);
 struct lvs_rh *VAR_7 = FUNC_4(VAR_5);
 int VAR_8;

 VAR_8 = FUNC_2(VAR_6, VAR_7->portnum,
   VAR_0);
 if (VAR_8 < 0) {
  FUNC_0(VAR_1, "can't issue warm reset %d\n", VAR_8);
  return VAR_8;
 }

 return VAR_4;
}
