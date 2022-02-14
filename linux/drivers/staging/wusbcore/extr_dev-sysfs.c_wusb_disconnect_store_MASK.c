
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wusbhc {int mutex; } ;
struct usb_device {int portnum; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct wusbhc*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char const*,char*,unsigned int*) ;
 struct usb_device* FUNC_4 (struct device*) ;
 int FUNC_5 (int ) ;
 struct wusbhc* FUNC_6 (struct usb_device*) ;
 int FUNC_7 (struct wusbhc*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_2,
         struct device_attribute *VAR_3,
         const char *VAR_4, size_t VAR_5)
{
 struct usb_device *VAR_6;
 struct wusbhc *VAR_7;
 unsigned VAR_8;
 u8 VAR_9;

 if (FUNC_3(VAR_4, "%u", &VAR_8) != 1)
  return -VAR_0;
 if (VAR_8 == 0)
  return VAR_5;
 VAR_6 = FUNC_4(VAR_2);
 VAR_7 = FUNC_6(VAR_6);
 if (VAR_7 == ((void*)0))
  return -VAR_1;

 FUNC_1(&VAR_7->mutex);
 VAR_9 = FUNC_5(VAR_6->portnum);
 FUNC_0(VAR_7, VAR_9);
 FUNC_2(&VAR_7->mutex);
 FUNC_7(VAR_7);
 return VAR_5;
}
