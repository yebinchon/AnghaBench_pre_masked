
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_port {int usb3_lpm_u1_permit; int usb3_lpm_u2_permit; struct usb_device* child; } ;
struct usb_hcd {int bandwidth_mutex; } ;
struct usb_device {int bus; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 struct usb_hcd* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const*,char*,int) ;
 struct usb_port* FUNC_4 (struct device*) ;
 int FUNC_5 (struct usb_device*) ;
 int FUNC_6 (struct usb_device*) ;
 int FUNC_7 (struct usb_device*) ;
 int FUNC_8 (struct usb_device*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_1,
          struct device_attribute *VAR_2,
          const char *VAR_3, size_t VAR_4)
{
 struct usb_port *VAR_5 = FUNC_4(VAR_1);
 struct usb_device *VAR_6 = VAR_5->child;
 struct usb_hcd *VAR_7;

 if (!FUNC_3(VAR_3, "u1_u2", 5)) {
  VAR_5->usb3_lpm_u1_permit = 1;
  VAR_5->usb3_lpm_u2_permit = 1;

 } else if (!FUNC_3(VAR_3, "u1", 2)) {
  VAR_5->usb3_lpm_u1_permit = 1;
  VAR_5->usb3_lpm_u2_permit = 0;

 } else if (!FUNC_3(VAR_3, "u2", 2)) {
  VAR_5->usb3_lpm_u1_permit = 0;
  VAR_5->usb3_lpm_u2_permit = 1;

 } else if (!FUNC_3(VAR_3, "0", 1)) {
  VAR_5->usb3_lpm_u1_permit = 0;
  VAR_5->usb3_lpm_u2_permit = 0;
 } else
  return -VAR_0;




 if (VAR_6) {
  VAR_7 = FUNC_0(VAR_6->bus);
  if (!VAR_7)
   return -VAR_0;
  FUNC_7(VAR_6);
  FUNC_1(VAR_7->bandwidth_mutex);
  if (!FUNC_5(VAR_6))
   FUNC_6(VAR_6);
  FUNC_2(VAR_7->bandwidth_mutex);
  FUNC_8(VAR_6);
 }

 return VAR_4;
}
