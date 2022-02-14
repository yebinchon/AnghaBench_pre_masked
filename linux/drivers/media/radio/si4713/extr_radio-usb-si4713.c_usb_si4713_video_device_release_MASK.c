
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_device {int dummy; } ;
struct i2c_adapter {int dummy; } ;
struct si4713_usb_device {struct si4713_usb_device* buffer; int v4l2_dev; struct i2c_adapter i2c_adapter; } ;


 int FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (struct si4713_usb_device*) ;
 struct si4713_usb_device* FUNC_2 (struct v4l2_device*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct v4l2_device *VAR_0)
{
 struct si4713_usb_device *VAR_1 = FUNC_2(VAR_0);
 struct i2c_adapter *VAR_2 = &VAR_1->i2c_adapter;

 FUNC_0(VAR_2);
 FUNC_3(&VAR_1->v4l2_dev);
 FUNC_1(VAR_1->buffer);
 FUNC_1(VAR_1);
}
