
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dvb_usb_device {int i2c_adap; } ;
struct dvb_usb_adapter {TYPE_2__** fe; } ;
struct az6007_device_state {int gate_ctrl; } ;
struct TYPE_3__ {int i2c_gate_ctrl; } ;
struct TYPE_4__ {TYPE_1__ ops; struct dvb_usb_adapter* sec_priv; } ;


 int VAR_0 ;
 struct dvb_usb_device* FUNC_0 (struct dvb_usb_adapter*) ;
 struct az6007_device_state* FUNC_1 (struct dvb_usb_adapter*) ;
 int FUNC_2 (struct dvb_usb_adapter*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (char*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct dvb_usb_adapter *VAR_4)
{
 struct az6007_device_state *VAR_5 = FUNC_1(VAR_4);
 struct dvb_usb_device *VAR_6 = FUNC_0(VAR_4);

 FUNC_4("attaching demod drxk\n");

 VAR_4->fe[0] = FUNC_3(VAR_1, &VAR_3,
     &VAR_6->i2c_adap);
 if (!VAR_4->fe[0])
  return -VAR_0;

 VAR_4->fe[0]->sec_priv = VAR_4;
 VAR_5->gate_ctrl = VAR_4->fe[0]->ops.i2c_gate_ctrl;
 VAR_4->fe[0]->ops.i2c_gate_ctrl = VAR_2;

 FUNC_2(VAR_4);

 return 0;
}
