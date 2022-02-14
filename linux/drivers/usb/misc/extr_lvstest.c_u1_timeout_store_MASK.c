
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_device {int dummy; } ;
struct lvs_rh {unsigned long portnum; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int,...) ;
 struct usb_device* FUNC_1 (struct usb_interface*) ;
 int FUNC_2 (char const*,int,unsigned long*) ;
 int FUNC_3 (struct usb_device*,unsigned long,int ) ;
 struct usb_interface* FUNC_4 (struct device*) ;
 struct lvs_rh* FUNC_5 (struct usb_interface*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2,
  struct device_attribute *VAR_3, const char *VAR_4, size_t VAR_5)
{
 struct usb_interface *VAR_6 = FUNC_4(VAR_2);
 struct usb_device *VAR_7 = FUNC_1(VAR_6);
 struct lvs_rh *VAR_8 = FUNC_5(VAR_6);
 unsigned long VAR_9;
 int VAR_10;

 VAR_10 = FUNC_2(VAR_4, 10, &VAR_9);
 if (VAR_10 < 0) {
  FUNC_0(VAR_2, "couldn't parse string %d\n", VAR_10);
  return VAR_10;
 }

 if (VAR_9 > 127)
  return -VAR_0;

 VAR_10 = FUNC_3(VAR_7, VAR_8->portnum | (VAR_9 << 8),
   VAR_1);
 if (VAR_10 < 0) {
  FUNC_0(VAR_2, "Error %d while setting U1 timeout %ld\n", VAR_10, VAR_9);
  return VAR_10;
 }

 return VAR_5;
}
