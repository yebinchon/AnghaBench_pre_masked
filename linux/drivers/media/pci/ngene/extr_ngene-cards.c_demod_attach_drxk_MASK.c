
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
struct drxk_config {char* microcode_name; int qam_demod_parameter_count; int adr; } ;
struct device {int dummy; } ;
typedef int config ;
struct TYPE_7__ {int i2c_gate_ctrl; } ;
struct TYPE_8__ {TYPE_3__ ops; struct ngene_channel* sec_priv; } ;
struct TYPE_6__ {TYPE_1__* pci_dev; } ;
struct TYPE_5__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_1 (int ,struct drxk_config*,struct i2c_adapter*) ;
 int FUNC_2 (struct drxk_config*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct ngene_channel *VAR_3,
        struct i2c_adapter *VAR_4)
{
 struct device *VAR_5 = &VAR_3->dev->pci_dev->dev;
 struct drxk_config VAR_6;

 FUNC_2(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.microcode_name = "drxk_a3.mc";
 VAR_6.qam_demod_parameter_count = 4;
 VAR_6.adr = 0x29 + (VAR_3->number ^ 2);

 VAR_3->fe = FUNC_1(VAR_1, &VAR_6, VAR_4);
 if (!VAR_3->fe) {
  FUNC_0(VAR_5, "No DRXK found!\n");
  return -VAR_0;
 }
 VAR_3->fe->sec_priv = VAR_3;
 VAR_3->gate_ctrl = VAR_3->fe->ops.i2c_gate_ctrl;
 VAR_3->fe->ops.i2c_gate_ctrl = VAR_2;
 return 0;
}
