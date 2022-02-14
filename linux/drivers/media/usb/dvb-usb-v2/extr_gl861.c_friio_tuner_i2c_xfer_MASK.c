
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int flags; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_usb_device {int i2c_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dvb_usb_device*,struct i2c_msg*) ;
 int FUNC_1 (struct dvb_usb_device*,struct i2c_msg*) ;
 struct dvb_usb_device* FUNC_2 (struct i2c_adapter*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct i2c_adapter *VAR_3, struct i2c_msg VAR_4[],
    int VAR_5)
{
 struct dvb_usb_device *VAR_6 = FUNC_2(VAR_3);
 int VAR_7;

 if (VAR_5 > 2)
  return -VAR_1;

 if (FUNC_3(&VAR_6->i2c_mutex) < 0)
  return -VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  int VAR_8;

  if (VAR_4[VAR_7].flags & VAR_2)
   VAR_8 = FUNC_0(VAR_6, &VAR_4[VAR_7]);
  else
   VAR_8 = FUNC_1(VAR_6, &VAR_4[VAR_7]);

  if (VAR_8 < 0)
   break;

  FUNC_5(1000, 2000);
 }

 FUNC_4(&VAR_6->i2c_mutex);
 return VAR_7;
}
