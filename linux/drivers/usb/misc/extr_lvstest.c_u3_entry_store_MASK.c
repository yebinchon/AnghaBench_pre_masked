
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
 int VAR_1 ;
 struct usb_device* FUNC_0 (struct usb_interface*) ;
 int FUNC_1 (struct usb_device*) ;
 int FUNC_2 (struct device*,char*,...) ;
 struct usb_device* FUNC_3 (struct usb_interface*) ;
 int FUNC_4 (struct usb_device*,int ,int ) ;
 struct usb_interface* FUNC_5 (struct device*) ;
 struct lvs_rh* FUNC_6 (struct usb_interface*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_2,
  struct device_attribute *VAR_3, const char *VAR_4, size_t VAR_5)
{
 struct usb_interface *VAR_6 = FUNC_5(VAR_2);
 struct usb_device *VAR_7 = FUNC_3(VAR_6);
 struct lvs_rh *VAR_8 = FUNC_6(VAR_6);
 struct usb_device *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_0(VAR_6);
 if (!VAR_9) {
  FUNC_2(VAR_2, "failed to create lvs device\n");
  return -VAR_0;
 }

 VAR_10 = FUNC_4(VAR_7, VAR_8->portnum,
   VAR_1);
 if (VAR_10 < 0)
  FUNC_2(VAR_2, "can't issue U3 entry %d\n", VAR_10);

 FUNC_1(VAR_9);

 if (VAR_10 < 0)
  return VAR_10;

 return VAR_5;
}
