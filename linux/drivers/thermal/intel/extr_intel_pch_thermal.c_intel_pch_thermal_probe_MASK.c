
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_device_id {int driver_data; } ;
struct pci_dev {int dev; } ;
struct pch_thermal_device {int hw_base; int tzd; TYPE_1__* ops; struct pci_dev* pdev; } ;
struct board_info {int name; TYPE_1__* ops; } ;
typedef enum board_ids { ____Placeholder_board_ids } board_ids ;
struct TYPE_2__ {int (* hw_init ) (struct pch_thermal_device*,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct board_info* VAR_2 ;
 int FUNC_2 (int *,char*,...) ;
 struct pch_thermal_device* FUNC_3 (int *,int,int ) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*,int ) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*,int ) ;
 int FUNC_10 (struct pci_dev*,struct pch_thermal_device*) ;
 int FUNC_11 (struct pch_thermal_device*,int*) ;
 int FUNC_12 (int ,int,int ,struct pch_thermal_device*,int *,int *,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_13(struct pci_dev *VAR_5,
       const struct pci_device_id *VAR_6)
{
 enum board_ids VAR_7 = VAR_6->driver_data;
 const struct board_info *VAR_8 = &VAR_2[VAR_7];
 struct pch_thermal_device *VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_9 = FUNC_3(&VAR_5->dev, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->ops = VAR_8->ops;

 FUNC_10(VAR_5, VAR_9);
 VAR_9->pdev = VAR_5;

 VAR_10 = FUNC_6(VAR_5);
 if (VAR_10) {
  FUNC_2(&VAR_5->dev, "failed to enable pci device\n");
  return VAR_10;
 }

 VAR_10 = FUNC_9(VAR_5, VAR_3);
 if (VAR_10) {
  FUNC_2(&VAR_5->dev, "failed to request pci region\n");
  goto error_disable;
 }

 VAR_9->hw_base = FUNC_7(VAR_5, 0);
 if (!VAR_9->hw_base) {
  VAR_10 = -VAR_0;
  FUNC_2(&VAR_5->dev, "failed to map mem base\n");
  goto error_release;
 }

 VAR_10 = VAR_9->ops->hw_init(VAR_9, &VAR_11);
 if (VAR_10)
  goto error_cleanup;

 VAR_9->tzd = FUNC_12(VAR_8->name, VAR_11, 0, VAR_9,
      &VAR_4, ((void*)0), 0, 0);
 if (FUNC_0(VAR_9->tzd)) {
  FUNC_2(&VAR_5->dev, "Failed to register thermal zone %s\n",
   VAR_8->name);
  VAR_10 = FUNC_1(VAR_9->tzd);
  goto error_cleanup;
 }

 return 0;

error_cleanup:
 FUNC_4(VAR_9->hw_base);
error_release:
 FUNC_8(VAR_5);
error_disable:
 FUNC_5(VAR_5);
 FUNC_2(&VAR_5->dev, "pci device failed to probe\n");
 return VAR_10;
}
