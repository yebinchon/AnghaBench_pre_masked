
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ngene_channel {int number; TYPE_4__* fe; int gate_ctrl; TYPE_2__* dev; } ;
struct i2c_adapter {int dummy; } ;
struct device {int dummy; } ;
struct cxd2841er_config {int i2c_addr; int flags; int xtal; } ;
struct TYPE_7__ {int i2c_gate_ctrl; } ;
struct TYPE_8__ {TYPE_3__ ops; struct ngene_channel* sec_priv; } ;
struct TYPE_6__ {TYPE_1__* pci_dev; } ;
struct TYPE_5__ {struct device dev; } ;


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
 int VAR_10 ;
 TYPE_4__* FUNC_1 (int ,struct cxd2841er_config*,struct i2c_adapter*) ;

__attribute__((used)) static int FUNC_2(struct ngene_channel *VAR_11,
    struct i2c_adapter *VAR_12, int VAR_13)
{
 struct device *VAR_14 = &VAR_11->dev->pci_dev->dev;
 struct cxd2841er_config VAR_15;


 VAR_15.i2c_addr = ((VAR_11->number & 1) ? 0x6d : 0x6c) << 1;

 VAR_15.xtal = VAR_13 ? VAR_8 : VAR_7;
 VAR_15.flags = VAR_0 | VAR_1 |
  VAR_3 | VAR_2 |
  VAR_4 | VAR_5;


 VAR_11->fe = FUNC_1(VAR_9, &VAR_15, VAR_12);

 if (!VAR_11->fe) {
  FUNC_0(VAR_14, "CXD28XX attach failed!\n");
  return -VAR_6;
 }

 VAR_11->fe->sec_priv = VAR_11;
 VAR_11->gate_ctrl = VAR_11->fe->ops.i2c_gate_ctrl;
 VAR_11->fe->ops.i2c_gate_ctrl = VAR_10;
 return 0;
}
