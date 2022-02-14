
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int tda_id ;
struct i2c_adapter {int dummy; } ;
struct device {int dummy; } ;
struct ddb_input {int nr; TYPE_3__* port; } ;
struct ddb_dvb {TYPE_5__* fe; } ;
struct TYPE_10__ {int (* i2c_gate_ctrl ) (TYPE_5__*,int) ;} ;
struct TYPE_11__ {TYPE_4__ ops; } ;
struct TYPE_9__ {TYPE_2__* dev; struct ddb_dvb* dvb; TYPE_1__* i2c; } ;
struct TYPE_8__ {struct device* dev; } ;
struct TYPE_7__ {struct i2c_adapter adap; } ;


 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*) ;
 scalar_t__ FUNC_2 (struct i2c_adapter*,unsigned short,int,int*,int) ;
 int FUNC_3 (TYPE_5__*,int) ;
 int FUNC_4 (TYPE_5__*,int) ;

__attribute__((used)) static int FUNC_5(struct ddb_input *VAR_0, unsigned short VAR_1)
{
 struct i2c_adapter *VAR_2 = &VAR_0->port->i2c->adap;
 struct ddb_dvb *VAR_3 = &VAR_0->port->dvb[VAR_0->nr & 1];
 struct device *VAR_4 = VAR_0->port->dev->dev;
 u8 VAR_5[2];
 u8 VAR_6 = 0x00;

 FUNC_0(VAR_4, "stv0367-tda18212 tuner ping\n");
 if (VAR_3->fe->ops.i2c_gate_ctrl)
  VAR_3->fe->ops.i2c_gate_ctrl(VAR_3->fe, 1);

 if (FUNC_2(VAR_2, VAR_1, VAR_6, VAR_5, sizeof(VAR_5)) < 0)
  FUNC_0(VAR_4, "tda18212 ping 1 fail\n");
 if (FUNC_2(VAR_2, VAR_1, VAR_6, VAR_5, sizeof(VAR_5)) < 0)
  FUNC_1(VAR_4, "tda18212 ping failed, expect problems\n");

 if (VAR_3->fe->ops.i2c_gate_ctrl)
  VAR_3->fe->ops.i2c_gate_ctrl(VAR_3->fe, 0);

 return 0;
}
