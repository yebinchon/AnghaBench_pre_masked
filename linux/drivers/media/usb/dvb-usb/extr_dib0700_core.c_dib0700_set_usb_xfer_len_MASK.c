
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dvb_usb_device {int usb_mutex; struct dib0700_state* priv; } ;
struct dib0700_state {int fw_version; int* buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct dvb_usb_device*,int*,int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct dvb_usb_device *VAR_3, u16 VAR_4)
{
 struct dib0700_state *VAR_5 = VAR_3->priv;
 int VAR_6;

 if (VAR_5->fw_version >= 0x10201) {
  if (FUNC_3(&VAR_3->usb_mutex) < 0) {
   FUNC_2("could not acquire lock");
   return -VAR_0;
  }

  VAR_5->buf[0] = VAR_2;
  VAR_5->buf[1] = (VAR_4 >> 8) & 0xff;
  VAR_5->buf[2] = VAR_4 & 0xff;

  FUNC_0("set the USB xfer len to %i Ts packet\n", VAR_4);

  VAR_6 = FUNC_1(VAR_3, VAR_5->buf, 3);
  FUNC_4(&VAR_3->usb_mutex);
 } else {
  FUNC_0("this firmware does not allow to change the USB xfer len\n");
  VAR_6 = -VAR_1;
 }

 return VAR_6;
}
