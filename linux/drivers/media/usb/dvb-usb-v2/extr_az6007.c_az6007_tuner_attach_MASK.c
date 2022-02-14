
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct dvb_usb_device {int i2c_adap; } ;
struct dvb_usb_adapter {TYPE_2__** fe; } ;
struct TYPE_5__ {int (* i2c_gate_ctrl ) (TYPE_2__*,int) ;} ;
struct TYPE_6__ {TYPE_1__ ops; } ;


 int VAR_0 ;
 struct dvb_usb_device* FUNC_0 (struct dvb_usb_adapter*) ;
 int VAR_1 ;
 int FUNC_1 (int ,TYPE_2__*,int *,int *) ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_5(struct dvb_usb_adapter *VAR_3)
{
 struct dvb_usb_device *VAR_4 = FUNC_0(VAR_3);

 FUNC_2("attaching tuner mt2063\n");


 if (VAR_3->fe[0]->ops.i2c_gate_ctrl)
  VAR_3->fe[0]->ops.i2c_gate_ctrl(VAR_3->fe[0], 1);
 if (!FUNC_1(VAR_2, VAR_3->fe[0],
   &VAR_1,
   &VAR_4->i2c_adap))
  return -VAR_0;

 if (VAR_3->fe[0]->ops.i2c_gate_ctrl)
  VAR_3->fe[0]->ops.i2c_gate_ctrl(VAR_3->fe[0], 0);

 return 0;
}
