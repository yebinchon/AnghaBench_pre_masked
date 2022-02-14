
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
 int VAR_0 ;

__attribute__((used)) static int FUNC_6(struct ddb_port *VAR_1)
{
 struct i2c_adapter *VAR_2 = &VAR_1->i2c->adap;
 struct ddb *VAR_3 = VAR_1->dev;
 u8 VAR_4, VAR_5[2];
 int VAR_6;

 VAR_6 = FUNC_2(VAR_2, 0x10, 0x04, VAR_5, 2);
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_5[0] != 0x01) {
  FUNC_0(VAR_3->dev, "Port %d: invalid XO2\n", VAR_1->nr);
  return -1;
 }

 FUNC_1(VAR_2, 0x10, 0x08, &VAR_4);
 if (VAR_4 != 0) {
  FUNC_3(VAR_2, 0x10, 0x08, 0x00);
  FUNC_4(100);
 }

 FUNC_3(VAR_2, 0x10, 0x08, 0x04);
 FUNC_5(2000, 3000);

 FUNC_3(VAR_2, 0x10, 0x08, 0x07);


 FUNC_3(VAR_2, 0x10, 0x09, VAR_0);

 if (VAR_3->link[VAR_1->lnr].info->con_clock) {
  FUNC_0(VAR_3->dev, "Setting continuous clock for XO2\n");
  FUNC_3(VAR_2, 0x10, 0x0a, 0x03);
  FUNC_3(VAR_2, 0x10, 0x0b, 0x03);
 } else {
  FUNC_3(VAR_2, 0x10, 0x0a, 0x01);
  FUNC_3(VAR_2, 0x10, 0x0b, 0x01);
 }

 FUNC_5(2000, 3000);

 FUNC_3(VAR_2, 0x10, 0x08, 0x87);

 return 0;
}
