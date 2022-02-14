
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hisi_sas_slot_dif_buf_table {int dummy; } ;
struct hisi_sas_slot_buf_table {int dummy; } ;
struct hisi_sas_slot {int buf_dma; int idx; void* buf; } ;
struct hisi_sas_sata_breakpoint {int dummy; } ;
struct hisi_sas_itct {int dummy; } ;
struct hisi_sas_iost {int dummy; } ;
struct hisi_sas_initial_fis {int dummy; } ;
struct hisi_sas_dq {int id; struct hisi_hba* hisi_hba; int list; int lock; } ;
struct hisi_sas_cq {int id; struct hisi_hba* hisi_hba; } ;
struct hisi_sas_cmd_hdr {int dummy; } ;
struct hisi_sas_breakpoint {int dummy; } ;
struct hisi_hba {int n_phy; int queue_count; int* cmd_hdr_dma; int* complete_hdr_dma; int itct_dma; int prot_mask; int iost_dma; int breakpoint_dma; int slot_index_count; int initial_fis_dma; int sata_breakpoint_dma; int wq; int last_slot_index; void* sata_breakpoint; void* initial_fis; int slot_index_tags; void* breakpoint; void* iost; struct hisi_sas_slot* slot_info; void* itct; void** complete_hdr; TYPE_3__* hw; void** cmd_hdr; struct hisi_sas_dq* dq; struct hisi_sas_cq* cq; TYPE_2__* devices; TYPE_1__* port; int lock; int sem; struct device* dev; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_6__ {int complete_hdr_size; } ;
struct TYPE_5__ {int device_id; int dev_status; int dev_type; } ;
struct TYPE_4__ {int id; scalar_t__ port_attached; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*) ;
 struct hisi_sas_slot* FUNC_4 (struct device*,int,int,int ) ;
 int FUNC_5 (struct device*,int,int ) ;
 void* FUNC_6 (struct device*,int,int*,int ) ;
 int FUNC_7 (struct hisi_hba*,int) ;
 int FUNC_8 (struct hisi_hba*) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *) ;

