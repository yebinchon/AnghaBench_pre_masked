
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int flags; int addr; int* buf; int len; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_usb_device {int i2c_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dvb_usb_device* FUNC_0 (struct i2c_adapter*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct dvb_usb_device*,int,int*,int,int*,int) ;

__attribute__((used)) static int FUNC_4(struct i2c_adapter *VAR_2, struct i2c_msg *VAR_3,
    int VAR_4)
{
 struct dvb_usb_device *VAR_5 = FUNC_0(VAR_2);
 int VAR_6;

 if (FUNC_1(&VAR_5->i2c_mutex) < 0)
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  u8 VAR_7, VAR_8, VAR_9, *VAR_10, *VAR_11;
  int VAR_12;

  if (VAR_3[VAR_6].flags & VAR_1) {
   VAR_7 = VAR_3[VAR_6].addr;
   VAR_10 = ((void*)0);
   VAR_8 = 0;
   VAR_11 = VAR_3[VAR_6].buf;
   VAR_9 = VAR_3[VAR_6].len;
  } else {
   VAR_7 = VAR_3[VAR_6].addr;
   VAR_10 = VAR_3[VAR_6].buf;
   VAR_8 = VAR_3[VAR_6].len;
   VAR_11 = ((void*)0);
   VAR_9 = 0;
  }

  VAR_12 = FUNC_3(VAR_5, VAR_7, VAR_10, VAR_8, VAR_11,
     VAR_9);
  if (VAR_12 < VAR_9)
   break;
 }

 FUNC_2(&VAR_5->i2c_mutex);
 return VAR_6;
}
