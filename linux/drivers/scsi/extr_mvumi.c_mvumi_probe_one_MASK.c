
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_device_id {int dummy; } ;
struct pci_dev {int devfn; int irq; int dev; TYPE_1__* bus; int subsystem_device; int subsystem_vendor; int device; int vendor; } ;
struct mvumi_hba {int unique_id; struct pci_dev* pdev; TYPE_2__* instancet; struct Scsi_Host* shost; int sas_discovery_mutex; int int_cmd_wait_q; int fw_outstanding; int shost_dev_list; int mhba_dev_list; int device_lock; int waiting_req_list; int res_list; int free_ob_list; int ob_data_list; int cmd_pool; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_4__ {int (* disable_intr ) (struct mvumi_hba*) ;int (* enable_intr ) (struct mvumi_hba*) ;} ;
struct TYPE_3__ {int number; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int ,struct mvumi_hba*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct mvumi_hba*) ;
 int FUNC_8 (struct mvumi_hba*) ;
 int FUNC_9 (struct mvumi_hba*) ;
 int VAR_2 ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct mvumi_hba*) ;
 int VAR_3 ;
 int FUNC_12 (struct pci_dev*) ;
 int FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (struct pci_dev*,struct mvumi_hba*) ;
 int FUNC_15 (int ,int ,int ,char*,struct mvumi_hba*) ;
 struct Scsi_Host* FUNC_16 (int *,int) ;
 int FUNC_17 (struct Scsi_Host*) ;
 struct mvumi_hba* FUNC_18 (struct Scsi_Host*) ;
 int FUNC_19 (struct mvumi_hba*) ;
 int FUNC_20 (struct mvumi_hba*) ;

__attribute__((used)) static int FUNC_21(struct pci_dev *VAR_4, const struct pci_device_id *VAR_5)
{
 struct Scsi_Host *VAR_6;
 struct mvumi_hba *VAR_7;
 int VAR_8;

 FUNC_2(&VAR_4->dev, " %#4.04x:%#4.04x:%#4.04x:%#4.04x: ",
   VAR_4->vendor, VAR_4->device, VAR_4->subsystem_vendor,
   VAR_4->subsystem_device);

 VAR_8 = FUNC_13(VAR_4);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_10(VAR_4);
 if (VAR_8)
  goto fail_set_dma_mask;

 VAR_6 = FUNC_16(&VAR_3, sizeof(*VAR_7));
 if (!VAR_6) {
  FUNC_3(&VAR_4->dev, "scsi_host_alloc failed\n");
  VAR_8 = -VAR_0;
  goto fail_alloc_instance;
 }
 VAR_7 = FUNC_18(VAR_6);

 FUNC_0(&VAR_7->cmd_pool);
 FUNC_0(&VAR_7->ob_data_list);
 FUNC_0(&VAR_7->free_ob_list);
 FUNC_0(&VAR_7->res_list);
 FUNC_0(&VAR_7->waiting_req_list);
 FUNC_6(&VAR_7->device_lock);
 FUNC_0(&VAR_7->mhba_dev_list);
 FUNC_0(&VAR_7->shost_dev_list);
 FUNC_1(&VAR_7->fw_outstanding, 0);
 FUNC_5(&VAR_7->int_cmd_wait_q);
 FUNC_6(&VAR_7->sas_discovery_mutex);

 VAR_7->pdev = VAR_4;
 VAR_7->shost = VAR_6;
 VAR_7->unique_id = VAR_4->bus->number << 8 | VAR_4->devfn;

 VAR_8 = FUNC_8(VAR_7);
 if (VAR_8)
  goto fail_init_fw;

 VAR_8 = FUNC_15(VAR_7->pdev->irq, VAR_2, VAR_1,
    "mvumi", VAR_7);
 if (VAR_8) {
  FUNC_3(&VAR_4->dev, "failed to register IRQ\n");
  goto fail_init_irq;
 }

 VAR_7->instancet->enable_intr(VAR_7);
 FUNC_14(VAR_4, VAR_7);

 VAR_8 = FUNC_9(VAR_7);
 if (VAR_8)
  goto fail_io_attach;

 FUNC_7(VAR_7);
 FUNC_2(&VAR_4->dev, "probe mvumi driver successfully.\n");

 return 0;

fail_io_attach:
 VAR_7->instancet->disable_intr(VAR_7);
 FUNC_4(VAR_7->pdev->irq, VAR_7);
fail_init_irq:
 FUNC_11(VAR_7);
fail_init_fw:
 FUNC_17(VAR_6);

fail_alloc_instance:
fail_set_dma_mask:
 FUNC_12(VAR_4);

 return VAR_8;
}
