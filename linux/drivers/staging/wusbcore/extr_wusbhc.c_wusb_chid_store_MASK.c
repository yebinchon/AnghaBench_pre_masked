
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wusbhc {int dummy; } ;
struct wusb_ckhdid {int * data; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (char const*,char*,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *) ;
 struct wusbhc* FUNC_2 (struct device*) ;
 int FUNC_3 (struct wusbhc*,struct wusb_ckhdid*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
          struct device_attribute *VAR_2,
          const char *VAR_3, size_t VAR_4)
{
 struct wusbhc *VAR_5 = FUNC_2(VAR_1);
 struct wusb_ckhdid VAR_6;
 ssize_t VAR_7;

 VAR_7 = FUNC_1(VAR_3,
   "%02hhx %02hhx %02hhx %02hhx "
   "%02hhx %02hhx %02hhx %02hhx "
   "%02hhx %02hhx %02hhx %02hhx "
   "%02hhx %02hhx %02hhx %02hhx\n",
   &VAR_6.data[0] , &VAR_6.data[1] ,
   &VAR_6.data[2] , &VAR_6.data[3] ,
   &VAR_6.data[4] , &VAR_6.data[5] ,
   &VAR_6.data[6] , &VAR_6.data[7] ,
   &VAR_6.data[8] , &VAR_6.data[9] ,
   &VAR_6.data[10], &VAR_6.data[11],
   &VAR_6.data[12], &VAR_6.data[13],
   &VAR_6.data[14], &VAR_6.data[15]);
 if (VAR_7 != 16) {
  FUNC_0(VAR_1, "Unrecognized CHID (need 16 8-bit hex digits): "
   "%d\n", (int)VAR_7);
  return -VAR_0;
 }
 VAR_7 = FUNC_3(VAR_5, &VAR_6);
 return VAR_7 < 0 ? VAR_7 : VAR_4;
}
