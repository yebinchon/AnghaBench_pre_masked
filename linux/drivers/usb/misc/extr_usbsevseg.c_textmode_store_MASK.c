
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_sevsegdev {int textmode; } ;
struct usb_interface {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char const*) ;
 struct usb_interface* FUNC_1 (struct device*) ;
 int FUNC_2 (struct usb_sevsegdev*,int ) ;
 struct usb_sevsegdev* FUNC_3 (struct usb_interface*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
 struct device_attribute *VAR_3, const char *VAR_4, size_t VAR_5)
{
 struct usb_interface *VAR_6 = FUNC_1(VAR_2);
 struct usb_sevsegdev *VAR_7 = FUNC_3(VAR_6);
 int VAR_8;

 VAR_8 = FUNC_0(VAR_1, VAR_4);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_7->textmode = VAR_8;
 FUNC_2(VAR_7, VAR_0);
 return VAR_5;
}
