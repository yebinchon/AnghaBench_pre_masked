
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct i2c_adapter {int dummy; } ;
struct device {int dummy; } ;
struct ddb_input {int nr; TYPE_3__* port; } ;
struct ddb_dvb {TYPE_5__* fe; int i2c_gate_ctrl; } ;
struct cxd2841er_config {int i2c_addr; int flags; int xtal; } ;
struct TYPE_9__ {int i2c_gate_ctrl; } ;
struct TYPE_10__ {TYPE_4__ ops; struct ddb_input* sec_priv; } ;
struct TYPE_8__ {TYPE_2__* dev; struct ddb_dvb* dvb; TYPE_1__* i2c; } ;
struct TYPE_7__ {struct device* dev; } ;
struct TYPE_6__ {struct i2c_adapter adap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct device*,char*) ;
 TYPE_5__* FUNC_1 (int ,struct cxd2841er_config*,struct i2c_adapter*) ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_2(struct ddb_input *VAR_11, int VAR_12, int VAR_13)
{
 struct i2c_adapter *VAR_14 = &VAR_11->port->i2c->adap;
 struct ddb_dvb *VAR_15 = &VAR_11->port->dvb[VAR_11->nr & 1];
 struct device *VAR_16 = VAR_11->port->dev->dev;
 struct cxd2841er_config VAR_17;


 VAR_17.i2c_addr = ((VAR_11->nr & 1) ? 0x6d : 0x6c) << 1;

 VAR_17.xtal = VAR_13 ? VAR_8 : VAR_7;
 VAR_17.flags = VAR_0 | VAR_1 |
  VAR_3 | VAR_2 |
  VAR_4;

 if (!VAR_12)
  VAR_17.flags |= VAR_5;


 VAR_15->fe = FUNC_1(VAR_9, &VAR_17, VAR_14);

 if (!VAR_15->fe) {
  FUNC_0(VAR_16, "No cxd2837/38/43/54 found!\n");
  return -VAR_6;
 }
 VAR_15->fe->sec_priv = VAR_11;
 VAR_15->i2c_gate_ctrl = VAR_15->fe->ops.i2c_gate_ctrl;
 VAR_15->fe->ops.i2c_gate_ctrl = VAR_10;
 return 0;
}
