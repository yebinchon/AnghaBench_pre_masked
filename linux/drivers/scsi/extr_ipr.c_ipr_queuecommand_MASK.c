
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct scsi_cmnd {int result; int* cmnd; scalar_t__ underflow; int flags; int (* scsi_done ) (struct scsi_cmnd*) ;int sense_buffer; int cmd_len; TYPE_1__* device; } ;
struct ipr_resource_entry {scalar_t__ needs_sync_complete; int res_handle; scalar_t__ raw_mode; scalar_t__ reset_occurred; TYPE_2__* sata_port; } ;
struct TYPE_8__ {int flags_hi; int request_type; int flags_lo; int cdb; } ;
struct ipr_ioarcb {TYPE_4__ cmd_pkt; int res_handle; } ;
struct ipr_ioa_cfg {scalar_t__ sis64; struct ipr_hrr_queue* hrrq; TYPE_3__* host; } ;
struct ipr_hrr_queue {int ioa_is_dead; int lock; int hrrq_pending_q; int hrrq_free_q; int allow_cmds; scalar_t__ removing_ioa; } ;
struct ipr_cmnd {int queue; int done; struct scsi_cmnd* scsi_cmd; struct ipr_ioarcb ioarcb; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
struct TYPE_7__ {int host_lock; } ;
struct TYPE_6__ {int ap; } ;
struct TYPE_5__ {struct ipr_resource_entry* hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ipr_resource_entry*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 struct ipr_cmnd* FUNC_1 (struct ipr_hrr_queue*) ;
 int FUNC_2 (struct scsi_cmnd*,int ) ;
 int FUNC_3 (struct ipr_ioa_cfg*,struct ipr_cmnd*) ;
 int FUNC_4 (struct ipr_ioa_cfg*,struct ipr_cmnd*) ;
 int FUNC_5 (struct ipr_ioa_cfg*) ;
 int FUNC_6 (struct ipr_cmnd*,int ) ;
 scalar_t__ FUNC_7 (struct ipr_resource_entry*) ;
 scalar_t__ FUNC_8 (struct ipr_resource_entry*) ;
 scalar_t__ FUNC_9 (struct ipr_resource_entry*) ;
 scalar_t__ FUNC_10 (struct ipr_resource_entry*) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_11 (struct ipr_cmnd*) ;
 int FUNC_12 (struct ipr_cmnd*,int ,int ) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int ,int*,int ) ;
 int FUNC_15 (int ,int ,int ) ;
 int FUNC_16 (struct scsi_cmnd*) ;
 int FUNC_17 (int ,unsigned long) ;
 int FUNC_18 (int ,unsigned long) ;
 int FUNC_19 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_20 (int) ;

__attribute__((used)) static int FUNC_21(struct Scsi_Host *VAR_18,
       struct scsi_cmnd *VAR_19)
{
 struct ipr_ioa_cfg *VAR_20;
 struct ipr_resource_entry *VAR_21;
 struct ipr_ioarcb *VAR_22;
 struct ipr_cmnd *VAR_23;
 unsigned long VAR_24, VAR_25;
 int VAR_26;
 struct ipr_hrr_queue *VAR_27;
 int VAR_28;

 VAR_20 = (struct ipr_ioa_cfg *)VAR_18->hostdata;

 VAR_19->result = (VAR_1 << 16);
 VAR_21 = VAR_19->device->hostdata;

 if (FUNC_8(VAR_21) && VAR_21->sata_port) {
  FUNC_17(VAR_20->host->host_lock, VAR_25);
  VAR_26 = FUNC_2(VAR_19, VAR_21->sata_port->ap);
  FUNC_18(VAR_20->host->host_lock, VAR_25);
  return VAR_26;
 }

 VAR_28 = FUNC_5(VAR_20);
 VAR_27 = &VAR_20->hrrq[VAR_28];

 FUNC_17(VAR_27->lock, VAR_24);





