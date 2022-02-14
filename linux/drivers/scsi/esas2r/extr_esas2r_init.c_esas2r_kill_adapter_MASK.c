
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct workqueue_struct {int dummy; } ;
struct esas2r_adapter {TYPE_2__* host; int flags; int flags2; TYPE_4__* pcid; int * uncached; scalar_t__ uncached_phys; scalar_t__ uncached_size; int fw_event_lock; struct workqueue_struct* fw_event_q; int * local_atto_ioctl; int * fs_api_buffer; scalar_t__ ppfs_api_buffer; scalar_t__ fs_api_buffer_size; int * vda_buffer; scalar_t__ ppvda_buffer; } ;
typedef int dma_addr_t ;
struct TYPE_7__ {int counter; } ;
struct TYPE_9__ {int dev; TYPE_1__ enable_cnt; int pin; int irq; int msi_enabled; int msix_enabled; } ;
struct TYPE_8__ {int shost_gendev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct workqueue_struct*) ;
 int FUNC_2 (int *,size_t,int *,int ) ;
 int FUNC_3 (struct esas2r_adapter*,int ) ;
 struct esas2r_adapter** VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 TYPE_4__* VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (struct esas2r_adapter*) ;
 int FUNC_6 (int ,int *,char*,...) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*,int *) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *,unsigned long) ;
 scalar_t__ FUNC_15 (int ,int *) ;

void FUNC_16(int VAR_9)
{
 struct esas2r_adapter *VAR_10 = VAR_4[VAR_9];

 if (VAR_10) {
  unsigned long VAR_11;
  struct workqueue_struct *VAR_12;
  FUNC_4("killing adapter %p [%d] ", VAR_10, VAR_9);
  FUNC_5(VAR_10);
  FUNC_3(VAR_10, 0);
  if (VAR_5 &&
      (VAR_10->pcid == VAR_7)) {
   FUNC_2(&VAR_10->pcid->dev,
       (size_t)VAR_8,
       VAR_5,
       VAR_6);
   VAR_5 = ((void*)0);
  }

  if (VAR_10->vda_buffer) {
   FUNC_2(&VAR_10->pcid->dev,
       (size_t)VAR_3,
       VAR_10->vda_buffer,
       (dma_addr_t)VAR_10->ppvda_buffer);
   VAR_10->vda_buffer = ((void*)0);
  }
  if (VAR_10->fs_api_buffer) {
   FUNC_2(&VAR_10->pcid->dev,
       (size_t)VAR_10->fs_api_buffer_size,
       VAR_10->fs_api_buffer,
       (dma_addr_t)VAR_10->ppfs_api_buffer);
   VAR_10->fs_api_buffer = ((void*)0);
  }

  FUNC_7(VAR_10->local_atto_ioctl);
  VAR_10->local_atto_ioctl = ((void*)0);

  FUNC_13(&VAR_10->fw_event_lock, VAR_11);
  VAR_12 = VAR_10->fw_event_q;
  VAR_10->fw_event_q = ((void*)0);
  FUNC_14(&VAR_10->fw_event_lock, VAR_11);
  if (VAR_12)
   FUNC_1(VAR_12);

  if (VAR_10->uncached) {
   FUNC_2(&VAR_10->pcid->dev,
       (size_t)VAR_10->uncached_size,
       VAR_10->uncached,
       (dma_addr_t)VAR_10->uncached_phys);
   VAR_10->uncached = ((void*)0);
   FUNC_4("uncached area freed");
  }

  FUNC_6(VAR_2,
          &(VAR_10->pcid->dev),
          "pci_disable_device() called.  msix_enabled: %d "
          "msi_enabled: %d irq: %d pin: %d",
          VAR_10->pcid->msix_enabled,
          VAR_10->pcid->msi_enabled,
          VAR_10->pcid->irq,
          VAR_10->pcid->pin);

  FUNC_6(VAR_2,
          &(VAR_10->pcid->dev),
          "before pci_disable_device() enable_cnt: %d",
          VAR_10->pcid->enable_cnt.counter);

  FUNC_8(VAR_10->pcid);
  FUNC_6(VAR_2,
          &(VAR_10->pcid->dev),
          "after pci_disable_device() enable_cnt: %d",
          VAR_10->pcid->enable_cnt.counter);

  FUNC_6(VAR_2,
          &(VAR_10->pcid->dev),
          "pci_set_drv_data(%p, NULL) called",
          VAR_10->pcid);

  FUNC_9(VAR_10->pcid, ((void*)0));
  VAR_4[VAR_9] = ((void*)0);

  if (FUNC_15(VAR_0, &VAR_10->flags2)) {
   FUNC_0(VAR_0, &VAR_10->flags2);

   FUNC_12(VAR_1, &VAR_10->flags);

   FUNC_6(VAR_2,
           &(VAR_10->host->shost_gendev),
           "scsi_remove_host() called");

   FUNC_11(VAR_10->host);

   FUNC_6(VAR_2,
           &(VAR_10->host->shost_gendev),
           "scsi_host_put() called");

   FUNC_10(VAR_10->host);
  }
 }
}
