
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_8__ {int * ptr; } ;
struct scsi_cmnd {int (* scsi_done ) (struct scsi_cmnd*) ;TYPE_4__ SCp; } ;
struct megasas_instance {int ldio_outstanding; scalar_t__ ldio_threshold; struct fusion_context* ctrl_context; } ;
struct megasas_cmd_fusion {scalar_t__* sense; int cmd_completed; TYPE_3__* io_request; struct scsi_cmnd* scmd; } ;
struct fusion_context {struct megasas_cmd_fusion** cmd_list; } ;
struct TYPE_5__ {int peer_smid; } ;
struct RAID_CONTEXT_G35 {scalar_t__ status; scalar_t__ ex_status; TYPE_1__ flow_specific; } ;
struct TYPE_6__ {struct RAID_CONTEXT_G35 raid_context_g35; } ;
struct TYPE_7__ {int DataLength; TYPE_2__ RaidContext; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct fusion_context*,struct scsi_cmnd*,scalar_t__,scalar_t__,int ,scalar_t__*) ;
 scalar_t__ FUNC_4 (struct scsi_cmnd*) ;
 int FUNC_5 (struct megasas_instance*,struct megasas_cmd_fusion*) ;
 int FUNC_6 (struct scsi_cmnd*) ;
 int FUNC_7 (struct scsi_cmnd*) ;

__attribute__((used)) static inline void
FUNC_8(struct megasas_instance *VAR_2,
       struct megasas_cmd_fusion *VAR_3)
{
 u8 *VAR_4, VAR_5, VAR_6;
 u32 VAR_7;
 u16 VAR_8;
 struct fusion_context *VAR_9;
 struct megasas_cmd_fusion *VAR_10 = ((void*)0);
 struct scsi_cmnd *VAR_11 = ((void*)0);
 struct RAID_CONTEXT_G35 *VAR_12;

 VAR_12 = &VAR_3->io_request->RaidContext.raid_context_g35;
 VAR_9 = VAR_2->ctrl_context;
 VAR_8 = FUNC_1(VAR_12->flow_specific.peer_smid);

 VAR_10 = VAR_9->cmd_list[VAR_8 - 1];
 VAR_11 = VAR_3->scmd;
 VAR_5 = VAR_12->status;
 VAR_6 = VAR_12->ex_status;
 VAR_7 = VAR_3->io_request->DataLength;
 VAR_4 = VAR_3->sense;

 VAR_3->cmd_completed = 1;


 if (VAR_10->cmd_completed) {
  VAR_12 = &VAR_10->io_request->RaidContext.raid_context_g35;
  if (VAR_12->status != VAR_0) {
   VAR_5 = VAR_12->status;
   VAR_6 = VAR_12->ex_status;
   VAR_7 = VAR_10->io_request->DataLength;
   VAR_4 = VAR_10->sense;
  }

  FUNC_5(VAR_2, VAR_10);
  FUNC_3(VAR_9, VAR_11, VAR_5, VAR_6,
          FUNC_2(VAR_7), VAR_4);
  if (VAR_2->ldio_threshold &&
      FUNC_4(VAR_11) == VAR_1)
   FUNC_0(&VAR_2->ldio_outstanding);
  VAR_11->SCp.ptr = ((void*)0);
  FUNC_5(VAR_2, VAR_3);
  FUNC_6(VAR_11);
  VAR_11->scsi_done(VAR_11);
 }
}
