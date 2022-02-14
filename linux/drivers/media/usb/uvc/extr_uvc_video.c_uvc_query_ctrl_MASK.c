
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct uvc_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct uvc_device*,int,int,int,int,void*,int,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int ,int,int,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,int) ;

int FUNC_5(struct uvc_device *VAR_11, u8 VAR_12, u8 VAR_13,
   u8 VAR_14, u8 VAR_15, void *VAR_16, u16 VAR_17)
{
 int VAR_18;
 u8 VAR_19;
 u8 VAR_20;

 VAR_18 = FUNC_0(VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17,
    VAR_7);
 if (FUNC_1(VAR_18 == VAR_17))
  return 0;

 FUNC_2(VAR_6,
     "Failed to query (%s) UVC control %u on unit %u: %d (exp. %u).\n",
     FUNC_3(VAR_12), VAR_15, VAR_13, VAR_18, VAR_17);

 if (VAR_18 != -VAR_3)
  return VAR_18;

 VAR_20 = *(u8 *)VAR_16;

 VAR_18 = FUNC_0(VAR_11, VAR_8, 0, VAR_14,
          VAR_10, VAR_16, 1,
          VAR_7);

 VAR_19 = *(u8 *)VAR_16;
 *(u8 *)VAR_16 = VAR_20;

 if (VAR_18 != 1)
  return VAR_18 < 0 ? VAR_18 : -VAR_3;

 FUNC_4(VAR_9, "Control error %u\n", VAR_19);

 switch (VAR_19) {
 case 0:

  return -VAR_3;
 case 1:
  return -VAR_0;
 case 2:
  return -VAR_1;
 case 3:
  return -VAR_5;
 case 4:
  return -VAR_4;
 case 5:
 case 6:
 case 7:
 case 8:
  return -VAR_2;
 default:
  break;
 }

 return -VAR_3;
}
