
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ngene {TYPE_2__* pci_dev; TYPE_3__* channel; } ;
struct TYPE_4__ {int * parent; } ;
struct i2c_adapter {TYPE_1__ dev; void* algo_data; int * algo; int name; } ;
struct TYPE_6__ {struct i2c_adapter i2c_adapter; } ;
struct TYPE_5__ {int dev; } ;


 int FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (struct i2c_adapter*,TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*,int) ;

int FUNC_3(struct ngene *VAR_1, int VAR_2)
{
 struct i2c_adapter *VAR_3 = &(VAR_1->channel[VAR_2].i2c_adapter);

 FUNC_1(VAR_3, &(VAR_1->channel[VAR_2]));

 FUNC_2(VAR_3->name, "nGene", sizeof(VAR_3->name));

 VAR_3->algo = &VAR_0;
 VAR_3->algo_data = (void *)&(VAR_1->channel[VAR_2]);
 VAR_3->dev.parent = &VAR_1->pci_dev->dev;

 return FUNC_0(VAR_3);
}
