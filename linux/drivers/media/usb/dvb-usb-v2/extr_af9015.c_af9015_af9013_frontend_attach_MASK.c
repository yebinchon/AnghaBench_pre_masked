
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_interface {int dev; } ;
struct i2c_client {int dummy; } ;
struct dvb_usb_device {int i2c_adap; struct usb_interface* intf; } ;
struct dvb_usb_adapter {int id; TYPE_2__** fe; } ;
struct af9015_state {int * sleep; int * init; int * read_status; int * set_frontend; struct i2c_client** demod_i2c_client; TYPE_3__* af9013_pdata; int * af9013_i2c_addr; scalar_t__ dual_mode; } ;
struct TYPE_6__ {int ts_output_pin; TYPE_2__* (* get_dvb_frontend ) (struct i2c_client*) ;void** gpio; int api_version; int ts_mode; } ;
struct TYPE_4__ {int sleep; int init; int read_status; int set_frontend; } ;
struct TYPE_5__ {TYPE_1__ ops; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct dvb_usb_device* FUNC_0 (struct dvb_usb_adapter*) ;
 struct af9015_state* FUNC_1 (struct dvb_usb_adapter*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct dvb_usb_device*) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,char*) ;
 struct i2c_client* FUNC_5 (char*,int *,int *,int ,TYPE_3__*) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int) ;
 TYPE_2__* FUNC_8 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_9(struct dvb_usb_adapter *VAR_10)
{
 struct af9015_state *VAR_11 = FUNC_1(VAR_10);
 struct dvb_usb_device *VAR_12 = FUNC_0(VAR_10);
 struct usb_interface *VAR_13 = VAR_12->intf;
 struct i2c_client *VAR_14;
 int VAR_15;

 FUNC_3(&VAR_13->dev, "adap id %u\n", VAR_10->id);

 if (VAR_10->id == 0) {
  VAR_11->af9013_pdata[0].ts_mode = VAR_4;
  FUNC_6(VAR_11->af9013_pdata[0].api_version, "\x0\x1\x9\x0", 4);
  VAR_11->af9013_pdata[0].gpio[0] = VAR_0;
  VAR_11->af9013_pdata[0].gpio[3] = VAR_2;
 } else if (VAR_10->id == 1) {
  VAR_11->af9013_pdata[1].ts_mode = VAR_3;
  VAR_11->af9013_pdata[1].ts_output_pin = 7;
  FUNC_6(VAR_11->af9013_pdata[1].api_version, "\x0\x1\x9\x0", 4);
  VAR_11->af9013_pdata[1].gpio[0] = VAR_2;
  VAR_11->af9013_pdata[1].gpio[1] = VAR_1;


  if (VAR_11->dual_mode) {

   FUNC_7(100);

   VAR_15 = FUNC_2(FUNC_0(VAR_10));
   if (VAR_15) {
    FUNC_4(&VAR_13->dev,
     "firmware copy to 2nd frontend failed, will disable it\n");
    VAR_11->dual_mode = 0;
    goto err;
   }
  } else {
   VAR_15 = -VAR_5;
   goto err;
  }
 }


 VAR_14 = FUNC_5("af9013", ((void*)0), &VAR_12->i2c_adap,
      VAR_11->af9013_i2c_addr[VAR_10->id],
      &VAR_11->af9013_pdata[VAR_10->id]);
 if (!VAR_14) {
  VAR_15 = -VAR_5;
  goto err;
 }
 VAR_10->fe[0] = VAR_11->af9013_pdata[VAR_10->id].get_dvb_frontend(VAR_14);
 VAR_11->demod_i2c_client[VAR_10->id] = VAR_14;
 if (VAR_10->fe[0]) {
  VAR_11->set_frontend[VAR_10->id] = VAR_10->fe[0]->ops.set_frontend;
  VAR_10->fe[0]->ops.set_frontend = VAR_8;
  VAR_11->read_status[VAR_10->id] = VAR_10->fe[0]->ops.read_status;
  VAR_10->fe[0]->ops.read_status = VAR_7;
  VAR_11->init[VAR_10->id] = VAR_10->fe[0]->ops.init;
  VAR_10->fe[0]->ops.init = VAR_6;
  VAR_11->sleep[VAR_10->id] = VAR_10->fe[0]->ops.sleep;
  VAR_10->fe[0]->ops.sleep = VAR_9;
 }

 return 0;
err:
 FUNC_3(&VAR_13->dev, "failed %d\n", VAR_15);
 return VAR_15;
}
