
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_4__ {int* cdb; int request_type; } ;
struct ipr_ioarcb {TYPE_2__ cmd_pkt; int res_handle; } ;
struct ipr_ioa_cfg {size_t identify_hrrq_index; size_t hrrq_num; int nvectors; scalar_t__ sis64; struct ipr_hrr_queue* hrrq; TYPE_1__* pdev; } ;
struct ipr_hrr_queue {int size; scalar_t__ host_rrq_dma; } ;
struct ipr_cmnd {int (* job_step ) (struct ipr_cmnd*) ;struct ipr_ioarcb ioarcb; struct ipr_ioa_cfg* ioa_cfg; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct ipr_cmnd*,int ,int ,int ) ;
 int FUNC_3 (struct ipr_cmnd*) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_4(struct ipr_cmnd *VAR_11)
{
 struct ipr_ioa_cfg *VAR_12 = VAR_11->ioa_cfg;
 struct ipr_ioarcb *VAR_13 = &VAR_11->ioarcb;
 struct ipr_hrr_queue *VAR_14;

 VAR_0;
 VAR_11->job_step = FUNC_3;
 if (VAR_12->identify_hrrq_index == 0)
  FUNC_1(&VAR_12->pdev->dev, "Starting IOA initialization sequence.\n");

 if (VAR_12->identify_hrrq_index < VAR_12->hrrq_num) {
  VAR_14 = &VAR_12->hrrq[VAR_12->identify_hrrq_index];

  VAR_13->cmd_pkt.cdb[0] = VAR_1;
  VAR_13->res_handle = FUNC_0(VAR_4);

  VAR_13->cmd_pkt.request_type = VAR_7;
  if (VAR_12->sis64)
   VAR_13->cmd_pkt.cdb[1] = 0x1;

  if (VAR_12->nvectors == 1)
   VAR_13->cmd_pkt.cdb[1] &= ~VAR_2;
  else
   VAR_13->cmd_pkt.cdb[1] |= VAR_2;

  VAR_13->cmd_pkt.cdb[2] =
   ((u64) VAR_14->host_rrq_dma >> 24) & 0xff;
  VAR_13->cmd_pkt.cdb[3] =
   ((u64) VAR_14->host_rrq_dma >> 16) & 0xff;
  VAR_13->cmd_pkt.cdb[4] =
   ((u64) VAR_14->host_rrq_dma >> 8) & 0xff;
  VAR_13->cmd_pkt.cdb[5] =
   ((u64) VAR_14->host_rrq_dma) & 0xff;
  VAR_13->cmd_pkt.cdb[7] =
   ((sizeof(u32) * VAR_14->size) >> 8) & 0xff;
  VAR_13->cmd_pkt.cdb[8] =
   (sizeof(u32) * VAR_14->size) & 0xff;

  if (VAR_13->cmd_pkt.cdb[1] & VAR_2)
   VAR_13->cmd_pkt.cdb[9] =
     VAR_12->identify_hrrq_index;

  if (VAR_12->sis64) {
   VAR_13->cmd_pkt.cdb[10] =
    ((u64) VAR_14->host_rrq_dma >> 56) & 0xff;
   VAR_13->cmd_pkt.cdb[11] =
    ((u64) VAR_14->host_rrq_dma >> 48) & 0xff;
   VAR_13->cmd_pkt.cdb[12] =
    ((u64) VAR_14->host_rrq_dma >> 40) & 0xff;
   VAR_13->cmd_pkt.cdb[13] =
    ((u64) VAR_14->host_rrq_dma >> 32) & 0xff;
  }

  if (VAR_13->cmd_pkt.cdb[1] & VAR_2)
   VAR_13->cmd_pkt.cdb[14] =
     VAR_12->identify_hrrq_index;

  FUNC_2(VAR_11, VAR_9, VAR_10,
      VAR_3);

  if (++VAR_12->identify_hrrq_index < VAR_12->hrrq_num)
   VAR_11->job_step = FUNC_4;

  VAR_8;
  return VAR_6;
 }

 VAR_8;
 return VAR_5;
}
