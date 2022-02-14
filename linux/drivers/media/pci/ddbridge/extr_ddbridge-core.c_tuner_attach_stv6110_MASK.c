
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stv6110x_devctl {int tuner_get_status; int tuner_set_refclk; int tuner_get_bbgain; int tuner_set_bbgain; int tuner_get_bandwidth; int tuner_set_bandwidth; int tuner_get_frequency; int tuner_set_frequency; int tuner_set_mode; int tuner_sleep; int tuner_init; } ;
struct stv6110x_config {int addr; } ;
struct stv090x_config {int tuner_get_status; int tuner_set_refclk; int tuner_get_bbgain; int tuner_set_bbgain; int tuner_get_bandwidth; int tuner_set_bandwidth; int tuner_get_frequency; int tuner_set_frequency; int tuner_set_mode; int tuner_sleep; int tuner_init; } ;
struct i2c_adapter {int dummy; } ;
struct device {int dummy; } ;
struct ddb_input {int nr; TYPE_3__* port; } ;
struct ddb_dvb {int fe; } ;
struct TYPE_6__ {TYPE_2__* dev; struct ddb_dvb* dvb; TYPE_1__* i2c; } ;
struct TYPE_5__ {struct device* dev; } ;
struct TYPE_4__ {struct i2c_adapter adap; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*,int,int ) ;
 struct stv6110x_devctl* FUNC_2 (int ,int ,struct stv6110x_config*,struct i2c_adapter*) ;
 struct stv090x_config VAR_1 ;
 struct stv090x_config VAR_2 ;
 struct stv6110x_config VAR_3 ;
 struct stv6110x_config VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_3(struct ddb_input *VAR_6, int VAR_7)
{
 struct i2c_adapter *VAR_8 = &VAR_6->port->i2c->adap;
 struct ddb_dvb *VAR_9 = &VAR_6->port->dvb[VAR_6->nr & 1];
 struct device *VAR_10 = VAR_6->port->dev->dev;
 struct stv090x_config *VAR_11 = VAR_7 ? &VAR_2 : &VAR_1;
 struct stv6110x_config *VAR_12 = (VAR_6->nr & 1) ?
  &VAR_4 : &VAR_3;
 const struct stv6110x_devctl *VAR_13;

 VAR_13 = FUNC_2(VAR_5, VAR_9->fe, VAR_12, VAR_8);
 if (!VAR_13) {
  FUNC_0(VAR_10, "No STV6110X found!\n");
  return -VAR_0;
 }
 FUNC_1(VAR_10, "attach tuner input %d adr %02x\n",
   VAR_6->nr, VAR_12->addr);

 VAR_11->tuner_init = VAR_13->tuner_init;
 VAR_11->tuner_sleep = VAR_13->tuner_sleep;
 VAR_11->tuner_set_mode = VAR_13->tuner_set_mode;
 VAR_11->tuner_set_frequency = VAR_13->tuner_set_frequency;
 VAR_11->tuner_get_frequency = VAR_13->tuner_get_frequency;
 VAR_11->tuner_set_bandwidth = VAR_13->tuner_set_bandwidth;
 VAR_11->tuner_get_bandwidth = VAR_13->tuner_get_bandwidth;
 VAR_11->tuner_set_bbgain = VAR_13->tuner_set_bbgain;
 VAR_11->tuner_get_bbgain = VAR_13->tuner_get_bbgain;
 VAR_11->tuner_set_refclk = VAR_13->tuner_set_refclk;
 VAR_11->tuner_get_status = VAR_13->tuner_get_status;

 return 0;
}
