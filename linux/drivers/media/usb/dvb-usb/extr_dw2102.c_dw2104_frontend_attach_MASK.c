
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct dvb_usb_adapter {TYPE_3__* fe_adap; TYPE_1__* dev; } ;
struct dvb_tuner_ops {int get_bandwidth; int set_bandwidth; int get_frequency; int set_frequency; } ;
struct TYPE_8__ {void* set_voltage; struct dvb_tuner_ops tuner_ops; } ;
struct TYPE_10__ {TYPE_2__ ops; } ;
struct TYPE_9__ {TYPE_4__* fe; } ;
struct TYPE_7__ {int i2c_adap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ,TYPE_4__*,int *,...) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_4__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_4__ VAR_10 ;
 void* VAR_11 ;
 int FUNC_1 (char*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

__attribute__((used)) static int FUNC_2(struct dvb_usb_adapter *VAR_20)
{
 struct dvb_tuner_ops *VAR_21 = ((void*)0);

 if (VAR_2 & 4) {
  VAR_20->fe_adap[0].fe = FUNC_0(VAR_17, &VAR_10,
    &VAR_20->dev->i2c_adap, 0);
  if (VAR_20->fe_adap[0].fe != ((void*)0)) {
   if (FUNC_0(VAR_12, VAR_20->fe_adap[0].fe,
     &VAR_9,
     &VAR_20->dev->i2c_adap)) {
    VAR_21 = &VAR_20->fe_adap[0].fe->ops.tuner_ops;
    VAR_21->set_frequency = VAR_16;
    VAR_21->get_frequency = VAR_14;
    VAR_21->set_bandwidth = VAR_15;
    VAR_21->get_bandwidth = VAR_13;
    VAR_20->fe_adap[0].fe->ops.set_voltage = VAR_11;
    FUNC_1("Attached STV0900+STB6100!");
    return 0;
   }
  }
 }

 if (VAR_2 & 2) {
  VAR_20->fe_adap[0].fe = FUNC_0(VAR_17, &VAR_6,
    &VAR_20->dev->i2c_adap, 0);
  if (VAR_20->fe_adap[0].fe != ((void*)0)) {
   if (FUNC_0(VAR_18, VAR_20->fe_adap[0].fe,
     &VAR_7,
     &VAR_20->dev->i2c_adap)) {
    VAR_20->fe_adap[0].fe->ops.set_voltage = VAR_11;
    FUNC_1("Attached STV0900+STV6110A!");
    return 0;
   }
  }
 }

 if (VAR_2 & 1) {
  VAR_20->fe_adap[0].fe = FUNC_0(VAR_1, &VAR_4,
    &VAR_20->dev->i2c_adap);
  if (VAR_20->fe_adap[0].fe != ((void*)0)) {
   VAR_20->fe_adap[0].fe->ops.set_voltage = VAR_11;
   FUNC_1("Attached cx24116!");
   return 0;
  }
 }

 VAR_20->fe_adap[0].fe = FUNC_0(VAR_3, &VAR_5,
   &VAR_20->dev->i2c_adap);
 if (VAR_20->fe_adap[0].fe != ((void*)0)) {
  FUNC_0(VAR_19, VAR_20->fe_adap[0].fe,
   &VAR_8, &VAR_20->dev->i2c_adap);
  VAR_20->fe_adap[0].fe->ops.set_voltage = VAR_11;
  FUNC_1("Attached DS3000!");
  return 0;
 }

 return -VAR_0;
}