int FUNC_14(struct hisi_hba *VAR_13)
{
 struct device *VAR_14 = VAR_13->dev;
 int VAR_15, VAR_16, VAR_17, VAR_18 = VAR_5;
 int VAR_19, VAR_20;
 int VAR_21, VAR_22;

 FUNC_12(&VAR_13->sem, 1);
 FUNC_13(&VAR_13->lock);
 for (VAR_15 = 0; VAR_15 < VAR_13->n_phy; VAR_15++) {
  FUNC_7(VAR_13, VAR_15);
  VAR_13->port[VAR_15].port_attached = 0;
  VAR_13->port[VAR_15].id = -1;
 }

 for (VAR_15 = 0; VAR_15 < VAR_6; VAR_15++) {
  VAR_13->devices[VAR_15].dev_type = VAR_12;
  VAR_13->devices[VAR_15].device_id = VAR_15;
  VAR_13->devices[VAR_15].dev_status = VAR_3;
 }

 for (VAR_15 = 0; VAR_15 < VAR_13->queue_count; VAR_15++) {
  struct hisi_sas_cq *VAR_23 = &VAR_13->cq[VAR_15];
  struct hisi_sas_dq *VAR_24 = &VAR_13->dq[VAR_15];


  VAR_23->id = VAR_15;
  VAR_23->hisi_hba = VAR_13;


  FUNC_13(&VAR_24->lock);
  FUNC_0(&VAR_24->list);
  VAR_24->id = VAR_15;
  VAR_24->hisi_hba = VAR_13;


  VAR_17 = sizeof(struct hisi_sas_cmd_hdr) * VAR_9;
  VAR_13->cmd_hdr[VAR_15] = FUNC_6(VAR_14, VAR_17,
      &VAR_13->cmd_hdr_dma[VAR_15],
      VAR_2);
  if (!VAR_13->cmd_hdr[VAR_15])
   goto err_out;


  VAR_17 = VAR_13->hw->complete_hdr_size * VAR_9;
  VAR_13->complete_hdr[VAR_15] = FUNC_6(VAR_14, VAR_17,
      &VAR_13->complete_hdr_dma[VAR_15],
      VAR_2);
  if (!VAR_13->complete_hdr[VAR_15])
   goto err_out;
 }

 VAR_17 = VAR_7 * sizeof(struct hisi_sas_itct);
 VAR_13->itct = FUNC_6(VAR_14, VAR_17, &VAR_13->itct_dma,
          VAR_2);
 if (!VAR_13->itct)
  goto err_out;

 VAR_13->slot_info = FUNC_4(VAR_14, VAR_18,
        sizeof(struct hisi_sas_slot),
        VAR_2);
 if (!VAR_13->slot_info)
  goto err_out;


 VAR_19 = FUNC_11(VAR_18, 64);
 if (VAR_13->prot_mask & VAR_4)
  VAR_20 = sizeof(struct hisi_sas_slot_dif_buf_table);
 else
  VAR_20 = sizeof(struct hisi_sas_slot_buf_table);
 VAR_20 = FUNC_11(VAR_20, 64);
 VAR_17 = FUNC_10(FUNC_9(VAR_19, VAR_20), VAR_11);
 VAR_21 = (VAR_19 * VAR_20) / VAR_17;
 VAR_22 = VAR_17 / VAR_20;

 for (VAR_15 = 0; VAR_15 < VAR_21; VAR_15++) {
  int VAR_25 = VAR_15 * VAR_22;
  dma_addr_t VAR_26;
  void *VAR_27;

  VAR_27 = FUNC_6(VAR_14, VAR_17, &VAR_26,
       VAR_2);
  if (!VAR_27)
   goto err_out;

  for (VAR_16 = 0; VAR_16 < VAR_22; VAR_16++, VAR_25++) {
   struct hisi_sas_slot *VAR_28;

   VAR_28 = &VAR_13->slot_info[VAR_25];
   VAR_28->buf = VAR_27;
   VAR_28->buf_dma = VAR_26;
   VAR_28->idx = VAR_25;

   VAR_27 += VAR_20;
   VAR_26 += VAR_20;
  }
 }

 VAR_17 = VAR_18 * sizeof(struct hisi_sas_iost);
 VAR_13->iost = FUNC_6(VAR_14, VAR_17, &VAR_13->iost_dma,
          VAR_2);
 if (!VAR_13->iost)
  goto err_out;

 VAR_17 = VAR_18 * sizeof(struct hisi_sas_breakpoint);
 VAR_13->breakpoint = FUNC_6(VAR_14, VAR_17,
         &VAR_13->breakpoint_dma,
         VAR_2);
 if (!VAR_13->breakpoint)
  goto err_out;

 VAR_13->slot_index_count = VAR_18;
 VAR_17 = VAR_13->slot_index_count / VAR_0;
 VAR_13->slot_index_tags = FUNC_5(VAR_14, VAR_17, VAR_2);
 if (!VAR_13->slot_index_tags)
  goto err_out;

 VAR_17 = sizeof(struct hisi_sas_initial_fis) * VAR_8;
 VAR_13->initial_fis = FUNC_6(VAR_14, VAR_17,
          &VAR_13->initial_fis_dma,
          VAR_2);
 if (!VAR_13->initial_fis)
  goto err_out;

 VAR_17 = VAR_7 * sizeof(struct hisi_sas_sata_breakpoint);
 VAR_13->sata_breakpoint = FUNC_6(VAR_14, VAR_17,
     &VAR_13->sata_breakpoint_dma,
     VAR_2);
 if (!VAR_13->sata_breakpoint)
  goto err_out;

 FUNC_8(VAR_13);
 VAR_13->last_slot_index = VAR_10;

 VAR_13->wq = FUNC_1(FUNC_3(VAR_14));
 if (!VAR_13->wq) {
  FUNC_2(VAR_14, "sas_alloc: failed to create workqueue\n");
  goto err_out;
 }

 return 0;
err_out:
 return -VAR_1;
}
