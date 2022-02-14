
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct dvb_usb_adapter {TYPE_3__* fe_adap; TYPE_1__* dev; struct dibusb_state* priv; } ;
struct dibusb_state {int ops; } ;
struct dib3000_config {int demod_address; } ;
struct TYPE_6__ {int i2c_gate_ctrl; } ;
struct TYPE_8__ {TYPE_2__ ops; } ;
struct TYPE_7__ {TYPE_4__* fe; } ;
struct TYPE_5__ {int i2c_adap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_0 (int ,struct dib3000_config*,int *,int *) ;

__attribute__((used)) static int FUNC_1(struct dvb_usb_adapter *VAR_3)
{
 struct dib3000_config VAR_4;
 struct dibusb_state *VAR_5 = VAR_3->priv;

 VAR_4.demod_address = 0x8;

 VAR_3->fe_adap[0].fe = FUNC_0(VAR_1, &VAR_4,
      &VAR_3->dev->i2c_adap, &VAR_5->ops);
 if ((VAR_3->fe_adap[0].fe) == ((void*)0))
  return -VAR_0;

 VAR_3->fe_adap[0].fe->ops.i2c_gate_ctrl = VAR_2;

 return 0;
}
