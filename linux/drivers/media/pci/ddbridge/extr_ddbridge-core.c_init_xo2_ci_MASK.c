
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct i2c_adapter {int dummy; } ;
struct ddb_port {size_t lnr; int nr; struct ddb* dev; TYPE_1__* i2c; } ;
struct ddb {int dev; TYPE_3__* link; } ;
struct TYPE_6__ {TYPE_2__* info; } ;
struct TYPE_5__ {scalar_t__ con_clock; } ;
struct TYPE_4__ {struct i2c_adapter adap; } ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct i2c_adapter*,int,int,int*) ;
 int FUNC_2 (struct i2c_adapter*,int,int,int*,int) ;
 int FUNC_3 (struct i2c_adapter*,int,int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct ddb_port *VAR_0)
{
 struct i2c_adapter *VAR_1 = &VAR_0->i2c->adap;
 struct ddb *VAR_2 = VAR_0->dev;
 u8 VAR_3, VAR_4[2];
 int VAR_5;

 VAR_5 = FUNC_2(VAR_1, 0x10, 0x04, VAR_4, 2);
 if (VAR_5 < 0)
  return VAR_5;

 if (VAR_4[0] > 1) {
  FUNC_0(VAR_2->dev, "Port %d: invalid XO2 CI %02x\n",
    VAR_0->nr, VAR_4[0]);
  return -1;
 }
 FUNC_0(VAR_2->dev, "Port %d: DuoFlex CI %u.%u\n",
   VAR_0->nr, VAR_4[0], VAR_4[1]);

 FUNC_1(VAR_1, 0x10, 0x08, &VAR_3);
 if (VAR_3 != 0) {
  FUNC_3(VAR_1, 0x10, 0x08, 0x00);
  FUNC_4(100);
 }

 FUNC_3(VAR_1, 0x10, 0x08, 3);
 FUNC_5(2000, 3000);


 FUNC_3(VAR_1, 0x10, 0x09, 1);

 FUNC_3(VAR_1, 0x10, 0x08, 0x83);
 FUNC_5(2000, 3000);

 if (VAR_2->link[VAR_0->lnr].info->con_clock) {
  FUNC_0(VAR_2->dev, "Setting continuous clock for DuoFlex CI\n");
  FUNC_3(VAR_1, 0x10, 0x0a, 0x03);
  FUNC_3(VAR_1, 0x10, 0x0b, 0x03);
 } else {
  FUNC_3(VAR_1, 0x10, 0x0a, 0x01);
  FUNC_3(VAR_1, 0x10, 0x0b, 0x01);
 }
 return 0;
}
