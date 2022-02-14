
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ngene_channel {size_t number; int fe; TYPE_2__* dev; int i2c_adapter; } ;
struct drxd_config {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_6__ {struct drxd_config** fe_config; } ;
struct TYPE_5__ {TYPE_1__* pci_dev; TYPE_3__* card_info; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int VAR_1 ;
 int FUNC_1 (int ,struct drxd_config*,struct ngene_channel*,int *,struct device*) ;

__attribute__((used)) static int FUNC_2(struct ngene_channel *VAR_2)
{
 struct device *VAR_3 = &VAR_2->dev->pci_dev->dev;
 struct drxd_config *VAR_4;

 VAR_4 = VAR_2->dev->card_info->fe_config[VAR_2->number];

 VAR_2->fe = FUNC_1(VAR_1, VAR_4, VAR_2,
   &VAR_2->i2c_adapter, &VAR_2->dev->pci_dev->dev);
 if (!VAR_2->fe) {
  FUNC_0(VAR_3, "No DRXD found!\n");
  return -VAR_0;
 }
 return 0;
}
