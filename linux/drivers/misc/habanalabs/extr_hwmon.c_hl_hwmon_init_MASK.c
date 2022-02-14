
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int card_name; } ;
struct asic_fixed_properties {TYPE_2__ armcp_info; } ;
struct hl_device {int hwmon_initialized; struct device* dev; int hwmon_dev; TYPE_3__* hl_chip_info; int fw_loading; struct asic_fixed_properties asic_prop; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_6__ {int * ops; scalar_t__ info; } ;
struct TYPE_4__ {struct device dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int FUNC_5 (struct device*,int ,struct hl_device*,TYPE_3__*,int *) ;

int FUNC_6(struct hl_device *VAR_1)
{
 struct device *VAR_2 = VAR_1->pdev ? &VAR_1->pdev->dev : VAR_1->dev;
 struct asic_fixed_properties *VAR_3 = &VAR_1->asic_prop;
 int VAR_4;

 if ((VAR_1->hwmon_initialized) || !(VAR_1->fw_loading))
  return 0;

 if (VAR_1->hl_chip_info->info) {
  VAR_1->hl_chip_info->ops = &VAR_0;

  VAR_1->hwmon_dev = FUNC_5(VAR_2,
     VAR_3->armcp_info.card_name, VAR_1,
     VAR_1->hl_chip_info, ((void*)0));
  if (FUNC_0(VAR_1->hwmon_dev)) {
   VAR_4 = FUNC_1(VAR_1->hwmon_dev);
   FUNC_2(VAR_1->dev,
    "Unable to register hwmon device: %d\n", VAR_4);
   return VAR_4;
  }

  FUNC_3(VAR_1->dev, "%s: add sensors information\n",
   FUNC_4(VAR_1->hwmon_dev));

  VAR_1->hwmon_initialized = 1;
 } else {
  FUNC_3(VAR_1->dev, "no available sensors\n");
 }

 return 0;
}
