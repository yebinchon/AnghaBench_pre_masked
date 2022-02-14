
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct dvb_usb_adapter {TYPE_3__* fe_adap; TYPE_1__* dev; } ;
struct TYPE_7__ {int set_voltage; } ;
struct TYPE_9__ {TYPE_2__ ops; } ;
struct TYPE_8__ {TYPE_4__* fe; } ;
struct TYPE_6__ {int i2c_adap; } ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (int ,TYPE_4__*,int,...) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_2(struct dvb_usb_adapter *VAR_5)
{
 VAR_5->fe_adap[0].fe = FUNC_0(VAR_2, &VAR_4,
   VAR_5->dev->i2c_adap);
 if (VAR_5->fe_adap[0].fe != ((void*)0)) {
  if (FUNC_0(VAR_3, VAR_5->fe_adap[0].fe, 0x60,
    &VAR_5->dev->i2c_adap)) {
   VAR_5->fe_adap[0].fe->ops.set_voltage = VAR_1;
   FUNC_1("Attached zl100313+zl10039!");
   return 0;
  }
 }

 return -VAR_0;
}
