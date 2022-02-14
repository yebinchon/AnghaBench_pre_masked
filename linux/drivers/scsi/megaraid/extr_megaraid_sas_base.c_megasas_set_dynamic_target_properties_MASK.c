
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct scsi_device {int channel; scalar_t__ id; int request_queue; struct MR_PRIV_DEVICE* hostdata; TYPE_1__* host; } ;
struct megasas_instance {int map_id; scalar_t__ fw_supported_vd_count; int pd_seq_map_id; void* task_abort_tmo; TYPE_5__* tgt_prop; int max_reset_tmo; scalar_t__ use_seqnum_jbod_fp; struct fusion_context* ctrl_context; } ;
struct fusion_context {scalar_t__* pd_seq_sync; struct MR_DRV_RAID_MAP_ALL** ld_drv_map; } ;
struct MR_PRIV_DEVICE {void* task_abort_tmo; void* target_reset_tmo; int is_tm_capable; } ;
struct MR_PD_CFG_SEQ_NUM_SYNC {TYPE_4__* seq; } ;
struct TYPE_7__ {scalar_t__ ldPiMode; int tmCapable; } ;
struct MR_LD_RAID {TYPE_2__ capability; } ;
struct MR_DRV_RAID_MAP_ALL {int dummy; } ;
struct TYPE_10__ {scalar_t__ reset_tmo; } ;
struct TYPE_8__ {int tmCapable; } ;
struct TYPE_9__ {TYPE_3__ capability; } ;
struct TYPE_6__ {int host_no; } ;


 void* VAR_0 ;
 scalar_t__ FUNC_0 (struct scsi_device*) ;
 int VAR_1 ;
 struct MR_LD_RAID* FUNC_1 (scalar_t__,struct MR_DRV_RAID_MAP_ALL*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__,struct MR_DRV_RAID_MAP_ALL*) ;
 int FUNC_3 (int ,int) ;
 struct megasas_instance* FUNC_4 (int ) ;
 void* FUNC_5 (int ,int ,scalar_t__) ;
 int VAR_3 ;

void FUNC_6(struct scsi_device *VAR_4,
        bool VAR_5)
{
 u16 VAR_6 = 0, VAR_7;
 u32 VAR_8;
 struct megasas_instance *VAR_9;
 struct fusion_context *VAR_10;
 struct MR_PRIV_DEVICE *VAR_11;
 struct MR_PD_CFG_SEQ_NUM_SYNC *VAR_12;
 struct MR_LD_RAID *VAR_13;
 struct MR_DRV_RAID_MAP_ALL *VAR_14;

 VAR_9 = FUNC_4(VAR_4->host->host_no);
 VAR_10 = VAR_9->ctrl_context;
 VAR_11 = VAR_4->hostdata;

 if (!VAR_10 || !VAR_11)
  return;

 if (FUNC_0(VAR_4)) {
  VAR_8 = ((VAR_4->channel % 2) * VAR_1)
     + VAR_4->id;
  VAR_14 = VAR_10->ld_drv_map[(VAR_9->map_id & 1)];
  VAR_7 = FUNC_2(VAR_8, VAR_14);
  if (VAR_7 >= VAR_9->fw_supported_vd_count)
   return;
  VAR_13 = FUNC_1(VAR_7, VAR_14);

  if (VAR_13->capability.ldPiMode == VAR_2)
  FUNC_3(VAR_4->request_queue, 0x7);

  VAR_11->is_tm_capable =
   VAR_13->capability.tmCapable;
 } else if (VAR_9->use_seqnum_jbod_fp) {
  VAR_6 = (VAR_4->channel * VAR_1) +
   VAR_4->id;
  VAR_12 = (void *)VAR_10->pd_seq_sync
    [(VAR_9->pd_seq_map_id - 1) & 1];
  VAR_11->is_tm_capable =
   VAR_12->seq[VAR_6].capability.tmCapable;
 }

 if (VAR_5 && VAR_9->tgt_prop->reset_tmo) {




  VAR_11->target_reset_tmo =
   FUNC_5(VAR_3, VAR_9->max_reset_tmo,
         VAR_9->tgt_prop->reset_tmo);
  VAR_11->task_abort_tmo = VAR_9->task_abort_tmo;
 } else {
  VAR_11->target_reset_tmo =
      VAR_0;
  VAR_11->task_abort_tmo =
      VAR_0;
 }
}
