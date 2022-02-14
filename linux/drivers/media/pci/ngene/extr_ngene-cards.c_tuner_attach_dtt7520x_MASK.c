
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ngene_channel {size_t number; int i2c_adapter; int fe; TYPE_3__* dev; } ;
struct drxd_config {int pll_type; int pll_address; } ;
struct device {int dummy; } ;
struct TYPE_6__ {TYPE_2__* card_info; TYPE_1__* pci_dev; } ;
struct TYPE_5__ {struct drxd_config** fe_config; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int ) ;
 int FUNC_1 (int ,int ,int ,int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct ngene_channel *VAR_2)
{
 struct device *VAR_3 = &VAR_2->dev->pci_dev->dev;
 struct drxd_config *VAR_4;

 VAR_4 = VAR_2->dev->card_info->fe_config[VAR_2->number];

 if (!FUNC_1(VAR_1, VAR_2->fe, VAR_4->pll_address,
   &VAR_2->i2c_adapter,
   VAR_4->pll_type)) {
  FUNC_0(VAR_3, "No pll(%d) found!\n", VAR_4->pll_type);
  return -VAR_0;
 }
 return 0;
}
