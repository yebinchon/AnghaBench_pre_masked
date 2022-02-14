
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct tda18212_config {int if_dvbt_6; int if_dvbt_7; int if_dvbt_8; int if_dvbt2_6; int if_dvbt2_7; int if_dvbt2_8; int if_dvbc; int fe; } ;
struct i2c_client {int dummy; } ;
struct i2c_adapter {int dummy; } ;
struct device {int dummy; } ;
struct ddb_input {int nr; TYPE_3__* port; } ;
struct ddb_dvb {struct i2c_client** i2c_client; int fe; } ;
struct TYPE_6__ {TYPE_2__* dev; struct ddb_dvb* dvb; TYPE_1__* i2c; } ;
struct TYPE_5__ {struct device* dev; } ;
struct TYPE_4__ {struct i2c_adapter adap; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 struct i2c_client* FUNC_1 (char*,int *,struct i2c_adapter*,int,struct tda18212_config*) ;
 int FUNC_2 (struct ddb_input*,int) ;

__attribute__((used)) static int FUNC_3(struct ddb_input *VAR_2, u32 VAR_3)
{
 struct i2c_adapter *VAR_4 = &VAR_2->port->i2c->adap;
 struct ddb_dvb *VAR_5 = &VAR_2->port->dvb[VAR_2->nr & 1];
 struct device *VAR_6 = VAR_2->port->dev->dev;
 struct i2c_client *VAR_7;
 struct tda18212_config VAR_8 = {
  .fe = VAR_5->fe,
  .if_dvbt_6 = 3550,
  .if_dvbt_7 = 3700,
  .if_dvbt_8 = 4150,
  .if_dvbt2_6 = 3250,
  .if_dvbt2_7 = 4000,
  .if_dvbt2_8 = 4000,
  .if_dvbc = 5000,
 };
 u8 VAR_9 = (VAR_2->nr & 1) ? 0x63 : 0x60;





 if (VAR_3 == VAR_0)
  FUNC_2(VAR_2, VAR_9);


 VAR_7 = FUNC_1("tda18212", ((void*)0), VAR_4, VAR_9, &VAR_8);
 if (!VAR_7)
  goto err;

 VAR_5->i2c_client[0] = VAR_7;
 return 0;
err:
 FUNC_0(VAR_6, "TDA18212 tuner not found. Device is not fully operational.\n");
 return -VAR_1;
}
