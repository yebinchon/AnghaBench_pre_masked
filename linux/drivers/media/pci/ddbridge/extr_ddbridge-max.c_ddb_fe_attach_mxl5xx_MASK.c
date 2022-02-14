
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mxl5xx_cfg {struct ddb_link* fw_priv; } ;
struct i2c_adapter {int dummy; } ;
struct ddb_port {size_t lnr; struct ddb_dvb* dvb; TYPE_1__* i2c; struct ddb* dev; } ;
struct ddb_link {int dummy; } ;
struct ddb_input {int nr; struct ddb_port* port; } ;
struct ddb_dvb {int input; TYPE_3__* fe; int diseqc_send_master_cmd; int * set_input; } ;
struct ddb {int dev; struct ddb_link* link; } ;
struct TYPE_5__ {int diseqc_send_burst; int diseqc_send_master_cmd; int set_tone; int enable_high_lnb_voltage; int set_voltage; } ;
struct TYPE_6__ {struct ddb_input* sec_priv; TYPE_2__ ops; } ;
struct TYPE_4__ {struct i2c_adapter adap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ddb*,struct ddb_link*,int) ;
 int FUNC_1 (int ,char*) ;
 TYPE_3__* FUNC_2 (int ,struct i2c_adapter*,struct mxl5xx_cfg*,int,int,int **) ;
 int VAR_3 ;
 int FUNC_3 (struct ddb*,size_t,int,int ) ;
 int FUNC_4 (struct ddb*,size_t,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct mxl5xx_cfg VAR_9 ;
 int VAR_10 ;

int FUNC_5(struct ddb_input *VAR_11)
{
 struct ddb *VAR_12 = VAR_11->port->dev;
 struct i2c_adapter *VAR_13 = &VAR_11->port->i2c->adap;
 struct ddb_dvb *VAR_14 = &VAR_11->port->dvb[VAR_11->nr & 1];
 struct ddb_port *VAR_15 = VAR_11->port;
 struct ddb_link *VAR_16 = &VAR_12->link[VAR_15->lnr];
 struct mxl5xx_cfg VAR_17;
 int VAR_18, VAR_19;

 VAR_17 = VAR_9;
 VAR_17.fw_priv = VAR_16;
 VAR_14->set_input = ((void*)0);

 VAR_18 = VAR_11->nr;
 VAR_19 = VAR_18 & 3;
 if (VAR_3 == 3)
  VAR_19 = 0;

 VAR_14->fe = FUNC_2(VAR_10, VAR_13, &VAR_17,
        VAR_18, VAR_19, &VAR_14->set_input);

 if (!VAR_14->fe) {
  FUNC_1(VAR_12->dev, "No MXL5XX found!\n");
  return -VAR_0;
 }

 if (!VAR_14->set_input) {
  FUNC_1(VAR_12->dev, "No mxl5xx_set_input function pointer!\n");
  return -VAR_0;
 }

 if (VAR_11->nr < 4) {
  FUNC_3(VAR_12, VAR_15->lnr, VAR_11->nr, VAR_1);
  FUNC_4(VAR_12, VAR_15->lnr, VAR_11->nr, VAR_2);
 }
 FUNC_0(VAR_12, VAR_16, VAR_3);

 VAR_14->fe->ops.set_voltage = VAR_8;
 VAR_14->fe->ops.enable_high_lnb_voltage = VAR_4;
 VAR_14->fe->ops.set_tone = VAR_7;
 VAR_14->diseqc_send_master_cmd = VAR_14->fe->ops.diseqc_send_master_cmd;
 VAR_14->fe->ops.diseqc_send_master_cmd = VAR_6;
 VAR_14->fe->ops.diseqc_send_burst = VAR_5;
 VAR_14->fe->sec_priv = VAR_11;
 VAR_14->input = VAR_19;
 return 0;
}
