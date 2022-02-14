
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct scsi_cmnd {int result; scalar_t__ underflow; int (* scsi_done ) (struct scsi_cmnd*) ;int device; int sense_buffer; } ;
struct TYPE_4__ {scalar_t__ sense; } ;
struct ibmvfc_fcp_rsp {int flags; TYPE_2__ data; scalar_t__ fcp_sense_len; scalar_t__ fcp_rsp_len; scalar_t__ fcp_resid; } ;
struct ibmvfc_event {scalar_t__ eh_comp; struct scsi_cmnd* cmnd; TYPE_1__* xfer_iu; } ;
struct ibmvfc_cmd {scalar_t__ error; scalar_t__ status; scalar_t__ adapter_resid; scalar_t__ response_flags; struct ibmvfc_fcp_rsp rsp; } ;
struct TYPE_3__ {struct ibmvfc_cmd cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct ibmvfc_event*) ;
 int FUNC_4 (struct ibmvfc_cmd*) ;
 int FUNC_5 (struct ibmvfc_event*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (struct scsi_cmnd*) ;
 int FUNC_9 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_10 (struct scsi_cmnd*) ;
 int FUNC_11 (struct scsi_cmnd*,scalar_t__) ;
 int FUNC_12 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_13(struct ibmvfc_event *VAR_9)
{
 struct ibmvfc_cmd *VAR_10 = &VAR_9->xfer_iu->cmd;
 struct ibmvfc_fcp_rsp *VAR_11 = &VAR_10->rsp;
 struct scsi_cmnd *VAR_12 = VAR_9->cmnd;
 u32 VAR_13 = 0;
 u32 VAR_14 = FUNC_1(VAR_11->fcp_sense_len);

 if (VAR_12) {
  if (FUNC_0(VAR_10->response_flags) & VAR_5)
   FUNC_11(VAR_12, FUNC_1(VAR_10->adapter_resid));
  else if (VAR_11->flags & VAR_2)
   FUNC_11(VAR_12, FUNC_1(VAR_11->fcp_resid));
  else
   FUNC_11(VAR_12, 0);

  if (VAR_10->status) {
   VAR_12->result = FUNC_4(VAR_10);

   if (VAR_11->flags & VAR_3)
    VAR_13 = FUNC_1(VAR_11->fcp_rsp_len);
   if ((VAR_14 + VAR_13) > VAR_8)
    VAR_14 = VAR_8 - VAR_13;
   if ((VAR_11->flags & VAR_4) && VAR_11->fcp_sense_len && VAR_13 <= 8)
    FUNC_7(VAR_12->sense_buffer, VAR_11->data.sense + VAR_13, VAR_14);
   if ((FUNC_0(VAR_10->status) & VAR_7) &&
       (FUNC_0(VAR_10->error) == VAR_6))
    FUNC_6(VAR_12->device);

   if (!VAR_12->result && (!FUNC_10(VAR_12) || (VAR_11->flags & VAR_1)))
    VAR_12->result = (VAR_0 << 16);

   FUNC_5(VAR_9);
  }

  if (!VAR_12->result &&
      (FUNC_8(VAR_12) - FUNC_10(VAR_12) < VAR_12->underflow))
   VAR_12->result = (VAR_0 << 16);

  FUNC_9(VAR_12);
  VAR_12->scsi_done(VAR_12);
 }

 if (VAR_9->eh_comp)
  FUNC_2(VAR_9->eh_comp);

 FUNC_3(VAR_9);
}
