
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ngene_channel {TYPE_4__* fe; TYPE_2__* dev; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_frontend {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_7__ {int (* i2c_gate_ctrl ) (TYPE_4__*,int) ;} ;
struct TYPE_10__ {TYPE_1__ ops; } ;
struct TYPE_9__ {struct device dev; } ;
struct TYPE_8__ {TYPE_3__* pci_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 struct dvb_frontend* FUNC_1 (int ,TYPE_4__*,struct i2c_adapter*,int) ;
 struct i2c_adapter* FUNC_2 (struct ngene_channel*) ;
 int FUNC_3 (TYPE_4__*,int) ;
 int FUNC_4 (TYPE_4__*,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(struct ngene_channel *VAR_2)
{
 struct device *VAR_3 = &VAR_2->dev->pci_dev->dev;
 struct i2c_adapter *VAR_4 = FUNC_2(VAR_2);
 struct dvb_frontend *VAR_5;

 if (VAR_2->fe->ops.i2c_gate_ctrl)
  VAR_2->fe->ops.i2c_gate_ctrl(VAR_2->fe, 1);
 VAR_5 = FUNC_1(VAR_1, VAR_2->fe, VAR_4, 0x60);
 if (VAR_2->fe->ops.i2c_gate_ctrl)
  VAR_2->fe->ops.i2c_gate_ctrl(VAR_2->fe, 0);
 if (!VAR_5) {
  FUNC_0(VAR_3, "No TDA18271 found!\n");
  return -VAR_0;
 }

 return 0;
}
