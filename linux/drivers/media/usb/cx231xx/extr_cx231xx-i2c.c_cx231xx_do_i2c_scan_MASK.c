
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int len; unsigned char* buf; int addr; int flags; } ;
struct i2c_adapter {int dummy; } ;
struct cx231xx {int i2c_scan_running; int dev; } ;


 int VAR_0 ;
 struct i2c_adapter* FUNC_0 (struct cx231xx*,int) ;
 int FUNC_1 (int ,char*,int,int,char*) ;
 char** VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct i2c_adapter*,struct i2c_msg*,int) ;

void FUNC_3(struct cx231xx *VAR_3, int VAR_4)
{
 unsigned char VAR_5;
 int VAR_6, VAR_7;
 struct i2c_adapter *VAR_8;
 struct i2c_msg VAR_9 = {
  .flags = VAR_0,
  .len = 1,
  .buf = &VAR_5,
 };

 if (!VAR_2)
  return;


 VAR_3->i2c_scan_running = 1;
 VAR_8 = FUNC_0(VAR_3, VAR_4);

 for (VAR_6 = 0; VAR_6 < 128; VAR_6++) {
  VAR_9.addr = VAR_6;
  VAR_7 = FUNC_2(VAR_8, &VAR_9, 1);

  if (VAR_7 < 0)
   continue;
  FUNC_1(VAR_3->dev,
    "i2c scan: found device @ port %d addr 0x%x  [%s]\n",
    VAR_4,
    VAR_6 << 1,
    VAR_1[VAR_6] ? VAR_1[VAR_6] : "???");
 }

 VAR_3->i2c_scan_running = 0;
}
