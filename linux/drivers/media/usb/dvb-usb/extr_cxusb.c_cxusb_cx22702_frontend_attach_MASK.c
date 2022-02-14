
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* devices; } ;
struct dvb_usb_device {int i2c_adap; TYPE_2__ props; } ;
struct dvb_usb_adapter {TYPE_4__* fe_adap; struct dvb_usb_device* dev; } ;
struct TYPE_8__ {int ts_bus_ctrl; } ;
struct TYPE_10__ {TYPE_3__ ops; } ;
struct TYPE_9__ {TYPE_5__* fe; } ;
struct TYPE_6__ {int ** warm_ids; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct dvb_usb_device*,int) ;
 int * VAR_5 ;
 TYPE_5__* FUNC_1 (int ,int *,int *) ;

__attribute__((used)) static int FUNC_2(struct dvb_usb_adapter *VAR_6)
{
 struct dvb_usb_device *VAR_7 = VAR_6->dev;
 bool VAR_8 = VAR_7->props.devices[0].warm_ids[0] ==
  &VAR_5[VAR_1];

 if (VAR_8) {
  int VAR_9;

  VAR_9 = FUNC_0(VAR_7, 1);
  if (VAR_9)
   return VAR_9;
 }

 VAR_6->fe_adap[0].fe = FUNC_1(VAR_2, &VAR_3,
      &VAR_7->i2c_adap);
 if (!VAR_6->fe_adap[0].fe)
  return -VAR_0;

 if (VAR_8)
  VAR_6->fe_adap[0].fe->ops.ts_bus_ctrl =
   VAR_4;

 return 0;
}
