
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct scsi_cmnd {void (* scsi_done ) (struct scsi_cmnd*) ;int result; scalar_t__ underflow; int flags; int * cmnd; int cmd_len; TYPE_3__* device; } ;
struct TYPE_13__ {int unique_flags1; int resource_address; int array_id; int resource_handle; } ;
struct pmcraid_resource_entry {TYPE_6__ cfg_entry; scalar_t__ sync_reqd; } ;
struct pmcraid_ioarcb {int hrrq_id; int response_handle; int request_flags1; int request_flags0; int request_type; int resource_handle; int cdb; } ;
struct pmcraid_instance {scalar_t__ ioa_state; int num_hrrq; TYPE_5__* host; int last_message_id; scalar_t__ ioa_reset_in_progress; TYPE_2__* inq_data; } ;
struct pmcraid_cmd {int cmd_done; TYPE_4__* ioa_cb; struct scsi_cmnd* scsi_cmd; } ;
struct TYPE_12__ {int unique_id; } ;
struct TYPE_11__ {struct pmcraid_ioarcb ioarcb; } ;
struct TYPE_10__ {struct pmcraid_resource_entry* hostdata; TYPE_1__* host; } ;
struct TYPE_9__ {int fw_version; } ;
struct TYPE_8__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (TYPE_6__) ;
 scalar_t__ FUNC_1 (TYPE_6__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (struct pmcraid_cmd*) ;
 int FUNC_5 (int,int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int ,int *,int ) ;
 int FUNC_11 (struct pmcraid_instance*,struct pmcraid_cmd*) ;
 int FUNC_12 (char*) ;
 struct pmcraid_cmd* FUNC_13 (struct pmcraid_instance*) ;
 int FUNC_14 (char*,...) ;
 int VAR_15 ;
 int FUNC_15 (struct pmcraid_cmd*) ;
 void FUNC_16 (struct scsi_cmnd*) ;
 void FUNC_17 (struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_18(
 struct scsi_cmnd *VAR_16,
 void (*VAR_17) (struct scsi_cmnd *)
)
{
 struct pmcraid_instance *VAR_18;
 struct pmcraid_resource_entry *VAR_19;
 struct pmcraid_ioarcb *VAR_20;
 struct pmcraid_cmd *VAR_21;
 u32 VAR_22;
 int VAR_23 = 0;

 VAR_18 =
  (struct pmcraid_instance *)VAR_16->device->host->hostdata;
 VAR_22 = FUNC_6(VAR_18->inq_data->fw_version);
 VAR_16->scsi_done = VAR_17;
 VAR_19 = VAR_16->device->hostdata;
 VAR_16->result = (VAR_2 << 16);




 if (VAR_18->ioa_state == VAR_4) {
  FUNC_14("IOA is dead, but queuecommand is scheduled\n");
  VAR_16->result = (VAR_1 << 16);
  VAR_16->scsi_done(VAR_16);
  return 0;
 }


 if (VAR_18->ioa_reset_in_progress)
  return VAR_11;




 if (VAR_16->cmnd[0] == VAR_12) {
  FUNC_14("SYNC_CACHE(0x35), completing in driver itself\n");
  VAR_16->scsi_done(VAR_16);
  return 0;
 }


 VAR_21 = FUNC_13(VAR_18);

 if (VAR_21 == ((void*)0)) {
  FUNC_12("free command block is not available\n");
  return VAR_11;
 }

 VAR_21->scsi_cmd = VAR_16;
 VAR_20 = &(VAR_21->ioa_cb->ioarcb);
 FUNC_10(VAR_20->cdb, VAR_16->cmnd, VAR_16->cmd_len);
 VAR_20->resource_handle = VAR_19->cfg_entry.resource_handle;
 VAR_20->request_type = VAR_9;






 VAR_20->hrrq_id = FUNC_5(1, &(VAR_18->last_message_id)) %
     VAR_18->num_hrrq;
 VAR_21->cmd_done = VAR_15;

 if (FUNC_0(VAR_19->cfg_entry) || FUNC_1(VAR_19->cfg_entry)) {
  if (VAR_16->underflow == 0)
   VAR_20->request_flags0 |= VAR_3;

  if (VAR_19->sync_reqd) {
   VAR_20->request_flags0 |= VAR_13;
   VAR_19->sync_reqd = 0;
  }

  VAR_20->request_flags0 |= VAR_5;

  if (VAR_16->flags & VAR_10)
   VAR_20->request_flags1 |= VAR_14;

  if (FUNC_0(VAR_19->cfg_entry))
   VAR_20->request_flags1 |= VAR_0;
 }

 VAR_23 = FUNC_11(VAR_18, VAR_21);

 FUNC_14("command (%d) CDB[0] = %x for %x:%x:%x:%x\n",
       FUNC_8(VAR_20->response_handle) >> 2,
       VAR_16->cmnd[0], VAR_18->host->unique_id,
       FUNC_1(VAR_19->cfg_entry) ? VAR_8 :
   VAR_7,
       FUNC_1(VAR_19->cfg_entry) ?
   (VAR_22 <= VAR_6 ?
    VAR_19->cfg_entry.unique_flags1 :
    FUNC_7(VAR_19->cfg_entry.array_id) & 0xFF) :
   FUNC_3(VAR_19->cfg_entry.resource_address),
       FUNC_2(VAR_19->cfg_entry.resource_address));

 if (FUNC_9(VAR_23 == 0)) {
  FUNC_4(VAR_21);
 } else {
  FUNC_12("queuecommand could not build ioadl\n");
  FUNC_15(VAR_21);
  VAR_23 = VAR_11;
 }

 return VAR_23;
}
