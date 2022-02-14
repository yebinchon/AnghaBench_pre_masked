
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct fcp_resp_rsp_info {scalar_t__ rsp_code; } ;
struct fcp_resp_ext {int fr_resid; int fr_sns_len; int fr_rsp_len; } ;
struct fcp_resp {scalar_t__ fr_status; int fr_flags; } ;
struct fc_frame_header {int dummy; } ;
struct fc_frame {int dummy; } ;
struct fc_fcp_pkt {scalar_t__ cdb_status; int scsi_comp_flags; int data_len; scalar_t__ scsi_resid; int xfer_len; void* status_code; TYPE_2__* rport; TYPE_1__* lp; int state; TYPE_3__* cmd; int tm_done; scalar_t__ wait_for_comp; } ;
struct TYPE_6__ {scalar_t__ underflow; int sense_buffer; } ;
struct TYPE_5__ {int port_id; } ;
struct TYPE_4__ {scalar_t__ qfull; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int FUNC_0 (struct fc_fcp_pkt*,char*,int,...) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fc_fcp_pkt*) ;
 int FUNC_3 (struct fc_fcp_pkt*) ;
 int FUNC_4 (struct fc_fcp_pkt*,int ) ;
 scalar_t__ FUNC_5 (struct fc_frame*) ;
 int FUNC_6 (struct fc_frame*) ;
 int FUNC_7 (struct fc_fcp_pkt*) ;
 int FUNC_8 (int ,char*,int) ;
 void* FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (TYPE_3__*) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static void FUNC_12(struct fc_fcp_pkt *VAR_12, struct fc_frame *VAR_13)
{
 struct fc_frame_header *VAR_14;
 struct fcp_resp *VAR_15;
 struct fcp_resp_ext *VAR_16;
 struct fcp_resp_rsp_info *VAR_17;
 u32 VAR_18;
 u32 VAR_19;
 u32 VAR_20 = 0;
 u32 VAR_21 = 0;
 u8 VAR_22 = 0;

 VAR_18 = FUNC_6(VAR_13);
 VAR_14 = (struct fc_frame_header *)FUNC_5(VAR_13);
 if (FUNC_11(VAR_18 < sizeof(*VAR_14) + sizeof(*VAR_15)))
  goto len_err;
 VAR_18 -= sizeof(*VAR_14);
 VAR_15 = (struct fcp_resp *)(VAR_14 + 1);
 VAR_12->cdb_status = VAR_15->fr_status;
 VAR_22 = VAR_15->fr_flags;
 VAR_12->scsi_comp_flags = VAR_22;
 VAR_19 = VAR_12->data_len;


 FUNC_3(VAR_12);

 if (FUNC_11((VAR_22 & ~VAR_0) || VAR_15->fr_status)) {
  VAR_16 = (void *)(VAR_15 + 1);
  if (VAR_22 & (VAR_5 | VAR_6)) {
   if (VAR_18 < sizeof(*VAR_15) + sizeof(*VAR_16))
    goto len_err;
   VAR_17 = (struct fcp_resp_rsp_info *)(VAR_16 + 1);
   if (VAR_22 & VAR_5) {
    VAR_20 = FUNC_9(VAR_16->fr_rsp_len);
    if ((VAR_20 != VAR_3) &&
        (VAR_20 != VAR_4))
     goto len_err;
    if (VAR_12->wait_for_comp) {

     VAR_12->cdb_status = VAR_17->rsp_code;
     FUNC_1(&VAR_12->tm_done);




     return;
    }
   }
   if (VAR_22 & VAR_6) {
    VAR_21 = FUNC_9(VAR_16->fr_sns_len);
    if (VAR_21 > VAR_11)
     VAR_21 = VAR_11;
    FUNC_8(VAR_12->cmd->sense_buffer,
           (char *)VAR_17 + VAR_20, VAR_21);
   }
  }
  if (VAR_22 & (VAR_2 | VAR_1)) {
   if (VAR_18 < sizeof(*VAR_15) + sizeof(VAR_16->fr_resid))
    goto len_err;
   if (VAR_22 & VAR_2) {
    VAR_12->scsi_resid = FUNC_9(VAR_16->fr_resid);
    if (!(VAR_22 & VAR_6) &&
        (VAR_15->fr_status == 0) &&
        (FUNC_10(VAR_12->cmd) -
         VAR_12->scsi_resid) < VAR_12->cmd->underflow)
     goto err;
    VAR_19 -= VAR_12->scsi_resid;
   } else {
    VAR_12->status_code = VAR_8;
   }
  }
 }
 VAR_12->state |= VAR_9;




 if (FUNC_11(VAR_12->cdb_status == VAR_10 &&
       VAR_12->xfer_len != VAR_19)) {
  if (VAR_12->xfer_len < VAR_19) {





   if (VAR_12->lp->qfull) {
    FUNC_0(VAR_12, "tgt %6.6x queue busy retry\n",
        VAR_12->rport->port_id);
    return;
   }
   FUNC_0(VAR_12, "tgt %6.6x xfer len %zx data underrun "
       "len %x, data len %x\n",
       VAR_12->rport->port_id,
       VAR_12->xfer_len, VAR_19, VAR_12->data_len);
   FUNC_4(VAR_12, FUNC_7(VAR_12));
   return;
  }
  VAR_12->status_code = VAR_7;
  FUNC_0(VAR_12, "tgt %6.6x xfer len %zx greater than expected, "
      "len %x, data len %x\n",
      VAR_12->rport->port_id,
      VAR_12->xfer_len, VAR_19, VAR_12->data_len);
 }
 FUNC_2(VAR_12);
 return;

len_err:
 FUNC_0(VAR_12, "short FCP response. flags 0x%x len %u respl %u "
     "snsl %u\n", VAR_22, FUNC_6(VAR_13), VAR_20, VAR_21);
err:
 VAR_12->status_code = VAR_8;
 FUNC_2(VAR_12);
}
