
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct usb_device {int dummy; } ;
struct stv6110x_devctl {int tuner_get_status; int tuner_set_refclk; int tuner_get_bbgain; int tuner_set_bbgain; int tuner_get_bandwidth; int tuner_set_bandwidth; int tuner_get_frequency; int tuner_set_frequency; int tuner_set_mode; int tuner_sleep; int tuner_init; } ;
struct dvb_usb_adapter {TYPE_4__* fe_adap; TYPE_6__* dev; } ;
struct TYPE_15__ {TYPE_3__* desc; int i2c_mutex; int i2c_adap; struct usb_device* udev; } ;
struct TYPE_10__ {int name; } ;
struct TYPE_11__ {TYPE_1__ info; int set_voltage; int (* init ) (TYPE_5__*) ;} ;
struct TYPE_14__ {TYPE_2__ ops; int tuner_get_status; int tuner_set_refclk; int tuner_get_bbgain; int tuner_set_bbgain; int tuner_get_bandwidth; int tuner_set_bandwidth; int tuner_get_frequency; int tuner_set_frequency; int tuner_set_mode; int tuner_sleep; int tuner_init; } ;
struct TYPE_13__ {TYPE_5__* fe; } ;
struct TYPE_12__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ,TYPE_5__*,int *,int *) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (TYPE_5__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (TYPE_6__*,int,int) ;
 int VAR_8 ;
 TYPE_5__ VAR_9 ;
 int VAR_10 ;
 int FUNC_8 (struct usb_device*,int ,int ,int,int ,int ,int *,int ,int) ;
 int FUNC_9 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_10(struct dvb_usb_adapter *VAR_11)
{
 struct usb_device *VAR_12 = VAR_11->dev->udev;
 int VAR_13;

 VAR_11->fe_adap[0].fe = FUNC_0(VAR_6, &VAR_9,
   &VAR_11->dev->i2c_adap, VAR_3);

 if (VAR_11->fe_adap[0].fe) {
  const struct stv6110x_devctl *VAR_14;

  VAR_14 = FUNC_0(VAR_7,
    VAR_11->fe_adap[0].fe,
    &VAR_10,
    &VAR_11->dev->i2c_adap);

  if (VAR_14) {
   VAR_9.tuner_init = VAR_14->tuner_init;
   VAR_9.tuner_sleep = VAR_14->tuner_sleep;
   VAR_9.tuner_set_mode = VAR_14->tuner_set_mode;
   VAR_9.tuner_set_frequency = VAR_14->tuner_set_frequency;
   VAR_9.tuner_get_frequency = VAR_14->tuner_get_frequency;
   VAR_9.tuner_set_bandwidth = VAR_14->tuner_set_bandwidth;
   VAR_9.tuner_get_bandwidth = VAR_14->tuner_get_bandwidth;
   VAR_9.tuner_set_bbgain = VAR_14->tuner_set_bbgain;
   VAR_9.tuner_get_bbgain = VAR_14->tuner_get_bbgain;
   VAR_9.tuner_set_refclk = VAR_14->tuner_set_refclk;
   VAR_9.tuner_get_status = VAR_14->tuner_get_status;




   if (VAR_11->fe_adap[0].fe->ops.init)
    VAR_11->fe_adap[0].fe->ops.init(VAR_11->fe_adap[0].fe);

   if (FUNC_3(&VAR_11->dev->i2c_mutex) < 0)
    return -VAR_0;

   VAR_13 = FUNC_8(VAR_12, FUNC_9(VAR_12, 0),
     VAR_2,
     VAR_5 | VAR_4,
     0, 0,
     ((void*)0), 0, 500);
   FUNC_4(&VAR_11->dev->i2c_mutex);

   if (VAR_13 != 0)
    FUNC_2("could not set IF_CLK to external");

   VAR_11->fe_adap[0].fe->ops.set_voltage = VAR_8;


   FUNC_5(VAR_11->fe_adap[0].fe->ops.info.name,
    VAR_11->dev->desc->name,
    sizeof(VAR_11->fe_adap[0].fe->ops.info.name));
  } else {
   FUNC_1(VAR_11->fe_adap[0].fe);
   VAR_11->fe_adap[0].fe = ((void*)0);
  }
 }

 FUNC_7(VAR_11->dev, 1, 1);

 return VAR_11->fe_adap[0].fe == ((void*)0) ? -VAR_1 : 0;
}
