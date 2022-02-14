
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_sevsegdev {int* decimals; } ;
struct usb_interface {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int ,int) ;
 size_t FUNC_1 (char const*,size_t) ;
 struct usb_interface* FUNC_2 (struct device*) ;
 int FUNC_3 (struct usb_sevsegdev*,int ) ;
 struct usb_sevsegdev* FUNC_4 (struct usb_interface*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_2,
 struct device_attribute *VAR_3, const char *VAR_4, size_t VAR_5)
{
 struct usb_interface *VAR_6 = FUNC_2(VAR_2);
 struct usb_sevsegdev *VAR_7 = FUNC_4(VAR_6);
 size_t VAR_8 = FUNC_1(VAR_4, VAR_5);
 int VAR_9;

 if (VAR_8 > sizeof(VAR_7->decimals))
  return -VAR_0;

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
  if (VAR_4[VAR_9] != '0' && VAR_4[VAR_9] != '1')
   return -VAR_0;

 FUNC_0(VAR_7->decimals, 0, sizeof(VAR_7->decimals));
 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
  if (VAR_4[VAR_9] == '1')
   VAR_7->decimals[VAR_8-1-VAR_9] = 1;

 FUNC_3(VAR_7, VAR_1);

 return VAR_5;
}
