
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct dvb_usb_adapter {struct dibusb_state* priv; TYPE_4__* fe_adap; TYPE_3__* dev; } ;
struct TYPE_10__ {int pid_ctrl; int pid_parse; } ;
struct dibusb_state {TYPE_5__ ops; } ;
struct TYPE_9__ {int * fe; } ;
struct TYPE_8__ {int i2c_adap; TYPE_2__* udev; } ;
struct TYPE_6__ {int idProduct; int idVendor; } ;
struct TYPE_7__ {TYPE_1__ descriptor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (int ,int *,int ,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_8 ;
 int FUNC_2 (int) ;

int FUNC_3(struct dvb_usb_adapter *VAR_9)
{
 if (FUNC_1(VAR_9->dev->udev->descriptor.idVendor) == VAR_4 &&
     FUNC_1(VAR_9->dev->udev->descriptor.idProduct) ==
   VAR_3) {
  FUNC_2(1000);
 }

 VAR_9->fe_adap[0].fe = FUNC_0(VAR_5,
      &VAR_9->dev->i2c_adap,
      VAR_1,
      &VAR_8);
 if ((VAR_9->fe_adap[0].fe) == ((void*)0))
  VAR_9->fe_adap[0].fe = FUNC_0(VAR_5,
       &VAR_9->dev->i2c_adap,
       VAR_0,
       &VAR_8);
 if ((VAR_9->fe_adap[0].fe) != ((void*)0)) {
  if (VAR_9->priv != ((void*)0)) {
   struct dibusb_state *VAR_10 = VAR_9->priv;
   VAR_10->ops.pid_parse = VAR_7;
   VAR_10->ops.pid_ctrl = VAR_6;
  }
  return 0;
 }
 return -VAR_2;
}
