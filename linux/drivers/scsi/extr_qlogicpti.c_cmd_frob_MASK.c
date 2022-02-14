
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_cmnd {scalar_t__* cmnd; int cmd_len; TYPE_3__* request; TYPE_2__* device; } ;
struct qlogicpti {scalar_t__* cmd_count; void** tag_ages; } ;
struct TYPE_4__ {int entry_cnt; int entry_type; } ;
struct Command_Entry {size_t target_id; int time_out; int cdb; int control_flags; int cdb_length; int target_lun; TYPE_1__ hdr; } ;
struct TYPE_6__ {int timeout; } ;
struct TYPE_5__ {size_t id; scalar_t__ tagged_supported; int lun; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 void* VAR_9 ;
 int FUNC_0 (int ,scalar_t__*,int ) ;
 int FUNC_1 (struct Command_Entry*,int ,int) ;
 scalar_t__ FUNC_2 (void*,void*) ;

__attribute__((used)) static inline void FUNC_3(struct Command_Entry *VAR_10, struct scsi_cmnd *VAR_11,
       struct qlogicpti *VAR_12)
{
 FUNC_1(VAR_10, 0, sizeof(struct Command_Entry));
 VAR_10->hdr.entry_cnt = 1;
 VAR_10->hdr.entry_type = VAR_4;
 VAR_10->target_id = VAR_11->device->id;
 VAR_10->target_lun = VAR_11->device->lun;
 VAR_10->cdb_length = VAR_11->cmd_len;
 VAR_10->control_flags = 0;
 if (VAR_11->device->tagged_supported) {
  if (VAR_12->cmd_count[VAR_11->device->id] == 0)
   VAR_12->tag_ages[VAR_11->device->id] = VAR_9;
  if (FUNC_2(VAR_9, VAR_12->tag_ages[VAR_11->device->id] + (5*VAR_5))) {
   VAR_10->control_flags = VAR_0;
   VAR_12->tag_ages[VAR_11->device->id] = VAR_9;
  } else
   VAR_10->control_flags = VAR_2;
 }
 if ((VAR_11->cmnd[0] == VAR_8) ||
     (VAR_11->cmnd[0] == VAR_6) ||
     (VAR_11->cmnd[0] == VAR_7))
  VAR_10->control_flags |= VAR_3;
 else
  VAR_10->control_flags |= VAR_1;
 VAR_10->time_out = VAR_11->request->timeout/VAR_5;
 FUNC_0(VAR_10->cdb, VAR_11->cmnd, VAR_11->cmd_len);
}
