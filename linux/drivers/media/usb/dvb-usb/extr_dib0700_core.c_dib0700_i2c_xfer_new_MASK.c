
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u16 ;
struct i2c_msg {int flags; int addr; int len; int* buf; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_usb_device {int i2c_mutex; int usb_mutex; int udev; struct dib0700_state* priv; } ;
struct dib0700_state {int* buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int*,int,int (*) (char*)) ;
 int FUNC_3 (char*) ;
 struct dvb_usb_device* FUNC_4 (struct i2c_adapter*) ;
 int FUNC_5 (int*,int*,int) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ,int,int,int,int,int*,int,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static int FUNC_11(struct i2c_adapter *VAR_10, struct i2c_msg *VAR_11,
    int VAR_12)
{



 struct dvb_usb_device *VAR_13 = FUNC_4(VAR_10);
 struct dib0700_state *VAR_14 = VAR_13->priv;
 uint8_t VAR_15 = 1;
 uint8_t VAR_16 = 0;
 uint8_t VAR_17 = 0;
 uint8_t VAR_18 = 0;
 int VAR_19, VAR_20;



 if (FUNC_6(&VAR_13->i2c_mutex) < 0)
  return -VAR_0;

 for (VAR_20 = 0; VAR_20 < VAR_12; VAR_20++) {
  if (VAR_20 == 0) {

   VAR_17 = 1;
  } else if (!(VAR_11[VAR_20].flags & VAR_2)) {

   VAR_17 = 1;
  } else {


   VAR_17 = 0;
  }
  if (VAR_20 == (VAR_12 - 1)) {

   VAR_18 = 1;
  }

  if (VAR_11[VAR_20].flags & VAR_3) {

   u16 VAR_21, VAR_22;
   uint8_t VAR_23;

   VAR_23 = (VAR_11[VAR_20].addr << 1);
   VAR_22 = ((VAR_17 << 7) | (VAR_18 << 6) |
     (VAR_11[VAR_20].len & 0x3F)) << 8 | VAR_23;

   VAR_21 = ((VAR_16 << 6) & 0xC0) |
    ((VAR_15 << 4) & 0x30);

   VAR_19 = FUNC_8(VAR_13->udev,
       FUNC_9(VAR_13->udev, 0),
       VAR_4,
       VAR_9 | VAR_7,
       VAR_22, VAR_21, VAR_14->buf,
       VAR_11[VAR_20].len,
       VAR_6);
   if (VAR_19 < 0) {
    FUNC_1("i2c read error (status = %d)\n", VAR_19);
    goto unlock;
   }

   if (VAR_11[VAR_20].len > sizeof(VAR_14->buf)) {
    FUNC_1("buffer too small to fit %d bytes\n",
      VAR_11[VAR_20].len);
    VAR_19 = -VAR_1;
    goto unlock;
   }

   FUNC_5(VAR_11[VAR_20].buf, VAR_14->buf, VAR_11[VAR_20].len);

   FUNC_0("<<< ");
   FUNC_2(VAR_11[VAR_20].buf, VAR_11[VAR_20].len, FUNC_0);

  } else {

   if (FUNC_6(&VAR_13->usb_mutex) < 0) {
    FUNC_3("could not acquire lock");
    VAR_19 = -VAR_0;
    goto unlock;
   }
   VAR_14->buf[0] = VAR_5;
   VAR_14->buf[1] = VAR_11[VAR_20].addr << 1;
   VAR_14->buf[2] = (VAR_17 << 7) | (VAR_18 << 6) |
    (VAR_11[VAR_20].len & 0x3F);

   VAR_14->buf[3] = ((VAR_16 << 6) & 0xC0) |
     ((VAR_15 << 4) & 0x30);

   if (VAR_11[VAR_20].len > sizeof(VAR_14->buf) - 4) {
    FUNC_1("i2c message to big: %d\n",
      VAR_11[VAR_20].len);
    FUNC_7(&VAR_13->usb_mutex);
    VAR_19 = -VAR_1;
    goto unlock;
   }


   FUNC_5(&VAR_14->buf[4], VAR_11[VAR_20].buf, VAR_11[VAR_20].len);

   FUNC_0(">>> ");
   FUNC_2(VAR_14->buf, VAR_11[VAR_20].len + 4, FUNC_0);

   VAR_19 = FUNC_8(VAR_13->udev,
       FUNC_10(VAR_13->udev, 0),
       VAR_5,
       VAR_9 | VAR_8,
       0, 0, VAR_14->buf, VAR_11[VAR_20].len + 4,
       VAR_6);
   FUNC_7(&VAR_13->usb_mutex);
   if (VAR_19 < 0) {
    FUNC_1("i2c write error (status = %d)\n", VAR_19);
    break;
   }
  }
 }
 VAR_19 = VAR_20;

unlock:
 FUNC_7(&VAR_13->i2c_mutex);
 return VAR_19;
}
