
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int idProduct; } ;
struct usb_device {int dev; TYPE_1__ descriptor; } ;
struct lme2510_state {int dvb_usb_lme2510_firmware; } ;
struct firmware {int dummy; } ;
struct dvb_usb_device {struct usb_device* udev; struct lme2510_state* priv; } ;


 void* VAR_0 ;

 int VAR_1 ;


 int VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dvb_usb_device*) ;
 int FUNC_3 (struct firmware const*) ;
 int FUNC_4 (struct firmware const**,char const*,int *) ;

__attribute__((used)) static const char *FUNC_5(struct dvb_usb_device *VAR_9, int VAR_10)
{
 struct lme2510_state *VAR_11 = VAR_9->priv;
 struct usb_device *VAR_12 = VAR_9->udev;
 const struct firmware *VAR_13 = ((void*)0);
 const char *VAR_14;
 int VAR_15 = 0;

 VAR_10 = (VAR_10 > 0) ? (VAR_10 & 1) : 0;

 switch (FUNC_1(VAR_12->descriptor.idProduct)) {
 case 0x1122:
  switch (VAR_11->dvb_usb_lme2510_firmware) {
  default:
  case 129:
   VAR_14 = VAR_8;
   VAR_15 = FUNC_4(&VAR_13, VAR_14, &VAR_12->dev);
   if (VAR_15 == 0) {
    VAR_11->dvb_usb_lme2510_firmware = 129;
    VAR_10 = 0;
    break;
   }

  case 130:
   VAR_14 = VAR_7;
   VAR_15 = FUNC_4(&VAR_13, VAR_14, &VAR_12->dev);
   if (VAR_15 == 0) {
    VAR_11->dvb_usb_lme2510_firmware = 130;
    break;
   }
   VAR_11->dvb_usb_lme2510_firmware = VAR_0;
   break;
  }
  break;
 case 0x1120:
  switch (VAR_11->dvb_usb_lme2510_firmware) {
  default:
  case 128:
   VAR_14 = VAR_6;
   VAR_15 = FUNC_4(&VAR_13, VAR_14, &VAR_12->dev);
   if (VAR_15 == 0) {
    VAR_11->dvb_usb_lme2510_firmware = 128;
    VAR_10 = 0;
    break;
   }

  case 130:
   VAR_14 = VAR_3;
   VAR_15 = FUNC_4(&VAR_13, VAR_14, &VAR_12->dev);
   if (VAR_15 == 0) {
    VAR_11->dvb_usb_lme2510_firmware = 130;
    break;
   }

  case 129:
   VAR_14 = VAR_5;
   VAR_15 = FUNC_4(&VAR_13, VAR_14, &VAR_12->dev);
   if (VAR_15 == 0) {
    VAR_11->dvb_usb_lme2510_firmware = 129;
    break;
   }
   VAR_11->dvb_usb_lme2510_firmware = VAR_0;
   VAR_10 = 0;
   break;
  }
  break;
 case 0x22f0:
  VAR_14 = VAR_4;
  VAR_11->dvb_usb_lme2510_firmware = VAR_1;
  break;
 default:
  VAR_14 = VAR_6;
 }

 FUNC_3(VAR_13);

 if (VAR_10) {
  VAR_2 = VAR_11->dvb_usb_lme2510_firmware;
  FUNC_0("FRM Changing to %s firmware", VAR_14);
  FUNC_2(VAR_9);
  return ((void*)0);
 }

 return VAR_14;
}
