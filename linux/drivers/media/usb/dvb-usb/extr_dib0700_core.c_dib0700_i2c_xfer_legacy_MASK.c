
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int addr; int len; int* buf; int flags; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_usb_device {int i2c_mutex; int usb_mutex; struct dib0700_state* priv; } ;
struct dib0700_state {int* buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct dvb_usb_device*,int*,int,int*,int) ;
 int FUNC_2 (struct dvb_usb_device*,int*,int) ;
 int FUNC_3 (char*) ;
 struct dvb_usb_device* FUNC_4 (struct i2c_adapter*) ;
 int FUNC_5 (int*,int*,int) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct i2c_adapter *VAR_5,
       struct i2c_msg *VAR_6, int VAR_7)
{
 struct dvb_usb_device *VAR_8 = FUNC_4(VAR_5);
 struct dib0700_state *VAR_9 = VAR_8->priv;
 int VAR_10, VAR_11, VAR_12;

 if (FUNC_6(&VAR_8->i2c_mutex) < 0)
  return -VAR_0;
 if (FUNC_6(&VAR_8->usb_mutex) < 0) {
  FUNC_3("could not acquire lock");
  FUNC_7(&VAR_8->i2c_mutex);
  return -VAR_0;
 }

 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {

  VAR_9->buf[1] = VAR_6[VAR_10].addr << 1;

  if (VAR_6[VAR_10].len > sizeof(VAR_9->buf) - 2) {
   FUNC_0("i2c xfer to big: %d\n",
    VAR_6[VAR_10].len);
   VAR_12 = -VAR_1;
   goto unlock;
  }
  FUNC_5(&VAR_9->buf[2], VAR_6[VAR_10].buf, VAR_6[VAR_10].len);


  if (VAR_10+1 < VAR_7 && (VAR_6[VAR_10+1].flags & VAR_2)) {
   VAR_9->buf[0] = VAR_3;
   VAR_9->buf[1] |= 1;


   VAR_11 = FUNC_1(VAR_8, VAR_9->buf, VAR_6[VAR_10].len + 2,
           VAR_9->buf, VAR_6[VAR_10 + 1].len);
   if (VAR_11 <= 0) {
    FUNC_0("I2C read failed on address 0x%02x\n",
      VAR_6[VAR_10].addr);
    VAR_12 = -VAR_1;
    goto unlock;
   }

   if (VAR_6[VAR_10 + 1].len > sizeof(VAR_9->buf)) {
    FUNC_0("i2c xfer buffer to small for %d\n",
     VAR_6[VAR_10].len);
    VAR_12 = -VAR_1;
    goto unlock;
   }
   FUNC_5(VAR_6[VAR_10 + 1].buf, VAR_9->buf, VAR_6[VAR_10 + 1].len);

   VAR_6[VAR_10+1].len = VAR_11;

   VAR_10++;
  } else {
   VAR_9->buf[0] = VAR_4;
   VAR_12 = FUNC_2(VAR_8, VAR_9->buf, VAR_6[VAR_10].len + 2);
   if (VAR_12 < 0)
    goto unlock;
  }
 }
 VAR_12 = VAR_10;
unlock:
 FUNC_7(&VAR_8->usb_mutex);
 FUNC_7(&VAR_8->i2c_mutex);

 return VAR_12;
}
