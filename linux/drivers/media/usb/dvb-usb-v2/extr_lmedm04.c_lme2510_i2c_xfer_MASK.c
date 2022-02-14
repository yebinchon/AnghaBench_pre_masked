
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct lme2510_state {int i2c_gate; int i2c_tuner_addr; int i2c_tuner_gate_r; int i2c_tuner_gate_w; } ;
struct i2c_msg {int flags; int addr; int len; int* buf; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_usb_device {int i2c_mutex; struct lme2510_state* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 struct dvb_usb_device* FUNC_1 (struct i2c_adapter*) ;
 scalar_t__ FUNC_2 (struct dvb_usb_device*,int*,int,int*,int) ;
 int FUNC_3 (int*,int*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct i2c_adapter *VAR_2, struct i2c_msg VAR_3[],
     int VAR_4)
{
 struct dvb_usb_device *VAR_5 = FUNC_1(VAR_2);
 struct lme2510_state *VAR_6 = VAR_5->priv;
 static u8 VAR_7[64], VAR_8[64];
 int VAR_9, VAR_10, VAR_11;
 u16 VAR_12;
 u8 VAR_13 = VAR_6->i2c_gate;

 FUNC_4(&VAR_5->i2c_mutex);

 if (VAR_13 == 0)
  VAR_13 = 5;

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  VAR_11 = VAR_3[VAR_9].flags & VAR_1;
  VAR_10 = VAR_9 + 1 < VAR_4 && VAR_3[VAR_9 + 1].flags & VAR_1;
  VAR_10 |= VAR_11;
  VAR_13 = (VAR_3[VAR_9].addr == VAR_6->i2c_tuner_addr)
   ? (VAR_10) ? VAR_6->i2c_tuner_gate_r
     : VAR_6->i2c_tuner_gate_w
   : VAR_6->i2c_gate;
  VAR_7[0] = VAR_13 | (VAR_10 << 7);

  if (VAR_13 == 5)
   VAR_7[1] = (VAR_10) ? 2 : VAR_3[VAR_9].len + 1;
  else
   VAR_7[1] = VAR_3[VAR_9].len + VAR_10 + 1;

  VAR_7[2] = VAR_3[VAR_9].addr << 1;

  if (VAR_10) {
   if (VAR_11)
    VAR_12 = 3;
   else {
    FUNC_3(&VAR_7[3], VAR_3[VAR_9].buf, VAR_3[VAR_9].len);
    VAR_7[VAR_3[VAR_9].len+3] = VAR_3[VAR_9+1].len;
    VAR_12 = VAR_3[VAR_9].len+4;
   }
  } else {
   FUNC_3(&VAR_7[3], VAR_3[VAR_9].buf, VAR_3[VAR_9].len);
   VAR_12 = VAR_3[VAR_9].len+3;
  }

  if (FUNC_2(VAR_5, VAR_7, VAR_12, VAR_8, 64) < 0) {
   FUNC_0(1, "i2c transfer failed.");
   FUNC_5(&VAR_5->i2c_mutex);
   return -VAR_0;
  }

  if (VAR_10) {
   if (VAR_11)
    FUNC_3(VAR_3[VAR_9].buf, &VAR_8[1], VAR_3[VAR_9].len);
   else {
    FUNC_3(VAR_3[VAR_9+1].buf, &VAR_8[1], VAR_3[VAR_9+1].len);
    VAR_9++;
   }
  }
 }

 FUNC_5(&VAR_5->i2c_mutex);
 return VAR_9;
}
