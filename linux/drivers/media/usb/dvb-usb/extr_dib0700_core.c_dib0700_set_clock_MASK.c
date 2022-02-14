
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct dvb_usb_device {int usb_mutex; struct dib0700_state* priv; } ;
struct dib0700_state {int* buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dvb_usb_device*,int*,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct dvb_usb_device *VAR_2, u8 VAR_3,
 u8 VAR_4, u8 VAR_5, u8 VAR_6, u16 VAR_7,
 u16 VAR_8, u16 VAR_9, u16 VAR_10)
{
 struct dib0700_state *VAR_11 = VAR_2->priv;
 int VAR_12;

 if (FUNC_2(&VAR_2->usb_mutex) < 0) {
  FUNC_1("could not acquire lock");
  return -VAR_0;
 }

 VAR_11->buf[0] = VAR_1;
 VAR_11->buf[1] = (VAR_3 << 7) | (VAR_4 << 6) |
  (VAR_5 << 5) | (VAR_6 << 4);
 VAR_11->buf[2] = (VAR_7 >> 8) & 0xff;
 VAR_11->buf[3] = VAR_7 & 0xff;
 VAR_11->buf[4] = (VAR_8 >> 8) & 0xff;
 VAR_11->buf[5] = VAR_8 & 0xff;
 VAR_11->buf[6] = (VAR_9 >> 8) & 0xff;
 VAR_11->buf[7] = VAR_9 & 0xff;
 VAR_11->buf[8] = (VAR_10 >> 8) & 0xff;
 VAR_11->buf[9] = VAR_10 & 0xff;

 VAR_12 = FUNC_0(VAR_2, VAR_11->buf, 10);
 FUNC_3(&VAR_2->usb_mutex);

 return VAR_12;
}
