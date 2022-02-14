
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
struct drxk_config {int adr; char* microcode_name; } ;
struct device {int dummy; } ;
struct ddb_input {int nr; TYPE_3__* port; } ;
struct ddb_dvb {TYPE_5__* fe; int i2c_gate_ctrl; } ;
typedef int config ;
struct TYPE_9__ {int i2c_gate_ctrl; } ;
struct TYPE_10__ {TYPE_4__ ops; struct ddb_input* sec_priv; } ;
struct TYPE_8__ {TYPE_2__* dev; struct ddb_dvb* dvb; TYPE_1__* i2c; } ;
struct TYPE_7__ {struct device* dev; } ;
struct TYPE_6__ {struct i2c_adapter adap; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int VAR_1 ;
 TYPE_5__* FUNC_1 (int ,struct drxk_config*,struct i2c_adapter*) ;
 int VAR_2 ;
 int FUNC_2 (struct drxk_config*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct ddb_input *VAR_3)
{
 struct i2c_adapter *VAR_4 = &VAR_3->port->i2c->adap;
 struct ddb_dvb *VAR_5 = &VAR_3->port->dvb[VAR_3->nr & 1];
 struct device *VAR_6 = VAR_3->port->dev->dev;
 struct drxk_config VAR_7;

 FUNC_2(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.adr = 0x29 + (VAR_3->nr & 1);
 VAR_7.microcode_name = "drxk_a3.mc";

 VAR_5->fe = FUNC_1(VAR_1, &VAR_7, VAR_4);
 if (!VAR_5->fe) {
  FUNC_0(VAR_6, "No DRXK found!\n");
  return -VAR_0;
 }
 VAR_5->fe->sec_priv = VAR_3;
 VAR_5->i2c_gate_ctrl = VAR_5->fe->ops.i2c_gate_ctrl;
 VAR_5->fe->ops.i2c_gate_ctrl = VAR_2;
 return 0;
}
