
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u16 ;
struct dvb_usb_device {int usb_mutex; struct dib0700_state* priv; } ;
struct dib0700_state {int* buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,int,int,int) ;
 int FUNC_1 (struct dvb_usb_device*,int*,int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct dvb_usb_device *VAR_3, u16 VAR_4)
{
 struct dib0700_state *VAR_5 = VAR_3->priv;
 u16 VAR_6;
 int VAR_7;

 if (VAR_4 == 0)
  return -VAR_1;

 if (FUNC_3(&VAR_3->usb_mutex) < 0) {
  FUNC_2("could not acquire lock");
  return -VAR_0;
 }

 VAR_5->buf[0] = VAR_2;
 VAR_6 = (u16) (30000 / VAR_4);
 VAR_5->buf[1] = 0;
 VAR_5->buf[2] = (u8) (VAR_6 >> 8);
 VAR_5->buf[3] = (u8) (VAR_6 & 0xff);
 VAR_6 = (u16) (72000 / VAR_4);
 VAR_5->buf[4] = (u8) (VAR_6 >> 8);
 VAR_5->buf[5] = (u8) (VAR_6 & 0xff);
 VAR_6 = (u16) (72000 / VAR_4);
 VAR_5->buf[6] = (u8) (VAR_6 >> 8);
 VAR_5->buf[7] = (u8) (VAR_6 & 0xff);

 FUNC_0("setting I2C speed: %04x %04x %04x (%d kHz).",
  (VAR_5->buf[2] << 8) | (VAR_5->buf[3]), (VAR_5->buf[4] << 8) |
  VAR_5->buf[5], (VAR_5->buf[6] << 8) | VAR_5->buf[7], VAR_4);

 VAR_7 = FUNC_1(VAR_3, VAR_5->buf, 8);
 FUNC_4(&VAR_3->usb_mutex);

 return VAR_7;
}
