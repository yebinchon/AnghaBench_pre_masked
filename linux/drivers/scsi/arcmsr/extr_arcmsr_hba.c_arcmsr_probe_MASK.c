
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct pci_device_id {int driver_data; } ;
struct pci_dev {int devfn; int dev; TYPE_1__* bus; } ;
struct Scsi_Host {int max_cmd_len; int unique_id; int this_id; scalar_t__ cmd_per_lun; scalar_t__ can_queue; int max_id; int max_lun; scalar_t__ hostdata; } ;
struct AdapterControlBlock {int acb_flags; int arcmsr_do_message_isr_bh; int eternal_timer; int refresh_timer; int ccb_free_list; int wqbuffer_lock; int rqbuffer_lock; int doneq_lock; int postq_lock; int ccblist_lock; int eh_lock; struct Scsi_Host* host; int adapter_type; struct pci_dev* pdev; } ;
struct TYPE_2__ {int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct AdapterControlBlock*) ;
 int FUNC_2 (struct AdapterControlBlock*) ;
 scalar_t__ FUNC_3 (struct AdapterControlBlock*) ;
 int FUNC_4 (struct AdapterControlBlock*) ;
 int FUNC_5 (struct AdapterControlBlock*) ;
 int FUNC_6 (struct AdapterControlBlock*) ;
 int FUNC_7 (struct pci_dev*,struct AdapterControlBlock*) ;
 int FUNC_8 (struct AdapterControlBlock*) ;
 int FUNC_9 (struct AdapterControlBlock*) ;
 int FUNC_10 (struct AdapterControlBlock*) ;
 int FUNC_11 (struct AdapterControlBlock*) ;
 int FUNC_12 (struct AdapterControlBlock*) ;
 scalar_t__ FUNC_13 (struct pci_dev*,struct AdapterControlBlock*) ;
 int VAR_15 ;
 scalar_t__ FUNC_14 (struct AdapterControlBlock*) ;
 int FUNC_15 (struct AdapterControlBlock*) ;
 int FUNC_16 (struct AdapterControlBlock*) ;
 scalar_t__ VAR_16 ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 scalar_t__ VAR_17 ;
 int FUNC_19 (int *) ;
 int FUNC_20 (struct AdapterControlBlock*,int ,int) ;
 int FUNC_21 (struct pci_dev*) ;
 int FUNC_22 (struct pci_dev*) ;
 int FUNC_23 (struct pci_dev*) ;
 int FUNC_24 (struct pci_dev*,char*) ;
 int FUNC_25 (struct pci_dev*,struct Scsi_Host*) ;
 int FUNC_26 (struct pci_dev*) ;
 int FUNC_27 (struct Scsi_Host*,int *) ;
 struct Scsi_Host* FUNC_28 (int *,int) ;
 int FUNC_29 (struct Scsi_Host*) ;
 int FUNC_30 (struct Scsi_Host*) ;
 int FUNC_31 (struct Scsi_Host*) ;
 scalar_t__ VAR_18 ;
 int FUNC_32 (int *) ;
 int VAR_19 ;

__attribute__((used)) static int FUNC_33(struct pci_dev *VAR_20, const struct pci_device_id *VAR_21)
{
 struct Scsi_Host *VAR_22;
 struct AdapterControlBlock *VAR_23;
 uint8_t VAR_24,VAR_25;
 int VAR_26;
 VAR_26 = FUNC_22(VAR_20);
 if(VAR_26){
  return -VAR_13;
 }
 VAR_22 = FUNC_28(&VAR_15, sizeof(struct AdapterControlBlock));
 if(!VAR_22){
      goto pci_disable_dev;
 }
 FUNC_19(&VAR_19);
 VAR_24 = VAR_20->bus->number;
 VAR_25 = VAR_20->devfn;
 VAR_23 = (struct AdapterControlBlock *) VAR_22->hostdata;
 FUNC_20(VAR_23,0,sizeof(struct AdapterControlBlock));
 VAR_23->pdev = VAR_20;
 VAR_23->adapter_type = VAR_21->driver_data;
 if (FUNC_14(VAR_23))
  goto scsi_host_release;
 VAR_23->host = VAR_22;
 VAR_22->max_lun = VAR_9;
 VAR_22->max_id = VAR_8;
 VAR_22->max_cmd_len = 16;
 if ((VAR_17 < VAR_11) || (VAR_17 > VAR_7))
  VAR_17 = VAR_5;
 VAR_22->can_queue = VAR_17;
 if ((VAR_16 < VAR_10) || (VAR_16 > VAR_6))
  VAR_16 = VAR_4;
 VAR_22->cmd_per_lun = VAR_16;
 VAR_22->this_id = VAR_12;
 VAR_22->unique_id = (VAR_24 << 8) | VAR_25;
 FUNC_25(VAR_20, VAR_22);
 FUNC_26(VAR_20);
 VAR_26 = FUNC_24(VAR_20, "arcmsr");
 if(VAR_26){
  goto scsi_host_release;
 }
 FUNC_32(&VAR_23->eh_lock);
 FUNC_32(&VAR_23->ccblist_lock);
 FUNC_32(&VAR_23->postq_lock);
 FUNC_32(&VAR_23->doneq_lock);
 FUNC_32(&VAR_23->rqbuffer_lock);
 FUNC_32(&VAR_23->wqbuffer_lock);
 VAR_23->acb_flags |= (VAR_1 |
   VAR_0 |
   VAR_2);
 VAR_23->acb_flags &= ~VAR_3;
 FUNC_0(&VAR_23->ccb_free_list);
 VAR_26 = FUNC_12(VAR_23);
 if(!VAR_26){
  goto pci_release_regs;
 }
 VAR_26 = FUNC_2(VAR_23);
 if (!VAR_26)
  goto unmap_pci_region;
 VAR_26 = FUNC_8(VAR_23);
 if(!VAR_26){
  goto free_hbb_mu;
 }
 FUNC_6(VAR_23);
 VAR_26 = FUNC_1(VAR_23);
 if(VAR_26){
  goto unmap_pci_region;
 }
 VAR_26 = FUNC_27(VAR_22, &VAR_20->dev);
 if(VAR_26){
  goto free_ccb_pool;
 }
 if (FUNC_13(VAR_20, VAR_23) == VAR_14)
  goto scsi_host_remove;
 FUNC_11(VAR_23);
 FUNC_9(VAR_23);
 if (VAR_18)
  FUNC_10(VAR_23);
 if(FUNC_3(VAR_23))
  goto out_free_sysfs;
 FUNC_31(VAR_22);
 return 0;
out_free_sysfs:
 if (VAR_18)
  FUNC_17(&VAR_23->refresh_timer);
 FUNC_17(&VAR_23->eternal_timer);
 FUNC_18(&VAR_23->arcmsr_do_message_isr_bh);
 FUNC_15(VAR_23);
 FUNC_4(VAR_23);
 FUNC_7(VAR_20, VAR_23);
scsi_host_remove:
 FUNC_30(VAR_22);
free_ccb_pool:
 FUNC_5(VAR_23);
 goto unmap_pci_region;
free_hbb_mu:
 FUNC_6(VAR_23);
unmap_pci_region:
 FUNC_16(VAR_23);
pci_release_regs:
 FUNC_23(VAR_20);
scsi_host_release:
 FUNC_29(VAR_22);
pci_disable_dev:
 FUNC_21(VAR_20);
 return -VAR_13;
}
