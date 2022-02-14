
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stv0910_cfg {int single; int parallel; int tsspeed; int adr; } ;
struct lnbh25_config {int i2c_address; } ;
struct i2c_adapter {int dummy; } ;
struct device {int dummy; } ;
struct ddb_input {int nr; TYPE_3__* port; } ;
struct ddb_dvb {void* fe; } ;
struct TYPE_6__ {TYPE_2__* dev; struct ddb_dvb* dvb; TYPE_1__* i2c; } ;
struct TYPE_5__ {struct device* dev; } ;
struct TYPE_4__ {struct i2c_adapter adap; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*) ;
 void* FUNC_2 (int ,void*,...) ;
 int FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (struct i2c_adapter*,int) ;
 int VAR_1 ;
 struct lnbh25_config VAR_2 ;
 int VAR_3 ;
 struct stv0910_cfg VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_5(struct ddb_input *VAR_6, int VAR_7, int VAR_8)
{
 struct i2c_adapter *VAR_9 = &VAR_6->port->i2c->adap;
 struct ddb_dvb *VAR_10 = &VAR_6->port->dvb[VAR_6->nr & 1];
 struct device *VAR_11 = VAR_6->port->dev->dev;
 struct stv0910_cfg VAR_12 = VAR_4;
 struct lnbh25_config VAR_13 = VAR_2;

 if (VAR_5)
  VAR_12.single = 1;

 if (VAR_7)
  VAR_12.parallel = 2;

 if (VAR_8) {
  FUNC_1(VAR_11, "Enabling stv0910 higher speed TS\n");
  VAR_12.tsspeed = 0x10;
 }

 VAR_10->fe = FUNC_2(VAR_3, VAR_9, &VAR_12, (VAR_6->nr & 1));
 if (!VAR_10->fe) {
  VAR_12.adr = 0x6c;
  VAR_10->fe = FUNC_2(VAR_3, VAR_9,
         &VAR_12, (VAR_6->nr & 1));
 }
 if (!VAR_10->fe) {
  FUNC_0(VAR_11, "No STV0910 found!\n");
  return -VAR_0;
 }




 if (FUNC_4(VAR_9, 0x0d))
  VAR_13.i2c_address = (((VAR_6->nr & 1) ? 0x0d : 0x0c) << 1);
 else
  VAR_13.i2c_address = (((VAR_6->nr & 1) ? 0x09 : 0x08) << 1);

 if (!FUNC_2(VAR_1, VAR_10->fe, &VAR_13, VAR_9)) {
  FUNC_0(VAR_11, "No LNBH25 found!\n");
  FUNC_3(VAR_10->fe);
  return -VAR_0;
 }

 return 0;
}
