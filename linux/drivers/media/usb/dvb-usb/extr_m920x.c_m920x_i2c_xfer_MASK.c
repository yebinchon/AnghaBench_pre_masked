
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int flags; int len; int addr; int* buf; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_usb_device {int i2c_mutex; int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct dvb_usb_device* FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (int ,int ,int,int,int*,int) ;
 int FUNC_2 (int ,int ,int,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct i2c_adapter *VAR_8, struct i2c_msg VAR_9[], int VAR_10)
{
 struct dvb_usb_device *VAR_11 = FUNC_0(VAR_8);
 int VAR_12, VAR_13;
 int VAR_14 = 0;

 if (FUNC_3(&VAR_11->i2c_mutex) < 0)
  return -VAR_0;

 for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
  if (VAR_9[VAR_12].flags & (VAR_4 | VAR_2 | VAR_6) || VAR_9[VAR_12].len == 0) {





   VAR_14 = -VAR_1;
   goto unlock;
  }

  if (!(VAR_9[VAR_12].flags & VAR_3)) {
   if ((VAR_14 = FUNC_2(VAR_11->udev, VAR_7,
     (VAR_9[VAR_12].addr << 1) |
     (VAR_9[VAR_12].flags & VAR_5 ? 0x01 : 0), 0x80)) != 0)
    goto unlock;

  }
  if (VAR_9[VAR_12].flags & VAR_5) {
   for (VAR_13 = 0; VAR_13 < VAR_9[VAR_12].len; VAR_13++) {


    int VAR_15 = (VAR_12+1 == VAR_10 && VAR_13+1 == VAR_9[VAR_12].len) ? 0x40 : 0x01;

    if ((VAR_14 = FUNC_1(VAR_11->udev, VAR_7, 0x0,
            0x20 | VAR_15,
            &VAR_9[VAR_12].buf[VAR_13], 1)) != 0)
     goto unlock;
   }
  } else {
   for (VAR_13 = 0; VAR_13 < VAR_9[VAR_12].len; VAR_13++) {

    int VAR_16 = (VAR_12+1 == VAR_10 && VAR_13+1 == VAR_9[VAR_12].len) ? 0x40 : 0x00;

    if ((VAR_14 = FUNC_2(VAR_11->udev, VAR_7, VAR_9[VAR_12].buf[VAR_13], VAR_16)) != 0)
     goto unlock;

   }
  }
 }
 VAR_14 = VAR_10;

 unlock:
 FUNC_4(&VAR_11->i2c_mutex);

 return VAR_14;
}
