
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct i2c_adapter {int name; } ;
struct mantis_pci {struct dvb_frontend* fe; struct i2c_adapter adapter; } ;
struct dvb_frontend {int dummy; } ;
struct TYPE_3__ {int demod_address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,char*,...) ;
 struct dvb_frontend* FUNC_1 (int ,TYPE_1__*,struct i2c_adapter*) ;
 int FUNC_2 (struct mantis_pci*,int ) ;
 int FUNC_3 (struct mantis_pci*) ;
 int VAR_3 ;
 int FUNC_4 (int) ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static int FUNC_5(struct mantis_pci *VAR_5, struct dvb_frontend *VAR_6)
{
 struct i2c_adapter *VAR_7 = &VAR_5->adapter;

 int VAR_8 = 0;

 VAR_8 = FUNC_2(VAR_5, VAR_2);
 if (VAR_8 == 0) {
  FUNC_3(VAR_5);
  FUNC_4(250);

  FUNC_0(VAR_1, 1, "Probing for MB86A16 (DVB-S/DSS)");
  VAR_6 = FUNC_1(VAR_3, &VAR_4, VAR_7);
  if (VAR_6) {
   FUNC_0(VAR_1, 1,
   "found MB86A16 DVB-S/DSS frontend @0x%02x",
   VAR_4.demod_address);

  } else {
   return -1;
  }
 } else {
  FUNC_0(VAR_1, 1, "Frontend on <%s> POWER ON failed! <%d>",
   VAR_7->name,
   VAR_8);

  return -VAR_0;
 }
 VAR_5->fe = VAR_6;
 FUNC_0(VAR_1, 1, "Done!");

 return 0;
}
