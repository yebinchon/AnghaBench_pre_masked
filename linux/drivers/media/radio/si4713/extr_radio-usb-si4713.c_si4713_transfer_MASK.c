
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si4713_usb_device {int dummy; } ;
struct i2c_msg {int flags; int len; int buf; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct si4713_usb_device* FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (struct si4713_usb_device*,int ,int ) ;
 int FUNC_2 (struct si4713_usb_device*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_adapter *VAR_2,
    struct i2c_msg *VAR_3, int VAR_4)
{
 struct si4713_usb_device *VAR_5 = FUNC_0(VAR_2);
 int VAR_6 = -VAR_0;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  if (VAR_3[VAR_7].flags & VAR_1)
   VAR_6 = FUNC_1(VAR_5, VAR_3[VAR_7].buf, VAR_3[VAR_7].len);
  else
   VAR_6 = FUNC_2(VAR_5, VAR_3[VAR_7].buf, VAR_3[VAR_7].len);
  if (VAR_6)
   break;
 }

 return VAR_6 ? VAR_6 : VAR_4;
}
