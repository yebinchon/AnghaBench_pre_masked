
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb4604 {int mode; struct device* dev; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct i2c_client*,int*,int ) ;
 struct i2c_client* FUNC_3 (struct device*) ;
 int FUNC_4 (struct usb4604*,int) ;

__attribute__((used)) static int FUNC_5(struct usb4604 *VAR_1)
{
 struct device *VAR_2 = VAR_1->dev;
 struct i2c_client *VAR_3 = FUNC_3(VAR_2);
 int VAR_4;
 u8 VAR_5[] = { 0xaa, 0x55, 0x00 };

 FUNC_4(VAR_1, 1);

 VAR_4 = FUNC_2(VAR_3, VAR_5, FUNC_0(VAR_5));
 if (VAR_4 < 0) {
  FUNC_4(VAR_1, 0);
  return VAR_4;
 }

 VAR_1->mode = VAR_0;
 FUNC_1(VAR_2, "switched to HUB mode\n");

 return 0;
}
