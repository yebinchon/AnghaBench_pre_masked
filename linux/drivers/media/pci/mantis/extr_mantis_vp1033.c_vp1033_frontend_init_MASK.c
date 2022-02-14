
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct i2c_adapter {int name; } ;
struct mantis_pci {struct dvb_frontend* fe; struct i2c_adapter adapter; } ;
struct TYPE_5__ {int set_params; } ;
struct TYPE_6__ {TYPE_1__ tuner_ops; } ;
struct dvb_frontend {TYPE_2__ ops; } ;
struct TYPE_7__ {int demod_address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,char*,...) ;
 struct dvb_frontend* FUNC_1 (int ,TYPE_3__*,struct i2c_adapter*) ;
 TYPE_3__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct mantis_pci*,int ) ;
 int FUNC_3 (struct mantis_pci*) ;
 int FUNC_4 (int) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_5(struct mantis_pci *VAR_6, struct dvb_frontend *VAR_7)
{
 struct i2c_adapter *VAR_8 = &VAR_6->adapter;

 int VAR_9 = 0;

 VAR_9 = FUNC_2(VAR_6, VAR_2);
 if (VAR_9 == 0) {
  FUNC_3(VAR_6);
  FUNC_4(250);

  FUNC_0(VAR_1, 1, "Probing for STV0299 (DVB-S)");
  VAR_7 = FUNC_1(VAR_5, &VAR_3, VAR_8);

  if (VAR_7) {
   VAR_7->ops.tuner_ops.set_params = VAR_4;
   FUNC_0(VAR_1, 1, "found STV0299 DVB-S frontend @ 0x%02x",
    VAR_3.demod_address);

   FUNC_0(VAR_1, 1, "Mantis DVB-S STV0299 frontend attach success");
  } else {
   return -1;
  }
 } else {
  FUNC_0(VAR_1, 1, "Frontend on <%s> POWER ON failed! <%d>",
   VAR_8->name,
   VAR_9);

  return -VAR_0;
 }
 VAR_6->fe = VAR_7;
 FUNC_0(VAR_1, 1, "Done!");

 return 0;
}
