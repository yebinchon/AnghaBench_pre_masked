
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int tda_id ;
struct ngene_channel {TYPE_4__* fe; TYPE_2__* dev; } ;
struct i2c_adapter {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_8__ {int (* i2c_gate_ctrl ) (TYPE_4__*,int) ;} ;
struct TYPE_9__ {TYPE_3__ ops; } ;
struct TYPE_7__ {TYPE_1__* pci_dev; } ;
struct TYPE_6__ {struct device dev; } ;


 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*) ;
 scalar_t__ FUNC_2 (struct i2c_adapter*,unsigned short,int,int*,int) ;
 int FUNC_3 (TYPE_4__*,int) ;
 int FUNC_4 (TYPE_4__*,int) ;

__attribute__((used)) static int FUNC_5(struct ngene_channel *VAR_0,
          struct i2c_adapter *VAR_1,
          unsigned short VAR_2)
{
 struct device *VAR_3 = &VAR_0->dev->pci_dev->dev;
 u8 VAR_4[2];
 u8 VAR_5 = 0x00;

 FUNC_0(VAR_3, "stv0367-tda18212 tuner ping\n");
 if (VAR_0->fe->ops.i2c_gate_ctrl)
  VAR_0->fe->ops.i2c_gate_ctrl(VAR_0->fe, 1);

 if (FUNC_2(VAR_1, VAR_2, VAR_5, VAR_4, sizeof(VAR_4)) < 0)
  FUNC_0(VAR_3, "tda18212 ping 1 fail\n");
 if (FUNC_2(VAR_1, VAR_2, VAR_5, VAR_4, sizeof(VAR_4)) < 0)
  FUNC_1(VAR_3, "tda18212 ping failed, expect problems\n");

 if (VAR_0->fe->ops.i2c_gate_ctrl)
  VAR_0->fe->ops.i2c_gate_ctrl(VAR_0->fe, 0);

 return 0;
}
