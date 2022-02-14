
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb251xb {struct i2c_client* i2c; int * dev; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct usb251xb* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (struct i2c_client*,struct usb251xb*) ;
 int FUNC_2 (struct usb251xb*) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_2,
         const struct i2c_device_id *VAR_3)
{
 struct usb251xb *VAR_4;

 VAR_4 = FUNC_0(&VAR_2->dev, sizeof(struct usb251xb), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_1(VAR_2, VAR_4);
 VAR_4->dev = &VAR_2->dev;
 VAR_4->i2c = VAR_2;

 return FUNC_2(VAR_4);
}
