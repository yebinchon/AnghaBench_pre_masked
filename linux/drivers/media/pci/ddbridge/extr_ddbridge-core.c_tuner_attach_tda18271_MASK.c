
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct i2c_adapter {int dummy; } ;
struct dvb_frontend {int dummy; } ;
struct device {int dummy; } ;
struct ddb_input {int nr; TYPE_3__* port; } ;
struct ddb_dvb {TYPE_5__* fe; } ;
struct TYPE_11__ {int (* i2c_gate_ctrl ) (TYPE_5__*,int) ;} ;
struct TYPE_12__ {TYPE_4__ ops; } ;
struct TYPE_10__ {TYPE_2__* dev; struct ddb_dvb* dvb; TYPE_1__* i2c; } ;
struct TYPE_9__ {struct device* dev; } ;
struct TYPE_8__ {struct i2c_adapter adap; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 struct dvb_frontend* FUNC_1 (int ,TYPE_5__*,struct i2c_adapter*,int) ;
 int FUNC_2 (TYPE_5__*,int) ;
 int FUNC_3 (TYPE_5__*,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct ddb_input *VAR_2)
{
 struct i2c_adapter *VAR_3 = &VAR_2->port->i2c->adap;
 struct ddb_dvb *VAR_4 = &VAR_2->port->dvb[VAR_2->nr & 1];
 struct device *VAR_5 = VAR_2->port->dev->dev;
 struct dvb_frontend *VAR_6;

 if (VAR_4->fe->ops.i2c_gate_ctrl)
  VAR_4->fe->ops.i2c_gate_ctrl(VAR_4->fe, 1);
 VAR_6 = FUNC_1(VAR_1, VAR_4->fe, VAR_3, 0x60);
 if (VAR_4->fe->ops.i2c_gate_ctrl)
  VAR_4->fe->ops.i2c_gate_ctrl(VAR_4->fe, 0);
 if (!VAR_6) {
  FUNC_0(VAR_5, "No TDA18271 found!\n");
  return -VAR_0;
 }
 return 0;
}
