
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct dvb_usb_adapter {TYPE_3__* fe_adap; } ;
struct dvb_frontend {TYPE_1__* dvb; } ;
struct TYPE_6__ {int (* i2c_gate_ctrl ) (TYPE_4__*,int) ;} ;
struct TYPE_8__ {TYPE_2__ ops; } ;
struct TYPE_7__ {TYPE_4__* fe; } ;
struct TYPE_5__ {struct dvb_usb_adapter* priv; } ;


 int FUNC_0 (TYPE_4__*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0, int VAR_1)
{
 struct dvb_usb_adapter *VAR_2 = VAR_0->dvb->priv;

 return VAR_2->fe_adap[0].fe->ops.i2c_gate_ctrl(VAR_2->fe_adap[0].fe, VAR_1);
}
