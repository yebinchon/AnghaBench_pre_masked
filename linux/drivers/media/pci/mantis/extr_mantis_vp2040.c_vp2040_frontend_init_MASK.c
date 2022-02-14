
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct i2c_adapter {int name; } ;
struct mantis_pci {struct dvb_frontend* fe; struct i2c_adapter adapter; } ;
struct TYPE_6__ {int set_params; } ;
struct TYPE_7__ {TYPE_1__ tuner_ops; } ;
struct dvb_frontend {TYPE_2__ ops; } ;
struct TYPE_8__ {int demod_address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,char*,...) ;
 struct dvb_frontend* FUNC_1 (int ,TYPE_3__*,struct i2c_adapter*,int ) ;
 int FUNC_2 (struct mantis_pci*,int ) ;
 int FUNC_3 (struct mantis_pci*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct mantis_pci*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_3__ VAR_7 ;
 TYPE_3__ VAR_8 ;

__attribute__((used)) static int FUNC_6(struct mantis_pci *VAR_9, struct dvb_frontend *VAR_10)
{
 struct i2c_adapter *VAR_11 = &VAR_9->adapter;

 int VAR_12 = 0;

 VAR_12 = FUNC_2(VAR_9, VAR_3);
 if (VAR_12 == 0) {
  FUNC_3(VAR_9);
  FUNC_4(250);

  FUNC_0(VAR_2, 1, "Probing for CU1216 (DVB-C)");
  VAR_10 = FUNC_1(VAR_4, &VAR_8,
         VAR_11,
         FUNC_5(VAR_9));

  if (VAR_10) {
   FUNC_0(VAR_2, 1,
    "found Philips CU1216 DVB-C frontend (TDA10021) @ 0x%02x",
    VAR_8.demod_address);
  } else {
   VAR_10 = FUNC_1(VAR_5, &VAR_7,
          VAR_11,
          FUNC_5(VAR_9));

   if (VAR_10) {
    FUNC_0(VAR_2, 1,
     "found Philips CU1216 DVB-C frontend (TDA10023) @ 0x%02x",
     VAR_8.demod_address);
   }
  }

  if (VAR_10) {
   VAR_10->ops.tuner_ops.set_params = VAR_6;
   FUNC_0(VAR_2, 1, "Mantis DVB-C Philips CU1216 frontend attach success");
  } else {
   return -1;
  }
 } else {
  FUNC_0(VAR_2, 1, "Frontend on <%s> POWER ON failed! <%d>",
   VAR_11->name,
   VAR_12);

  return -VAR_0;
 }
 VAR_9->fe = VAR_10;
 FUNC_0(VAR_1, 1, "Done!");

 return 0;
}
