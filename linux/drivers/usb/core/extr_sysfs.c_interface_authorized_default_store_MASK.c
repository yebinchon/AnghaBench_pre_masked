
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int flags; } ;
struct usb_device {int bus; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct usb_hcd* FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (char const*,int*) ;
 struct usb_device* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_2,
  struct device_attribute *VAR_3, const char *VAR_4, size_t VAR_5)
{
 struct usb_device *VAR_6 = FUNC_4(VAR_2);
 struct usb_hcd *VAR_7 = FUNC_0(VAR_6->bus);
 int VAR_8 = VAR_5;
 bool VAR_9;

 if (FUNC_3(VAR_4, &VAR_9) != 0)
  return -VAR_0;

 if (VAR_9)
  FUNC_2(VAR_1, &VAR_7->flags);
 else
  FUNC_1(VAR_1, &VAR_7->flags);

 return VAR_8;
}
