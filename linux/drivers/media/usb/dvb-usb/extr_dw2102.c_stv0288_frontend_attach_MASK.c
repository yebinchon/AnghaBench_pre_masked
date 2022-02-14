
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct dvb_usb_adapter {TYPE_3__* dev; TYPE_2__* fe_adap; } ;
struct TYPE_6__ {int set_voltage; } ;
struct TYPE_9__ {TYPE_1__ ops; } ;
struct TYPE_8__ {int udev; int i2c_adap; } ;
struct TYPE_7__ {TYPE_4__* fe; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (int ,TYPE_4__*,int,...) ;
 int FUNC_1 (int ,int,int ,int ,int*,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_3(struct dvb_usb_adapter *VAR_6)
{
 u8 VAR_7[] = {7, 1};

 VAR_6->fe_adap[0].fe = FUNC_0(VAR_5, &VAR_3,
   VAR_6->dev->i2c_adap);

 if (VAR_6->fe_adap[0].fe == ((void*)0))
  return -VAR_1;

 if (((void*)0) == FUNC_0(VAR_4, VAR_6->fe_adap[0].fe, 0x61, &VAR_6->dev->i2c_adap))
  return -VAR_1;

 VAR_6->fe_adap[0].fe->ops.set_voltage = VAR_2;

 FUNC_1(VAR_6->dev->udev, 0x8a, 0, 0, VAR_7, 2, VAR_0);

 FUNC_2("Attached stv0288+stb6000!");

 return 0;

}
