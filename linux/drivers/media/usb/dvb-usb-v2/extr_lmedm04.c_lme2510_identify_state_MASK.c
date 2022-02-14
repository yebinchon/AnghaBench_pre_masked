
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lme2510_state {int dvb_usb_lme2510_firmware; } ;
struct dvb_usb_device {TYPE_1__* props; int udev; struct lme2510_state* priv; } ;
struct TYPE_2__ {int bInterfaceNumber; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dvb_usb_device*) ;
 char* FUNC_1 (struct dvb_usb_device*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_usb_device *VAR_4, const char **VAR_5)
{
 struct lme2510_state *VAR_6 = VAR_4->priv;
 int VAR_7;

 FUNC_2(VAR_4->udev);

 FUNC_3(VAR_4->udev,
  VAR_4->props->bInterfaceNumber, 1);

 VAR_6->dvb_usb_lme2510_firmware = VAR_3;

 VAR_7 = FUNC_0(VAR_4);
 if (VAR_7 == 0x44) {
  *VAR_5 = FUNC_1(VAR_4, 0);
  return VAR_0;
 }

 if (VAR_7 != 0x47)
  return -VAR_1;

 return VAR_2;
}
