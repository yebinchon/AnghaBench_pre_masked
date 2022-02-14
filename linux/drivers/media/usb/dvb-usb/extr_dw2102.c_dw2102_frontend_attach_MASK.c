
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct dvb_usb_adapter {TYPE_3__* fe_adap; TYPE_1__* dev; } ;
struct TYPE_7__ {void* set_voltage; } ;
struct TYPE_10__ {TYPE_2__ ops; } ;
struct TYPE_9__ {int * i2c_algo; } ;
struct TYPE_8__ {TYPE_5__* fe; } ;
struct TYPE_6__ {int i2c_adap; } ;


 int VAR_0 ;
 void* FUNC_0 (int ,TYPE_5__*,int,...) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__ VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_2(struct dvb_usb_adapter *VAR_13)
{
 if (VAR_3.i2c_algo == &VAR_4) {

  VAR_13->fe_adap[0].fe = FUNC_0(VAR_9, &VAR_7,
     VAR_13->dev->i2c_adap);
  if (VAR_13->fe_adap[0].fe != ((void*)0)) {
   VAR_13->fe_adap[0].fe->ops.set_voltage = VAR_5;
   FUNC_1("Attached si21xx!");
   return 0;
  }
 }

 if (VAR_3.i2c_algo == &VAR_1) {
  VAR_13->fe_adap[0].fe = FUNC_0(VAR_11, &VAR_6,
     VAR_13->dev->i2c_adap);
  if (VAR_13->fe_adap[0].fe != ((void*)0)) {
   if (FUNC_0(VAR_10, VAR_13->fe_adap[0].fe, 0x61,
     &VAR_13->dev->i2c_adap)) {
    VAR_13->fe_adap[0].fe->ops.set_voltage = VAR_5;
    FUNC_1("Attached stv0288!");
    return 0;
   }
  }
 }

 if (VAR_3.i2c_algo == &VAR_2) {

  VAR_13->fe_adap[0].fe = FUNC_0(VAR_12, &VAR_8,
     VAR_13->dev->i2c_adap);
  if (VAR_13->fe_adap[0].fe != ((void*)0)) {
   VAR_13->fe_adap[0].fe->ops.set_voltage = VAR_5;
   FUNC_1("Attached stv0299!");
   return 0;
  }
 }
 return -VAR_0;
}
