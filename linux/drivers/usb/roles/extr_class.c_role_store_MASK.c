
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_role_switch {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,int*) ;
 int FUNC_1 (int ,char const*) ;
 struct usb_role_switch* FUNC_2 (struct device*) ;
 int FUNC_3 (struct usb_role_switch*,int) ;
 int VAR_1 ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2, struct device_attribute *VAR_3,
     const char *VAR_4, size_t VAR_5)
{
 struct usb_role_switch *VAR_6 = FUNC_2(VAR_2);
 int VAR_7;

 VAR_7 = FUNC_1(VAR_1, VAR_4);
 if (VAR_7 < 0) {
  bool VAR_8;


  VAR_7 = FUNC_0(VAR_4, &VAR_8);
  if (VAR_7 || VAR_8)
   return -VAR_0;
 }

 VAR_7 = FUNC_3(VAR_6, VAR_7);
 if (VAR_7)
  return VAR_7;

 return VAR_5;
}
