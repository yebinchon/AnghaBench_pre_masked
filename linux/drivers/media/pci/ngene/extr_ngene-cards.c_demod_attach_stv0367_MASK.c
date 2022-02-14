
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ngene_channel {int number; TYPE_4__* fe; int gate_ctrl; TYPE_3__* dev; } ;
struct i2c_adapter {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_5__ {int i2c_gate_ctrl; } ;
struct TYPE_8__ {TYPE_1__ ops; struct ngene_channel* sec_priv; } ;
struct TYPE_7__ {TYPE_2__* pci_dev; } ;
struct TYPE_6__ {struct device dev; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 int VAR_2 ;
 TYPE_4__* FUNC_1 (int ,int *,struct i2c_adapter*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct ngene_channel *VAR_4,
    struct i2c_adapter *VAR_5)
{
 struct device *VAR_6 = &VAR_4->dev->pci_dev->dev;

 VAR_4->fe = FUNC_1(VAR_3,
         &VAR_1[(VAR_4->number & 1)], VAR_5);

 if (!VAR_4->fe) {
  FUNC_0(VAR_6, "stv0367ddb_attach() failed!\n");
  return -VAR_0;
 }

 VAR_4->fe->sec_priv = VAR_4;
 VAR_4->gate_ctrl = VAR_4->fe->ops.i2c_gate_ctrl;
 VAR_4->fe->ops.i2c_gate_ctrl = VAR_2;
 return 0;
}
