
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_port {scalar_t__ usb3_lpm_u2_permit; scalar_t__ usb3_lpm_u1_permit; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,char const*) ;
 struct usb_port* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
         struct device_attribute *VAR_1, char *VAR_2)
{
 struct usb_port *VAR_3 = FUNC_1(VAR_0);
 const char *VAR_4;

 if (VAR_3->usb3_lpm_u1_permit) {
  if (VAR_3->usb3_lpm_u2_permit)
   VAR_4 = "u1_u2";
  else
   VAR_4 = "u1";
 } else {
  if (VAR_3->usb3_lpm_u2_permit)
   VAR_4 = "u2";
  else
   VAR_4 = "0";
 }

 return FUNC_0(VAR_2, "%s\n", VAR_4);
}
