
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dev; } ;
struct TYPE_2__ {int * parent; } ;
struct i2c_adapter {int timeout; int retries; TYPE_1__ dev; int * algo_data; int * algo; int owner; int name; } ;
struct mantis_pci {int i2c_rc; int i2c_lock; int i2c_wq; struct pci_dev* pdev; struct i2c_adapter adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,char*) ;
 int FUNC_1 (struct i2c_adapter*) ;
 int FUNC_2 (struct i2c_adapter*,struct mantis_pci*) ;
 int FUNC_3 (int *) ;
 int VAR_5 ;
 int FUNC_4 (struct mantis_pci*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,char*,int) ;

int FUNC_9(struct mantis_pci *VAR_6)
{
 u32 VAR_7;
 struct i2c_adapter *VAR_8 = &VAR_6->adapter;
 struct pci_dev *VAR_9 = VAR_6->pdev;

 FUNC_3(&VAR_6->i2c_wq);
 FUNC_7(&VAR_6->i2c_lock);
 FUNC_8(VAR_8->name, "Mantis I2C", sizeof(VAR_8->name));
 FUNC_2(VAR_8, VAR_6);

 VAR_8->owner = VAR_4;
 VAR_8->algo = &VAR_5;
 VAR_8->algo_data = ((void*)0);
 VAR_8->timeout = 500;
 VAR_8->retries = 3;
 VAR_8->dev.parent = &VAR_9->dev;

 VAR_6->i2c_rc = FUNC_1(VAR_8);
 if (VAR_6->i2c_rc < 0)
  return VAR_6->i2c_rc;

 FUNC_0(VAR_0, 1, "Initializing I2C ..");

 VAR_7 = FUNC_5(VAR_3);
 FUNC_5(VAR_2);
 FUNC_6(VAR_7, VAR_3);
 FUNC_0(VAR_0, 1, "Disabling I2C interrupt");
 FUNC_4(VAR_6, VAR_1);

 return 0;
}
