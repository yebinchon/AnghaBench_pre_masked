
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
struct TYPE_9__ {int i2c_gate_ctrl; } ;
struct TYPE_10__ {TYPE_4__ ops; struct ddb_input* sec_priv; } ;
struct TYPE_8__ {TYPE_2__* dev; struct ddb_dvb* dvb; TYPE_1__* i2c; } ;
struct TYPE_7__ {struct device* dev; } ;
struct TYPE_6__ {struct i2c_adapter adap; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 TYPE_5__* FUNC_1 (int ,int *,struct i2c_adapter*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct ddb_input *VAR_4)
{
 struct i2c_adapter *VAR_5 = &VAR_4->port->i2c->adap;
 struct ddb_dvb *VAR_6 = &VAR_4->port->dvb[VAR_4->nr & 1];
 struct device *VAR_7 = VAR_4->port->dev->dev;


 VAR_6->fe = FUNC_1(VAR_3,
        &VAR_1[(VAR_4->nr & 1)], VAR_5);

 if (!VAR_6->fe) {
  FUNC_0(VAR_7, "No stv0367 found!\n");
  return -VAR_0;
 }
 VAR_6->fe->sec_priv = VAR_4;
 VAR_6->i2c_gate_ctrl = VAR_6->fe->ops.i2c_gate_ctrl;
 VAR_6->fe->ops.i2c_gate_ctrl = VAR_2;
 return 0;
}
