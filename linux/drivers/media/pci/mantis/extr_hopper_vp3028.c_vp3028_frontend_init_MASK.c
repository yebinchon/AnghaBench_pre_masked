
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {int name; } ;
struct mantis_pci {struct mantis_hwconfig* hwconfig; struct i2c_adapter adapter; } ;
struct mantis_hwconfig {int reset; } ;
struct dvb_frontend {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,char*,...) ;
 struct dvb_frontend* FUNC_1 (int ,int *,struct i2c_adapter*) ;
 int VAR_3 ;
 int FUNC_2 (struct mantis_pci*,int ) ;
 int FUNC_3 (struct mantis_pci*,int ,int) ;
 int FUNC_4 (int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(struct mantis_pci *VAR_5, struct dvb_frontend *VAR_6)
{
 struct i2c_adapter *VAR_7 = &VAR_5->adapter;
 struct mantis_hwconfig *VAR_8 = VAR_5->hwconfig;
 int VAR_9 = 0;

 FUNC_3(VAR_5, VAR_8->reset, 0);
 FUNC_4(100);
 VAR_9 = FUNC_2(VAR_5, VAR_2);
 FUNC_4(100);
 FUNC_3(VAR_5, VAR_8->reset, 1);

 VAR_9 = FUNC_2(VAR_5, VAR_2);
 if (VAR_9 == 0) {
  FUNC_4(250);
  FUNC_0(VAR_1, 1, "Probing for 10353 (DVB-T)");
  VAR_6 = FUNC_1(VAR_4, &VAR_3, VAR_7);

  if (!VAR_6)
   return -1;
 } else {
  FUNC_0(VAR_1, 1, "Frontend on <%s> POWER ON failed! <%d>",
   VAR_7->name,
   VAR_9);

  return -VAR_0;
 }
 FUNC_0(VAR_1, 1, "Done!");

 return 0;
}
