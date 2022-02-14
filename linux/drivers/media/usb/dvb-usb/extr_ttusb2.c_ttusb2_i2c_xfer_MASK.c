
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int flags; int len; int addr; int* buf; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_usb_device {int i2c_mutex; } ;
typedef int obuf ;
typedef int ibuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 struct dvb_usb_device* FUNC_1 (struct i2c_adapter*) ;
 int FUNC_2 (int*,int*,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct dvb_usb_device*,int ,int*,int,int*,int) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(struct i2c_adapter *VAR_3,struct i2c_msg VAR_4[],int VAR_5)
{
 struct dvb_usb_device *VAR_6 = FUNC_1(VAR_3);
 static u8 VAR_7[60], VAR_8[60];
 int VAR_9, VAR_10, VAR_11;

 if (FUNC_3(&VAR_6->i2c_mutex) < 0)
  return -VAR_1;

 if (VAR_5 > 2)
  FUNC_6("more than 2 i2c messages at a time is not handled yet. TODO.");

 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  VAR_10 = VAR_9+1 < VAR_5 && (VAR_4[VAR_9+1].flags & VAR_2);
  VAR_11 = VAR_4[VAR_9].flags & VAR_2;

  if (3 + VAR_4[VAR_9].len > sizeof(VAR_7)) {
   FUNC_0("i2c wr len=%d too high", VAR_4[VAR_9].len);
   break;
  }
  if (VAR_10) {
   if (3 + VAR_4[VAR_9+1].len > sizeof(VAR_8)) {
    FUNC_0("i2c rd len=%d too high", VAR_4[VAR_9+1].len);
    break;
   }
  } else if (VAR_11) {
   if (3 + VAR_4[VAR_9].len > sizeof(VAR_8)) {
    FUNC_0("i2c rd len=%d too high", VAR_4[VAR_9].len);
    break;
   }
  }

  VAR_7[0] = (VAR_4[VAR_9].addr << 1) | (VAR_10 | VAR_11);
  if (VAR_11)
   VAR_7[1] = 0;
  else
   VAR_7[1] = VAR_4[VAR_9].len;


  if (VAR_10)
   VAR_7[2] = VAR_4[VAR_9+1].len;
  else if (VAR_11)
   VAR_7[2] = VAR_4[VAR_9].len;
  else
   VAR_7[2] = 0;

  FUNC_2(&VAR_7[3], VAR_4[VAR_9].buf, VAR_4[VAR_9].len);

  if (FUNC_5(VAR_6, VAR_0, VAR_7, VAR_7[1]+3, VAR_8, VAR_7[2] + 3) < 0) {
   FUNC_0("i2c transfer failed.");
   break;
  }

  if (VAR_10) {
   FUNC_2(VAR_4[VAR_9+1].buf, &VAR_8[3], VAR_4[VAR_9+1].len);
   VAR_9++;
  } else if (VAR_11)
   FUNC_2(VAR_4[VAR_9].buf, &VAR_8[3], VAR_4[VAR_9].len);
 }

 FUNC_4(&VAR_6->i2c_mutex);
 return VAR_9;
}
