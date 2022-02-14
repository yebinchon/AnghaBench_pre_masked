
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u_int ;
struct scsi_cmnd {int result; unsigned char* host_scribble; TYPE_3__* device; int sc_data_direction; int sense_buffer; } ;
struct qlogicpti {int send_marker; size_t res_out_ptr; scalar_t__ qregs; int * cmd_count; TYPE_2__* op; int qpti_id; struct scsi_cmnd** cmd_slots; int * res_cpu; } ;
struct TYPE_4__ {scalar_t__ entry_type; } ;
struct Status_Entry {size_t handle; scalar_t__ completion_status; int status_flags; int state_flags; TYPE_1__ hdr; int req_sense_data; } ;
struct TYPE_6__ {size_t id; } ;
struct TYPE_5__ {int dev; } ;





 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

 scalar_t__ VAR_4 ;
 size_t VAR_5 ;


 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 size_t FUNC_0 (size_t) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct Status_Entry*,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (size_t,scalar_t__) ;
 scalar_t__ FUNC_6 (struct scsi_cmnd*) ;
 int FUNC_7 (struct scsi_cmnd*) ;
 int FUNC_8 (struct scsi_cmnd*) ;

__attribute__((used)) static struct scsi_cmnd *FUNC_9(struct qlogicpti *VAR_15)
{
 struct scsi_cmnd *VAR_16, *VAR_17 = ((void*)0);
 struct Status_Entry *VAR_18;
 u_int VAR_19, VAR_20;

 if (!(FUNC_4(VAR_15->qregs + VAR_10) & VAR_11))
  return ((void*)0);

 VAR_19 = FUNC_4(VAR_15->qregs + VAR_7);
 FUNC_5(VAR_5, VAR_15->qregs + VAR_4);
 if (FUNC_4(VAR_15->qregs + VAR_8) & VAR_9) {
  switch (FUNC_4(VAR_15->qregs + VAR_6)) {
  case 133:
  case 130:
   VAR_15->send_marker = 1;
   break;
  case 128:
  case 129:
  case 132:
  case 131:
   break;
  };
  FUNC_5(0, VAR_15->qregs + VAR_8);
 }


 VAR_20 = VAR_15->res_out_ptr;
 while (VAR_20 != VAR_19) {
  u_int VAR_21;

  VAR_18 = (struct Status_Entry *) &VAR_15->res_cpu[VAR_20];
  VAR_20 = FUNC_0(VAR_20);





  VAR_21 = VAR_18->handle;
  VAR_16 = VAR_15->cmd_slots[VAR_21];
  VAR_15->cmd_slots[VAR_21] = ((void*)0);

  if (VAR_18->completion_status == VAR_1 ||
      VAR_18->completion_status == VAR_0 ||
      (VAR_18->status_flags & VAR_14))
   VAR_15->send_marker = 1;

  if (VAR_18->state_flags & VAR_13)
   FUNC_2(VAR_16->sense_buffer, VAR_18->req_sense_data,
          VAR_12);

  if (VAR_18->hdr.entry_type == VAR_3)
   VAR_16->result =
       FUNC_3(VAR_18, VAR_15->qpti_id);
  else
   VAR_16->result = VAR_2 << 16;

  if (FUNC_6(VAR_16))
   FUNC_1(&VAR_15->op->dev,
         FUNC_8(VAR_16), FUNC_7(VAR_16),
         VAR_16->sc_data_direction);

  VAR_15->cmd_count[VAR_16->device->id]--;
  FUNC_5(VAR_20, VAR_15->qregs + VAR_7);
  VAR_16->host_scribble = (unsigned char *) VAR_17;
  VAR_17 = VAR_16;
 }
 VAR_15->res_out_ptr = VAR_20;

 return VAR_17;
}
