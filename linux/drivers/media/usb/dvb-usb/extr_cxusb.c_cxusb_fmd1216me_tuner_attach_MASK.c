
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* devices; } ;
struct dvb_usb_device {int i2c_adap; TYPE_2__ props; } ;
struct dvb_usb_adapter {TYPE_5__* fe_adap; struct dvb_usb_device* dev; } ;
struct TYPE_9__ {int * sleep; } ;
struct TYPE_10__ {TYPE_3__ tuner_ops; } ;
struct TYPE_12__ {TYPE_4__ ops; } ;
struct TYPE_11__ {TYPE_6__* fe; } ;
struct TYPE_7__ {int ** warm_ids; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int ,TYPE_6__*,int *,int,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(struct dvb_usb_adapter *VAR_4)
{
 struct dvb_usb_device *VAR_5 = VAR_4->dev;
 bool VAR_6 = VAR_5->props.devices[0].warm_ids[0] ==
  &VAR_2[VAR_0];

 FUNC_0(VAR_3, VAR_4->fe_adap[0].fe,
     &VAR_5->i2c_adap, 0x61,
     VAR_1);

 if (VAR_6 && VAR_4->fe_adap[0].fe)




  VAR_4->fe_adap[0].fe->ops.tuner_ops.sleep = ((void*)0);

 return 0;
}
