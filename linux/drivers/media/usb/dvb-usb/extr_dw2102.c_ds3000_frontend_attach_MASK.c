
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct dw2102_state {int old_set_voltage; } ;
struct dvb_usb_adapter {TYPE_3__* dev; TYPE_2__* fe_adap; } ;
struct TYPE_6__ {int set_voltage; } ;
struct TYPE_9__ {TYPE_1__ ops; } ;
struct TYPE_8__ {int udev; int i2c_adap; struct dw2102_state* priv; } ;
struct TYPE_7__ {TYPE_4__* fe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_0 (int ,TYPE_4__*,int *,...) ;
 int FUNC_1 (int ,int,int ,int ,int*,int,int ) ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_3(struct dvb_usb_adapter *VAR_7)
{
 struct dw2102_state *VAR_8 = VAR_7->dev->priv;
 u8 VAR_9[] = {7, 1};

 VAR_7->fe_adap[0].fe = FUNC_0(VAR_2, &VAR_3,
   &VAR_7->dev->i2c_adap);

 if (VAR_7->fe_adap[0].fe == ((void*)0))
  return -VAR_1;

 FUNC_0(VAR_6, VAR_7->fe_adap[0].fe, &VAR_5,
  &VAR_7->dev->i2c_adap);

 VAR_8->old_set_voltage = VAR_7->fe_adap[0].fe->ops.set_voltage;
 VAR_7->fe_adap[0].fe->ops.set_voltage = VAR_4;

 FUNC_1(VAR_7->dev->udev, 0x8a, 0, 0, VAR_9, 2, VAR_0);

 FUNC_2("Attached ds3000+ts2020!");

 return 0;
}