 if (FUNC_20(!VAR_27->allow_cmds && !VAR_27->ioa_is_dead && !VAR_27->removing_ioa)) {
  FUNC_18(VAR_27->lock, VAR_24);
  return VAR_14;
 }





 if (FUNC_20(VAR_27->ioa_is_dead || VAR_27->removing_ioa || !VAR_21)) {
  FUNC_18(VAR_27->lock, VAR_24);
  goto err_nodev;
 }

 VAR_23 = FUNC_1(VAR_27);
 if (VAR_23 == ((void*)0)) {
  FUNC_18(VAR_27->lock, VAR_24);
  return VAR_14;
 }
 FUNC_18(VAR_27->lock, VAR_24);

 FUNC_6(VAR_23, VAR_16);
 VAR_22 = &VAR_23->ioarcb;

 FUNC_14(VAR_22->cmd_pkt.cdb, VAR_19->cmnd, VAR_19->cmd_len);
 VAR_23->scsi_cmd = VAR_19;
 VAR_23->done = VAR_17;

 if (FUNC_9(VAR_21)) {
  if (VAR_19->underflow == 0)
   VAR_22->cmd_pkt.flags_hi |= VAR_3;

  if (VAR_21->reset_occurred) {
   VAR_21->reset_occurred = 0;
   VAR_22->cmd_pkt.flags_lo |= VAR_6;
  }
 }

 if (FUNC_9(VAR_21) || FUNC_10(VAR_21)) {
  VAR_22->cmd_pkt.flags_hi |= VAR_2;

  VAR_22->cmd_pkt.flags_lo |= VAR_5;
  if (VAR_19->flags & VAR_13)
   VAR_22->cmd_pkt.flags_lo |= VAR_7;
  else
   VAR_22->cmd_pkt.flags_lo |= VAR_8;
 }

 if (VAR_19->cmnd[0] >= 0xC0 &&
     (!FUNC_9(VAR_21) || VAR_19->cmnd[0] == VAR_9)) {
  VAR_22->cmd_pkt.request_type = VAR_10;
 }
 if (VAR_21->raw_mode && FUNC_7(VAR_21)) {
  VAR_22->cmd_pkt.request_type = VAR_11;

  if (VAR_19->underflow == 0)
   VAR_22->cmd_pkt.flags_hi |= VAR_3;
 }

 if (VAR_20->sis64)
  VAR_26 = FUNC_4(VAR_20, VAR_23);
 else
  VAR_26 = FUNC_3(VAR_20, VAR_23);

 FUNC_17(VAR_27->lock, VAR_24);
 if (FUNC_20(VAR_26 || (!VAR_27->allow_cmds && !VAR_27->ioa_is_dead))) {
  FUNC_13(&VAR_23->queue, &VAR_27->hrrq_free_q);
  FUNC_18(VAR_27->lock, VAR_24);
  if (!VAR_26)
   FUNC_16(VAR_19);
  return VAR_14;
 }

 if (FUNC_20(VAR_27->ioa_is_dead)) {
  FUNC_13(&VAR_23->queue, &VAR_27->hrrq_free_q);
  FUNC_18(VAR_27->lock, VAR_24);
  FUNC_16(VAR_19);
  goto err_nodev;
 }

 VAR_22->res_handle = VAR_21->res_handle;
 if (VAR_21->needs_sync_complete) {
  VAR_22->cmd_pkt.flags_hi |= VAR_4;
  VAR_21->needs_sync_complete = 0;
 }
 FUNC_13(&VAR_23->queue, &VAR_27->hrrq_pending_q);
 FUNC_12(VAR_23, VAR_12, FUNC_0(VAR_21));
 FUNC_11(VAR_23);
 FUNC_18(VAR_27->lock, VAR_24);
 return 0;

err_nodev:
 FUNC_17(VAR_27->lock, VAR_24);
 FUNC_15(VAR_19->sense_buffer, 0, VAR_15);
 VAR_19->result = (VAR_0 << 16);
 VAR_19->scsi_done(VAR_19);
 FUNC_18(VAR_27->lock, VAR_24);
 return 0;
}
