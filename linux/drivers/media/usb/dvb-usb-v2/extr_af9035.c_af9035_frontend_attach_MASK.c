
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_interface {int dev; } ;
struct state {TYPE_3__* af9033_config; int * af9033_i2c_addr; int ops; } ;
struct dvb_usb_device {int i2c_adap; struct usb_interface* intf; } ;
struct dvb_usb_adapter {int id; TYPE_2__** fe; } ;
struct TYPE_6__ {int * ops; TYPE_2__** fe; int tuner; } ;
struct TYPE_4__ {int * i2c_gate_ctrl; } ;
struct TYPE_5__ {int callback; TYPE_1__ ops; } ;


 int VAR_0 ;
 struct dvb_usb_device* FUNC_0 (struct dvb_usb_adapter*) ;
 struct state* FUNC_1 (struct dvb_usb_adapter*) ;
 int FUNC_2 (struct dvb_usb_device*,char*,int ,TYPE_3__*,int *) ;
 int VAR_1 ;
 int FUNC_3 (int *,char*,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_usb_adapter *VAR_2)
{
 struct state *VAR_3 = FUNC_1(VAR_2);
 struct dvb_usb_device *VAR_4 = FUNC_0(VAR_2);
 struct usb_interface *VAR_5 = VAR_4->intf;
 int VAR_6;

 FUNC_3(&VAR_5->dev, "adap->id=%d\n", VAR_2->id);

 if (!VAR_3->af9033_config[VAR_2->id].tuner) {

  VAR_6 = -VAR_0;
  goto err;
 }

 VAR_3->af9033_config[VAR_2->id].fe = &VAR_2->fe[0];
 VAR_3->af9033_config[VAR_2->id].ops = &VAR_3->ops;
 VAR_6 = FUNC_2(VAR_4, "af9033", VAR_3->af9033_i2c_addr[VAR_2->id],
   &VAR_3->af9033_config[VAR_2->id], &VAR_4->i2c_adap);
 if (VAR_6)
  goto err;

 if (VAR_2->fe[0] == ((void*)0)) {
  VAR_6 = -VAR_0;
  goto err;
 }


 VAR_2->fe[0]->ops.i2c_gate_ctrl = ((void*)0);
 VAR_2->fe[0]->callback = VAR_1;

 return 0;

err:
 FUNC_3(&VAR_5->dev, "failed=%d\n", VAR_6);

 return VAR_6;
}
