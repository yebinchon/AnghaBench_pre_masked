
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct scsi_cmnd {int result; int (* scsi_done ) (struct scsi_cmnd*) ;TYPE_4__* device; } ;
struct ipr_resource_entry {int needs_sync_complete; int raw_mode; int resetting_device; int in_erp; } ;
struct ipr_ioa_cfg {int host; } ;
struct TYPE_6__ {int ioasc; } ;
struct TYPE_7__ {TYPE_1__ hdr; } ;
struct TYPE_8__ {TYPE_2__ ioasa; } ;
struct ipr_cmnd {TYPE_5__* hrrq; int queue; scalar_t__ eh_comp; struct scsi_cmnd* scsi_cmd; TYPE_3__ s; } ;
struct TYPE_10__ {int hrrq_free_q; } ;
struct TYPE_9__ {int channel; struct ipr_resource_entry* hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;






 int VAR_5 ;





 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct ipr_cmnd*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct ipr_ioa_cfg*,struct ipr_cmnd*,struct ipr_resource_entry*) ;
 int FUNC_6 (struct ipr_cmnd*) ;
 int FUNC_7 (struct ipr_cmnd*) ;
 int FUNC_8 (struct ipr_cmnd*) ;
 int FUNC_9 (struct ipr_resource_entry*) ;
 int FUNC_10 (struct ipr_resource_entry*) ;
 int FUNC_11 (struct ipr_resource_entry*) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (struct scsi_cmnd*) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_16(struct ipr_ioa_cfg *VAR_8,
         struct ipr_cmnd *VAR_9)
{
 struct scsi_cmnd *VAR_10 = VAR_9->scsi_cmd;
 struct ipr_resource_entry *VAR_11 = VAR_10->device->hostdata;
 u32 VAR_12 = FUNC_3(VAR_9->s.ioasa.hdr.ioasc);
 u32 VAR_13 = VAR_12 & VAR_5;

 if (!VAR_11) {
  FUNC_2(VAR_9);
  return;
 }

 if (!FUNC_9(VAR_11) && VAR_13 != 135)
  FUNC_7(VAR_9);

 FUNC_5(VAR_8, VAR_9, VAR_11);

 switch (VAR_13) {
 case 138:
  if (FUNC_10(VAR_11))
   VAR_10->result |= (VAR_0 << 16);
  else
   VAR_10->result |= (VAR_2 << 16);
  break;
 case 131:
 case 132:
  VAR_10->result |= (VAR_3 << 16);
  break;
 case 134:
  VAR_10->result |= (VAR_3 << 16);
  if (!FUNC_10(VAR_11))
   VAR_11->needs_sync_complete = 1;
  break;
 case 128:
  if (!VAR_11->in_erp)
   VAR_11->needs_sync_complete = 1;
  VAR_10->result |= (VAR_2 << 16);
  break;
 case 130:
 case 139:




  if (VAR_10->result != VAR_7)
   VAR_10->result |= (VAR_4 << 16);
  break;
 case 137:
 case 136:




  if (!VAR_11->resetting_device)
   FUNC_14(VAR_8->host, VAR_10->device->channel);
  VAR_10->result |= (VAR_1 << 16);
  if (!FUNC_10(VAR_11))
   VAR_11->needs_sync_complete = 1;
  break;
 case 135:
  VAR_10->result |= FUNC_1(VAR_12);
  if (FUNC_1(VAR_12) == VAR_7) {
   if (!FUNC_8(VAR_9)) {
    if (!FUNC_10(VAR_11)) {
     FUNC_6(VAR_9);
     return;
    }
   }
  }
  if (!FUNC_10(VAR_11))
   VAR_11->needs_sync_complete = 1;
  break;
 case 129:
  break;
 case 133:
  if (VAR_11->raw_mode) {
   VAR_11->raw_mode = 0;
   VAR_10->result |= (VAR_2 << 16);
  } else
   VAR_10->result |= (VAR_1 << 16);
  break;
 default:
  if (FUNC_0(VAR_12) > VAR_6)
   VAR_10->result |= (VAR_1 << 16);
  if (!FUNC_11(VAR_11) && !FUNC_10(VAR_11))
   VAR_11->needs_sync_complete = 1;
  break;
 }

 FUNC_13(VAR_9->scsi_cmd);
 VAR_10->scsi_done(VAR_10);
 if (VAR_9->eh_comp)
  FUNC_4(VAR_9->eh_comp);
 FUNC_12(&VAR_9->queue, &VAR_9->hrrq->hrrq_free_q);
}
