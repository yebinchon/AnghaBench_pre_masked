
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct iscsi_stats_info {int dummy; } ;
struct cnic_dev {TYPE_1__* pcidev; int netdev; } ;
struct bnx2i_hba {int max_sqes; scalar_t__ max_cqes; int num_ccell; int hba_shutdown_tmo; int conn_teardown_tmo; int conn_ctx_destroy_tmo; TYPE_1__* pcidev; int * regview; int stats; int stat_lock; int cnic_dev_type; int eh_wait; int net_dev_lock; int lock; void* max_rqes; void* max_active_conns; int mtu_supported; int ep_rdwr_lock; int ep_destroy_list; int ep_active_list; int ep_ofld_list; int reg_base; int pci_devno; int pci_func; int pci_svid; int pci_sdid; int pci_vid; int pci_did; int netdev; struct Scsi_Host* shost; } ;
struct Scsi_Host {int max_lun; int max_cmd_len; scalar_t__ max_channel; void* max_id; int transportt; int dma_boundary; } ;
struct TYPE_6__ {int dev; int devfn; int subsystem_vendor; int subsystem_device; int vendor; int device; int dma_mask; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *) ;
 void* VAR_11 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct bnx2i_hba*) ;
 int VAR_12 ;
 int FUNC_4 (struct bnx2i_hba*,struct cnic_dev*) ;
 int FUNC_5 (struct bnx2i_hba*) ;
 int VAR_13 ;
 scalar_t__ FUNC_6 (struct bnx2i_hba*) ;
 int FUNC_7 (struct bnx2i_hba*,struct Scsi_Host*) ;
 scalar_t__ FUNC_8 (struct bnx2i_hba*) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (struct Scsi_Host*,int *) ;
 struct Scsi_Host* FUNC_11 (int *,int,int ) ;
 struct bnx2i_hba* FUNC_12 (struct Scsi_Host*) ;
 int FUNC_13 (int *,int ,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;
 void* FUNC_17 (TYPE_1__*,int ,int) ;
 int FUNC_18 (TYPE_1__*,int *) ;
 int FUNC_19 (TYPE_1__*,int ) ;
 void* VAR_14 ;
 int FUNC_20 (int *) ;
 int FUNC_21 (struct Scsi_Host*) ;
 int FUNC_22 (int *) ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_23 (int ,int *) ;

struct bnx2i_hba *FUNC_24(struct cnic_dev *VAR_16)
{
 struct Scsi_Host *VAR_17;
 struct bnx2i_hba *VAR_18;

 VAR_17 = FUNC_11(&VAR_12, sizeof(*VAR_18), 0);
 if (!VAR_17)
  return ((void*)0);
 VAR_17->dma_boundary = VAR_16->pcidev->dma_mask;
 VAR_17->transportt = VAR_13;
 VAR_17->max_id = VAR_11;
 VAR_17->max_channel = 0;
 VAR_17->max_lun = 512;
 VAR_17->max_cmd_len = 16;

 VAR_18 = FUNC_12(VAR_17);
 VAR_18->shost = VAR_17;
 VAR_18->netdev = VAR_16->netdev;

 VAR_18->pcidev = VAR_16->pcidev;
 FUNC_15(VAR_18->pcidev);
 VAR_18->pci_did = VAR_18->pcidev->device;
 VAR_18->pci_vid = VAR_18->pcidev->vendor;
 VAR_18->pci_sdid = VAR_18->pcidev->subsystem_device;
 VAR_18->pci_svid = VAR_18->pcidev->subsystem_vendor;
 VAR_18->pci_func = FUNC_1(VAR_18->pcidev->devfn);
 VAR_18->pci_devno = FUNC_2(VAR_18->pcidev->devfn);

 FUNC_4(VAR_18, VAR_16);
 FUNC_7(VAR_18, VAR_17);

 VAR_18->reg_base = FUNC_19(VAR_18->pcidev, 0);
 if (FUNC_23(VAR_7, &VAR_18->cnic_dev_type)) {
  VAR_18->regview = FUNC_17(VAR_18->pcidev, 0, VAR_9);
  if (!VAR_18->regview)
   goto ioreg_map_err;
 } else if (FUNC_23(VAR_8, &VAR_18->cnic_dev_type)) {
  VAR_18->regview = FUNC_17(VAR_18->pcidev, 0, 4096);
  if (!VAR_18->regview)
   goto ioreg_map_err;
 }

 if (FUNC_8(VAR_18))
  goto mp_bdt_mem_err;

 FUNC_0(&VAR_18->ep_ofld_list);
 FUNC_0(&VAR_18->ep_active_list);
 FUNC_0(&VAR_18->ep_destroy_list);
 FUNC_20(&VAR_18->ep_rdwr_lock);

 VAR_18->mtu_supported = VAR_6;


 VAR_18->max_active_conns = VAR_11;

 if (FUNC_6(VAR_18))
  goto cid_que_err;


 if (FUNC_23(VAR_8, &VAR_18->cnic_dev_type)) {
  if (VAR_15 && VAR_15 <= VAR_5)
   VAR_18->max_sqes = VAR_15;
  else
   VAR_18->max_sqes = VAR_4;
 } else {
  if (VAR_15 && VAR_15 <= VAR_2)
   VAR_18->max_sqes = VAR_15;
  else
   VAR_18->max_sqes = VAR_1;
 }

 VAR_18->max_rqes = VAR_14;
 VAR_18->max_cqes = VAR_18->max_sqes + VAR_14;
 if (FUNC_23(VAR_8, &VAR_18->cnic_dev_type)) {
  if (VAR_18->max_cqes > VAR_3)
   VAR_18->max_cqes = VAR_3;
 } else if (VAR_18->max_cqes > VAR_0)
  VAR_18->max_cqes = VAR_0;

 VAR_18->num_ccell = VAR_18->max_sqes / 2;

 FUNC_22(&VAR_18->lock);
 FUNC_14(&VAR_18->net_dev_lock);
 FUNC_9(&VAR_18->eh_wait);
 if (FUNC_23(VAR_8, &VAR_18->cnic_dev_type)) {
  VAR_18->hba_shutdown_tmo = 30 * VAR_10;
  VAR_18->conn_teardown_tmo = 20 * VAR_10;
  VAR_18->conn_ctx_destroy_tmo = 6 * VAR_10;
 } else {
  VAR_18->hba_shutdown_tmo = 20 * VAR_10;
  VAR_18->conn_teardown_tmo = 10 * VAR_10;
  VAR_18->conn_ctx_destroy_tmo = 2 * VAR_10;
 }




 FUNC_13(&VAR_18->stats, 0, sizeof(struct iscsi_stats_info));

 if (FUNC_10(VAR_17, &VAR_18->pcidev->dev))
  goto free_dump_mem;
 return VAR_18;

free_dump_mem:
 FUNC_5(VAR_18);
cid_que_err:
 FUNC_3(VAR_18);
mp_bdt_mem_err:
 if (VAR_18->regview) {
  FUNC_18(VAR_18->pcidev, VAR_18->regview);
  VAR_18->regview = ((void*)0);
 }
ioreg_map_err:
 FUNC_16(VAR_18->pcidev);
 FUNC_21(VAR_17);
 return ((void*)0);
}
