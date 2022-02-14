
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wusbhc {int dummy; } ;
struct wusb_ckhdid {int * data; } ;
struct usb_device {int wusb_dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int ck ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wusb_ckhdid*,int) ;
 int FUNC_1 (char const*,char*,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *) ;
 struct usb_device* FUNC_2 (struct device*) ;
 int FUNC_3 (struct wusbhc*,int ,struct wusb_ckhdid*) ;
 struct wusbhc* FUNC_4 (struct usb_device*) ;
 int FUNC_5 (struct wusbhc*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2,
        struct device_attribute *VAR_3,
        const char *VAR_4, size_t VAR_5)
{
 int VAR_6;
 struct usb_device *VAR_7;
 struct wusbhc *VAR_8;
 struct wusb_ckhdid VAR_9;

 VAR_6 = FUNC_1(VAR_4,
   "%02hhx %02hhx %02hhx %02hhx "
   "%02hhx %02hhx %02hhx %02hhx "
   "%02hhx %02hhx %02hhx %02hhx "
   "%02hhx %02hhx %02hhx %02hhx\n",
   &VAR_9.data[0] , &VAR_9.data[1],
   &VAR_9.data[2] , &VAR_9.data[3],
   &VAR_9.data[4] , &VAR_9.data[5],
   &VAR_9.data[6] , &VAR_9.data[7],
   &VAR_9.data[8] , &VAR_9.data[9],
   &VAR_9.data[10], &VAR_9.data[11],
   &VAR_9.data[12], &VAR_9.data[13],
   &VAR_9.data[14], &VAR_9.data[15]);
 if (VAR_6 != 16)
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_2);
 VAR_8 = FUNC_4(VAR_7);
 if (VAR_8 == ((void*)0))
  return -VAR_1;
 VAR_6 = FUNC_3(VAR_8, VAR_7->wusb_dev, &VAR_9);
 FUNC_0(&VAR_9, sizeof(VAR_9));
 FUNC_5(VAR_8);
 return VAR_6 < 0 ? VAR_6 : VAR_5;
}
