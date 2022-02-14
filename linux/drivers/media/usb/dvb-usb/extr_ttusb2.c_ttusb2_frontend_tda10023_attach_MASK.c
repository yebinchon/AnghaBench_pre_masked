
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct dvb_usb_adapter {TYPE_4__* fe_adap; TYPE_1__* dev; } ;
struct TYPE_8__ {TYPE_3__* fe; } ;
struct TYPE_6__ {int i2c_gate_ctrl; } ;
struct TYPE_7__ {TYPE_2__ ops; } ;
struct TYPE_5__ {int i2c_adap; int udev; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 void* FUNC_1 (int ,int *,int *,...) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct dvb_usb_adapter*) ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct dvb_usb_adapter *VAR_6)
{
 if (FUNC_4(VAR_6->dev->udev, 0, 3) < 0)
  FUNC_2("set interface to alts=3 failed");

 if (VAR_6->fe_adap[0].fe == ((void*)0)) {

  VAR_6->fe_adap[0].fe = FUNC_1(VAR_1,
   &VAR_2, &VAR_6->dev->i2c_adap, 0x48);

  if (VAR_6->fe_adap[0].fe == ((void*)0)) {
   FUNC_0("TDA10023 attach failed\n");
   return -VAR_0;
  }
  FUNC_3(VAR_6);
 } else {
  VAR_6->fe_adap[1].fe = FUNC_1(VAR_3,
   &VAR_4, &VAR_6->dev->i2c_adap);

  if (VAR_6->fe_adap[1].fe == ((void*)0)) {
   FUNC_0("TDA10048 attach failed\n");
   return -VAR_0;
  }


  VAR_6->fe_adap[1].fe->ops.i2c_gate_ctrl = VAR_5;

 }

 return 0;
}
