
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct hinic_hwdev {int aeqs; int msix_entries; struct hinic_hwif* hwif; } ;
struct hinic_pfhwdev {struct hinic_hwdev hwdev; } ;
struct hinic_hwif {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hinic_hwdev* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct hinic_hwif*) ;
 int FUNC_2 (struct hinic_hwif*) ;
 int FUNC_3 (struct hinic_hwif*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*) ;
 void* FUNC_6 (int *,int,int ) ;
 int FUNC_7 (struct hinic_hwdev*) ;
 int FUNC_8 (struct hinic_pfhwdev*) ;
 int FUNC_9 (struct hinic_hwdev*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,struct hinic_hwif*,int,int ,int ,int ) ;
 int FUNC_12 (struct hinic_hwif*) ;
 int FUNC_13 (struct hinic_hwif*,struct pci_dev*) ;
 int FUNC_14 (struct hinic_hwif*,int ) ;
 int FUNC_15 (struct hinic_hwdev*) ;
 int FUNC_16 (struct hinic_hwdev*) ;
 int FUNC_17 (struct hinic_pfhwdev*) ;
 int FUNC_18 (struct hinic_hwdev*,int ) ;
 int FUNC_19 (struct hinic_hwdev*) ;

struct hinic_hwdev *FUNC_20(struct pci_dev *VAR_7)
{
 struct hinic_pfhwdev *VAR_8;
 struct hinic_hwdev *VAR_9;
 struct hinic_hwif *VAR_10;
 int VAR_11, VAR_12;

 VAR_10 = FUNC_6(&VAR_7->dev, sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return FUNC_0(-VAR_1);

 VAR_11 = FUNC_13(VAR_10, VAR_7);
 if (VAR_11) {
  FUNC_4(&VAR_7->dev, "Failed to init HW interface\n");
  return FUNC_0(VAR_11);
 }

 if (!FUNC_2(VAR_10) && !FUNC_3(VAR_10)) {
  FUNC_4(&VAR_7->dev, "Unsupported PCI Function type\n");
  VAR_11 = -VAR_0;
  goto err_func_type;
 }

 VAR_8 = FUNC_6(&VAR_7->dev, sizeof(*VAR_8), VAR_2);
 if (!VAR_8) {
  VAR_11 = -VAR_1;
  goto err_pfhwdev_alloc;
 }

 VAR_9 = &VAR_8->hwdev;
 VAR_9->hwif = VAR_10;

 VAR_11 = FUNC_16(VAR_9);
 if (VAR_11) {
  FUNC_4(&VAR_7->dev, "Failed to init msix\n");
  goto err_init_msix;
 }

 VAR_11 = FUNC_19(VAR_9);
 if (VAR_11) {
  FUNC_5(&VAR_7->dev, "outbound - disabled, try again\n");
  FUNC_14(VAR_10, VAR_5);
 }

 VAR_12 = FUNC_1(VAR_10);

 VAR_11 = FUNC_11(&VAR_9->aeqs, VAR_10, VAR_12,
         VAR_3, VAR_4,
         VAR_9->msix_entries);
 if (VAR_11) {
  FUNC_4(&VAR_7->dev, "Failed to init async event queues\n");
  goto err_aeqs_init;
 }

 VAR_11 = FUNC_17(VAR_8);
 if (VAR_11) {
  FUNC_4(&VAR_7->dev, "Failed to init PF HW device\n");
  goto err_init_pfhwdev;
 }

 VAR_11 = FUNC_9(VAR_9);
 if (VAR_11) {
  FUNC_4(&VAR_7->dev, "Failed to get device capabilities\n");
  goto err_dev_cap;
 }

 VAR_11 = FUNC_15(VAR_9);
 if (VAR_11) {
  FUNC_4(&VAR_7->dev, "Failed to init function table\n");
  goto err_init_fw_ctxt;
 }

 VAR_11 = FUNC_18(VAR_9, VAR_6);
 if (VAR_11) {
  FUNC_4(&VAR_7->dev, "Failed to set resources state\n");
  goto err_resources_state;
 }

 return VAR_9;

err_resources_state:
err_init_fw_ctxt:
err_dev_cap:
 FUNC_8(VAR_8);

err_init_pfhwdev:
 FUNC_10(&VAR_9->aeqs);

err_aeqs_init:
 FUNC_7(VAR_9);

err_init_msix:
err_pfhwdev_alloc:
err_func_type:
 FUNC_12(VAR_10);
 return FUNC_0(VAR_11);
}
