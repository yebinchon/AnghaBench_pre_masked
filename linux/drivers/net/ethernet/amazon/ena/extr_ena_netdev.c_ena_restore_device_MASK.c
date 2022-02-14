
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct ena_com_dev_get_features_ctx {int dummy; } ;
struct ena_com_dev {int dummy; } ;
struct ena_adapter {int wd_state; int flags; int timer_service; int netdev; scalar_t__ dev_up_before_reset; int num_queues; struct pci_dev* pdev; struct ena_com_dev* ena_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (struct ena_com_dev*) ;
 int FUNC_3 (struct ena_com_dev*) ;
 int FUNC_4 (struct ena_com_dev*,int ) ;
 int FUNC_5 (struct ena_com_dev*) ;
 int FUNC_6 (struct ena_com_dev*) ;
 int FUNC_7 (struct ena_com_dev*,struct pci_dev*,struct ena_com_dev_get_features_ctx*,int*) ;
 int FUNC_8 (struct ena_adapter*,struct ena_com_dev_get_features_ctx*) ;
 int FUNC_9 (struct ena_adapter*) ;
 int FUNC_10 (struct ena_adapter*,int ) ;
 int FUNC_11 (struct ena_adapter*) ;
 int FUNC_12 (struct ena_adapter*) ;
 scalar_t__ VAR_5 ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (int ,int *) ;
 scalar_t__ FUNC_17 (int ,int *) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_18(struct ena_adapter *VAR_7)
{
 struct ena_com_dev_get_features_ctx VAR_8;
 struct ena_com_dev *VAR_9 = VAR_7->ena_dev;
 struct pci_dev *VAR_10 = VAR_7->pdev;
 bool VAR_11;
 int VAR_12;

 FUNC_16(VAR_2, &VAR_7->flags);
 VAR_12 = FUNC_7(VAR_9, VAR_7->pdev, &VAR_8, &VAR_11);
 if (VAR_12) {
  FUNC_1(&VAR_10->dev, "Can not initialize device\n");
  goto err;
 }
 VAR_7->wd_state = VAR_11;

 VAR_12 = FUNC_8(VAR_7, &VAR_8);
 if (VAR_12) {
  FUNC_1(&VAR_10->dev, "Validation of device parameters failed\n");
  goto err_device_destroy;
 }

 VAR_12 = FUNC_10(VAR_7,
            VAR_7->num_queues);
 if (VAR_12) {
  FUNC_1(&VAR_10->dev, "Enable MSI-X failed\n");
  goto err_device_destroy;
 }

 if (VAR_7->dev_up_before_reset) {
  VAR_12 = FUNC_12(VAR_7);
  if (VAR_12) {
   FUNC_1(&VAR_10->dev, "Failed to create I/O queues\n");
   goto err_disable_msix;
  }
 }

 FUNC_16(VAR_0, &VAR_7->flags);

 FUNC_0(VAR_2, &VAR_7->flags);
 if (FUNC_17(VAR_1, &VAR_7->flags))
  FUNC_14(VAR_7->netdev);

 FUNC_13(&VAR_7->timer_service, FUNC_15(VAR_5 + VAR_4));
 FUNC_1(&VAR_10->dev,
  "Device reset completed successfully, Driver info: %s\n",
  VAR_6);

 return VAR_12;
err_disable_msix:
 FUNC_11(VAR_7);
 FUNC_9(VAR_7);
err_device_destroy:
 FUNC_2(VAR_9);
 FUNC_6(VAR_9);
 FUNC_3(VAR_9);
 FUNC_4(VAR_9, VAR_3);
 FUNC_5(VAR_9);
err:
 FUNC_0(VAR_0, &VAR_7->flags);
 FUNC_0(VAR_2, &VAR_7->flags);
 FUNC_1(&VAR_10->dev,
  "Reset attempt failed. Can not reset the device\n");

 return VAR_12;
}
