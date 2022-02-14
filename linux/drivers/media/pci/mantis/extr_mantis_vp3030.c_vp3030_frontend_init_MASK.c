
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {int name; } ;
struct mantis_pci {struct dvb_frontend* fe; struct mantis_hwconfig* hwconfig; struct i2c_adapter adapter; } ;
struct mantis_hwconfig {int reset; } ;
struct dvb_frontend {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,char*,...) ;
 struct dvb_frontend* FUNC_1 (int ,struct dvb_frontend*,struct i2c_adapter*,...) ;
 int VAR_3 ;
 int FUNC_2 (struct mantis_pci*,int ) ;
 int FUNC_3 (struct mantis_pci*,int ,int) ;
 int VAR_4 ;
 int FUNC_4 (int) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_5(struct mantis_pci *VAR_7, struct dvb_frontend *VAR_8)
{
 struct i2c_adapter *VAR_9 = &VAR_7->adapter;
 struct mantis_hwconfig *VAR_10 = VAR_7->hwconfig;
 int VAR_11 = 0;

 FUNC_3(VAR_7, VAR_10->reset, 0);
 FUNC_4(100);
 VAR_11 = FUNC_2(VAR_7, VAR_2);
 FUNC_4(100);
 FUNC_3(VAR_7, VAR_10->reset, 1);

 if (VAR_11 == 0) {
  FUNC_4(250);
  FUNC_0(VAR_1, 1, "Probing for 10353 (DVB-T)");
  VAR_8 = FUNC_1(VAR_6, &VAR_4, VAR_9);

  if (!VAR_8)
   return -1;

  FUNC_1(VAR_5, VAR_8, &VAR_3, VAR_9);
 } else {
  FUNC_0(VAR_1, 1, "Frontend on <%s> POWER ON failed! <%d>",
   VAR_9->name,
   VAR_11);

  return -VAR_0;

 }
 VAR_7->fe = VAR_8;
 FUNC_0(VAR_1, 1, "Done!");

 return 0;
}
