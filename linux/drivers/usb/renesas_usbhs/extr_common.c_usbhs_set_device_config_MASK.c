
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct usbhs_priv {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_3 (struct device*,char*,int) ;
 struct device* FUNC_4 (struct usbhs_priv*) ;
 int FUNC_5 (struct usbhs_priv*,scalar_t__,int) ;

int FUNC_6(struct usbhs_priv *VAR_5, int VAR_6,
      u16 VAR_7, u16 VAR_8, u16 VAR_9)
{
 struct device *VAR_10 = FUNC_4(VAR_5);
 u16 VAR_11 = 0;
 u32 VAR_12 = VAR_0 + (2 * VAR_6);

 if (VAR_6 > 10) {
  FUNC_3(VAR_10, "cannot set speed to unknown device %d\n", VAR_6);
  return -VAR_1;
 }

 if (VAR_7 > 0xA) {
  FUNC_3(VAR_10, "unsupported hub number %d\n", VAR_7);
  return -VAR_1;
 }

 switch (VAR_9) {
 case 128:
  VAR_11 = VAR_4;
  break;
 case 130:
  VAR_11 = VAR_2;
  break;
 case 129:
  VAR_11 = VAR_3;
  break;
 default:
  FUNC_3(VAR_10, "unsupported speed %d\n", VAR_9);
  return -VAR_1;
 }

 FUNC_5(VAR_5, VAR_12, FUNC_1(VAR_7) |
    FUNC_0(VAR_8)|
    FUNC_2(VAR_11));

 return 0;
}
