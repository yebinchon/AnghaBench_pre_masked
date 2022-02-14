
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct technisat_usb2_state {int* buf; } ;
struct dvb_usb_device {int i2c_mutex; int udev; struct technisat_usb2_state* priv; } ;
typedef enum technisat_usb2_led_state { ____Placeholder_technisat_usb2_led_state } technisat_usb2_led_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int,int,int ,int ,int*,int,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct dvb_usb_device *VAR_6, int VAR_7,
      enum technisat_usb2_led_state VAR_8)
{
 struct technisat_usb2_state *VAR_9 = VAR_6->priv;
 u8 *VAR_10 = VAR_9->buf;
 int VAR_11;

 VAR_10[0] = VAR_7 ? VAR_2 : VAR_1;

 if (VAR_5 && VAR_8 != 129)
  return 0;

 switch (VAR_8) {
 case 128:
  VAR_10[1] = 0x82;
  break;
 case 130:
  VAR_10[1] = 0x82;
  if (VAR_7) {
   VAR_10[2] = 0x02;
   VAR_10[3] = 10;
   VAR_10[4] = 10;
  } else {
   VAR_10[2] = 0xff;
   VAR_10[3] = 50;
   VAR_10[4] = 50;
  }
  VAR_10[5] = 1;
  break;

 default:
 case 129:
  VAR_10[1] = 0x80;
  break;
 }

 if (FUNC_0(&VAR_6->i2c_mutex) < 0)
  return -VAR_0;

 VAR_11 = FUNC_2(VAR_6->udev, FUNC_3(VAR_6->udev, 0),
  VAR_7 ? VAR_2 : VAR_1,
  VAR_4 | VAR_3,
  0, 0,
  VAR_10, 8, 500);

 FUNC_1(&VAR_6->i2c_mutex);
 return VAR_11;
}
