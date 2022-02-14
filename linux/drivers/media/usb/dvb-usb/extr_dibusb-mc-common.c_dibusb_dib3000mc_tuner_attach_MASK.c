
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct i2c_adapter {int dummy; } ;
struct dvb_usb_adapter {TYPE_3__* fe_adap; TYPE_4__* dev; struct dibusb_state* priv; } ;
struct dibusb_state {int mt2060_present; } ;
struct TYPE_8__ {TYPE_2__* udev; } ;
struct TYPE_7__ {int fe; } ;
struct TYPE_5__ {int idProduct; int idVendor; } ;
struct TYPE_6__ {TYPE_1__ descriptor; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct i2c_adapter* FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_4__*,int,int*) ;
 int * FUNC_3 (int ,int ,int,struct i2c_adapter*,int) ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (char*,int,int) ;

int FUNC_6(struct dvb_usb_adapter *VAR_10)
{
 struct dibusb_state *VAR_11 = VAR_10->priv;
 u8 VAR_12,VAR_13;
 u16 VAR_14 = 1220;
 struct i2c_adapter *VAR_15;


 if (FUNC_4(VAR_10->dev->udev->descriptor.idVendor) == VAR_5 &&
     FUNC_4(VAR_10->dev->udev->descriptor.idProduct) == VAR_3) {

  FUNC_2(VAR_10->dev,0x7E,&VAR_12);
  FUNC_2(VAR_10->dev,0x7F,&VAR_13);

  if (VAR_12 == 0x00)
   VAR_14 += VAR_13;
  else if (VAR_12 == 0x80)
   VAR_14 -= VAR_13;
  else
   FUNC_5("LITE-ON DVB-T: Strange IF1 calibration :%2X %2X\n", VAR_12, VAR_13);

 } else if (FUNC_4(VAR_10->dev->udev->descriptor.idVendor) == VAR_4 &&
     FUNC_4(VAR_10->dev->udev->descriptor.idProduct) == VAR_2) {
  u8 VAR_16;
  FUNC_2(VAR_10->dev, 7, &VAR_16);
  if (VAR_16 == 2) {
   VAR_12 = 127;
   do {
    FUNC_2(VAR_10->dev, VAR_12, &VAR_16);
    VAR_12--;
   } while (VAR_12 > 7 && (VAR_16 == 0xff || VAR_16 == 0x00));
   if (VAR_16 & 0x80)
    VAR_14 -= (0xff - VAR_16);
   else
    VAR_14 += VAR_16;
  }
 }

 VAR_15 = FUNC_0(VAR_10->fe_adap[0].fe, 1);
 if (FUNC_3(VAR_7, VAR_10->fe_adap[0].fe, VAR_15, &VAR_9, VAR_14) == ((void*)0)) {

  if (FUNC_3(VAR_6, VAR_10->fe_adap[0].fe, 0x60, VAR_15, VAR_0) == ((void*)0))
   return -VAR_1;
 } else {
  VAR_11->mt2060_present = 1;

  FUNC_1(VAR_10->fe_adap[0].fe, &VAR_8);
 }
 return 0;
}
