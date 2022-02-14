
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_usb_device {int usb_mutex; struct dib0700_state* priv; } ;
struct dib0700_state {int* buf; } ;
typedef enum dib07x0_gpios { ____Placeholder_dib07x0_gpios } dib07x0_gpios ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dvb_usb_device*,int*,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct dvb_usb_device *VAR_2, enum dib07x0_gpios VAR_3, u8 VAR_4, u8 VAR_5)
{
 struct dib0700_state *VAR_6 = VAR_2->priv;
 int VAR_7;

 if (FUNC_2(&VAR_2->usb_mutex) < 0) {
  FUNC_1("could not acquire lock");
  return -VAR_0;
 }

 VAR_6->buf[0] = VAR_1;
 VAR_6->buf[1] = VAR_3;
 VAR_6->buf[2] = ((VAR_4 & 0x01) << 7) | ((VAR_5 & 0x01) << 6);

 VAR_7 = FUNC_0(VAR_2, VAR_6->buf, 3);

 FUNC_3(&VAR_2->usb_mutex);
 return VAR_7;
}
