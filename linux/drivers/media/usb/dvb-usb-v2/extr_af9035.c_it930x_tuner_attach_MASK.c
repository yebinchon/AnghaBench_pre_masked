
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dev; } ;
struct state {size_t it930x_addresses; int i2c_adapter_demod; } ;
struct si2157_config {int if_port; int fe; } ;
struct dvb_usb_device {struct usb_interface* intf; } ;
struct dvb_usb_adapter {int id; int * fe; } ;
typedef int si2157_config ;
struct TYPE_2__ {int tuner_i2c_addr; int tuner_if_port; } ;


 struct dvb_usb_device* FUNC_0 (struct dvb_usb_adapter*) ;
 struct state* FUNC_1 (struct dvb_usb_adapter*) ;
 int FUNC_2 (struct dvb_usb_device*,char*,int ,struct si2157_config*,int ) ;
 int FUNC_3 (int *,char*,int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_4 (struct si2157_config*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct dvb_usb_adapter *VAR_1)
{
 struct state *VAR_2 = FUNC_1(VAR_1);
 struct dvb_usb_device *VAR_3 = FUNC_0(VAR_1);
 struct usb_interface *VAR_4 = VAR_3->intf;
 int VAR_5;
 struct si2157_config VAR_6;

 FUNC_3(&VAR_4->dev, "adap->id=%d\n", VAR_1->id);

 FUNC_4(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.fe = VAR_1->fe[0];
 VAR_6.if_port = VAR_0[VAR_2->it930x_addresses].tuner_if_port;
 VAR_5 = FUNC_2(VAR_3, "si2157",
     VAR_0[VAR_2->it930x_addresses].tuner_i2c_addr,
     &VAR_6, VAR_2->i2c_adapter_demod);
 if (VAR_5)
  goto err;

 return 0;

err:
 FUNC_3(&VAR_4->dev, "failed=%d\n", VAR_5);

 return VAR_5;
}
