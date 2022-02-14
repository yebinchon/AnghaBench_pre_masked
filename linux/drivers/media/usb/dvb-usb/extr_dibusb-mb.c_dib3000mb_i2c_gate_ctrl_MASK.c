
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dvb_usb_adapter {struct dibusb_state* priv; } ;
struct dvb_frontend {TYPE_1__* dvb; } ;
struct TYPE_4__ {int (* tuner_pass_ctrl ) (struct dvb_frontend*,int,int ) ;} ;
struct dibusb_state {int tuner_addr; TYPE_2__ ops; } ;
struct TYPE_3__ {struct dvb_usb_adapter* priv; } ;


 int FUNC_0 (struct dvb_frontend*,int,int ) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend* VAR_0, int VAR_1)
{
 struct dvb_usb_adapter *VAR_2 = VAR_0->dvb->priv;
 struct dibusb_state *VAR_3 = VAR_2->priv;

 return VAR_3->ops.tuner_pass_ctrl(VAR_0, VAR_1, VAR_3->tuner_addr);
}
