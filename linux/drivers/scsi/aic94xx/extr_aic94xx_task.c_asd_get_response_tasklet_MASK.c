
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct task_status_struct {int buf_valid_size; void* residual; int * buf; } ;
struct ssp_response_iu {int dummy; } ;
struct ssp_frame_hdr {int dummy; } ;
struct sas_task {scalar_t__ task_proto; struct task_status_struct task_status; } ;
struct done_list_struct {scalar_t__ status_block; } ;
struct ata_task_resp {int * ending_fis; scalar_t__ frame_len; } ;
struct TYPE_4__ {struct asd_dma_tok** edb_arr; int tc_index_lock; } ;
struct asd_ha_struct {TYPE_1__* pcidev; TYPE_2__ seq; } ;
struct asd_dma_tok {void* vaddr; } ;
struct asd_ascb {int edb_index; struct sas_task* uldd_task; struct asd_ha_struct* ha; } ;
typedef int __le32 ;
typedef int __le16 ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct asd_ascb*,int) ;
 struct asd_ascb* FUNC_2 (TYPE_2__*,int) ;
 scalar_t__ FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int *,void*,int ) ;
 int FUNC_6 (int *,struct sas_task*,struct ssp_response_iu*) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;

__attribute__((used)) static void FUNC_9(struct asd_ascb *VAR_3,
         struct done_list_struct *VAR_4)
{
 struct asd_ha_struct *VAR_5 = VAR_3->ha;
 struct sas_task *VAR_6 = VAR_3->uldd_task;
 struct task_status_struct *VAR_7 = &VAR_6->task_status;
 unsigned long VAR_8;
 struct tc_resp_sb_struct {
  __le16 index_escb;
  u8 len_lsb;
  u8 flags;
 } __attribute__ ((packed)) *VAR_9 = (void *) VAR_4->status_block;


 int VAR_10 = ((VAR_9->flags & 0x70) >> 4)-1;
 struct asd_ascb *VAR_11;
 struct asd_dma_tok *VAR_12;
 void *VAR_13;

 FUNC_7(&VAR_5->seq.tc_index_lock, VAR_8);
 VAR_11 = FUNC_2(&VAR_5->seq,
     (int)FUNC_3(VAR_9->index_escb));
 FUNC_8(&VAR_5->seq.tc_index_lock, VAR_8);

 if (!VAR_11) {
  FUNC_0("Uh-oh! No escb for this dl?!\n");
  return;
 }

 VAR_7->buf_valid_size = 0;
 VAR_12 = VAR_5->seq.edb_arr[VAR_10 + VAR_11->edb_index];
 VAR_13 = VAR_12->vaddr;
 if (VAR_6->task_proto == VAR_1) {
  struct ssp_response_iu *VAR_14 =
   VAR_13 + 16 + sizeof(struct ssp_frame_hdr);

  VAR_7->residual = FUNC_4(*(__le32 *)VAR_13);

  FUNC_6(&VAR_5->pcidev->dev, VAR_6, VAR_14);
 } else {
  struct ata_task_resp *VAR_15 = (void *) &VAR_7->buf[0];

  VAR_7->residual = FUNC_4(*(__le32 *)VAR_13);

  if (VAR_2 >= sizeof(*VAR_15)) {
   VAR_15->frame_len = FUNC_3(*(__le16 *)(VAR_13+6));
   FUNC_5(&VAR_15->ending_fis[0], VAR_13+16, VAR_0);
   VAR_7->buf_valid_size = sizeof(*VAR_15);
  }
 }

 FUNC_1(VAR_11, VAR_10);
}
