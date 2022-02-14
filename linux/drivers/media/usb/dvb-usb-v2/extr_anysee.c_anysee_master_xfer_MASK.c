
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int flags; int len; int addr; int* buf; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_usb_device {int i2c_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct dvb_usb_device*,int*,int,int*,int) ;
 struct dvb_usb_device* FUNC_1 (struct i2c_adapter*) ;
 int FUNC_2 (int*,int*,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct i2c_adapter *VAR_5, struct i2c_msg *VAR_6,
 int VAR_7)
{
 struct dvb_usb_device *VAR_8 = FUNC_1(VAR_5);
 int VAR_9 = 0, VAR_10, VAR_11 = 0;
 u8 VAR_12[52];

 if (FUNC_3(&VAR_8->i2c_mutex) < 0)
  return -VAR_2;

 while (VAR_11 < VAR_7) {
  if (VAR_7 > VAR_11 + 1 && (VAR_6[VAR_11+1].flags & VAR_4)) {
   if (VAR_6[VAR_11].len > 2 || VAR_6[VAR_11+1].len > 60) {
    VAR_9 = -VAR_3;
    break;
   }
   VAR_12[0] = VAR_0;
   VAR_12[1] = (VAR_6[VAR_11].addr << 1) | 0x01;
   VAR_12[2] = VAR_6[VAR_11].buf[0];
   VAR_12[3] = VAR_6[VAR_11].buf[1];
   VAR_12[4] = VAR_6[VAR_11].len-1;
   VAR_12[5] = VAR_6[VAR_11+1].len;
   VAR_9 = FUNC_0(VAR_8, VAR_12, 6, VAR_6[VAR_11+1].buf,
    VAR_6[VAR_11+1].len);
   VAR_10 = 2;
  } else {
   if (VAR_6[VAR_11].len > 48) {
    VAR_9 = -VAR_3;
    break;
   }
   VAR_12[0] = VAR_1;
   VAR_12[1] = (VAR_6[VAR_11].addr << 1);
   VAR_12[2] = VAR_6[VAR_11].len;
   VAR_12[3] = 0x01;
   FUNC_2(&VAR_12[4], VAR_6[VAR_11].buf, VAR_6[VAR_11].len);
   VAR_9 = FUNC_0(VAR_8, VAR_12, 4 + VAR_6[VAR_11].len, ((void*)0), 0);
   VAR_10 = 1;
  }
  if (VAR_9)
   break;

  VAR_11 += VAR_10;
 }

 FUNC_4(&VAR_8->i2c_mutex);

 return VAR_9 ? VAR_9 : VAR_11;
}
