
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct smi_dev {TYPE_4__* i2c_bus; TYPE_3__* i2c_bit; TYPE_2__* pci_dev; } ;
struct TYPE_7__ {int * parent; } ;
struct TYPE_10__ {TYPE_3__* algo_data; TYPE_1__ dev; void* owner; int name; } ;
struct TYPE_9__ {int udelay; int timeout; int getscl; int getsda; int (* setscl ) (struct smi_dev*,int) ;int (* setsda ) (struct smi_dev*,int) ;struct smi_dev* data; } ;
struct TYPE_8__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,struct smi_dev*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct smi_dev*,int) ;
 int FUNC_4 (struct smi_dev*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (struct smi_dev*,int) ;
 int FUNC_6 (struct smi_dev*,int) ;
 int FUNC_7 (struct smi_dev*,int ) ;
 int FUNC_8 (int ,char*,int) ;

__attribute__((used)) static int FUNC_9(struct smi_dev *VAR_7)
{
 int VAR_8;


 FUNC_7(VAR_7, VAR_0);
 FUNC_2(&VAR_7->i2c_bus[0], VAR_7);
 FUNC_8(VAR_7->i2c_bus[0].name, "SMI-I2C0", sizeof(VAR_7->i2c_bus[0].name));
 VAR_7->i2c_bus[0].owner = VAR_2;
 VAR_7->i2c_bus[0].dev.parent = &VAR_7->pci_dev->dev;
 VAR_7->i2c_bus[0].algo_data = &VAR_7->i2c_bit[0];
 VAR_7->i2c_bit[0].data = VAR_7;
 VAR_7->i2c_bit[0].setsda = FUNC_4;
 VAR_7->i2c_bit[0].setscl = FUNC_3;
 VAR_7->i2c_bit[0].getsda = VAR_4;
 VAR_7->i2c_bit[0].getscl = VAR_3;
 VAR_7->i2c_bit[0].udelay = 12;
 VAR_7->i2c_bit[0].timeout = 10;

 FUNC_4(VAR_7, 1);
 FUNC_3(VAR_7, 1);

 VAR_8 = FUNC_0(&VAR_7->i2c_bus[0]);
 if (VAR_8 < 0)
  return VAR_8;


 FUNC_7(VAR_7, VAR_1);
 FUNC_2(&VAR_7->i2c_bus[1], VAR_7);
 FUNC_8(VAR_7->i2c_bus[1].name, "SMI-I2C1", sizeof(VAR_7->i2c_bus[1].name));
 VAR_7->i2c_bus[1].owner = VAR_2;
 VAR_7->i2c_bus[1].dev.parent = &VAR_7->pci_dev->dev;
 VAR_7->i2c_bus[1].algo_data = &VAR_7->i2c_bit[1];
 VAR_7->i2c_bit[1].data = VAR_7;
 VAR_7->i2c_bit[1].setsda = FUNC_6;
 VAR_7->i2c_bit[1].setscl = FUNC_5;
 VAR_7->i2c_bit[1].getsda = VAR_6;
 VAR_7->i2c_bit[1].getscl = VAR_5;
 VAR_7->i2c_bit[1].udelay = 12;
 VAR_7->i2c_bit[1].timeout = 10;

 FUNC_6(VAR_7, 1);
 FUNC_5(VAR_7, 1);

 VAR_8 = FUNC_0(&VAR_7->i2c_bus[1]);
 if (VAR_8 < 0)
  FUNC_1(&VAR_7->i2c_bus[0]);

 return VAR_8;
}
