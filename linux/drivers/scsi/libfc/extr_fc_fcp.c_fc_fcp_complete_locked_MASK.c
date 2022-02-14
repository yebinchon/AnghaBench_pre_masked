
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fc_seq {int dummy; } ;
struct fc_lport {int dummy; } ;
struct fc_frame {int dummy; } ;
struct fc_fcp_pkt {int state; scalar_t__ cdb_status; scalar_t__ xfer_len; scalar_t__ data_len; int scsi_comp_flags; scalar_t__ scsi_resid; scalar_t__ cmd; struct fc_lport* lp; struct fc_seq* seq_ptr; scalar_t__ status_code; int io_status; } ;
struct fc_exch {int sid; int did; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct fc_fcp_pkt*,char*,scalar_t__,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (struct fc_seq*) ;
 struct fc_frame* FUNC_2 (struct fc_lport*,int ) ;
 int FUNC_3 (struct fc_frame*,int ,int ,int ,int ,int,int ) ;
 int FUNC_4 (struct fc_fcp_pkt*) ;
 struct fc_exch* FUNC_5 (struct fc_seq*) ;
 int FUNC_6 (struct fc_lport*,struct fc_seq*,struct fc_frame*) ;
 struct fc_seq* FUNC_7 (struct fc_seq*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct fc_fcp_pkt *VAR_12)
{
 struct fc_lport *VAR_13 = VAR_12->lp;
 struct fc_seq *VAR_14;
 struct fc_exch *VAR_15;
 u32 VAR_16;

 if (VAR_12->state & VAR_9)
  return;

 if (VAR_12->state & VAR_8) {
  if (!VAR_12->status_code)
   VAR_12->status_code = VAR_2;
 } else {




  if (VAR_12->cdb_status == VAR_11 &&
      VAR_12->xfer_len < VAR_12->data_len && !VAR_12->io_status &&
      (!(VAR_12->scsi_comp_flags & VAR_1) ||
       VAR_12->xfer_len < VAR_12->data_len - VAR_12->scsi_resid)) {
   FUNC_0(VAR_12, "data underrun, xfer %zx data %x\n",
        VAR_12->xfer_len, VAR_12->data_len);
   VAR_12->status_code = VAR_3;
  }
 }

 VAR_14 = VAR_12->seq_ptr;
 if (VAR_14) {
  VAR_12->seq_ptr = ((void*)0);
  if (FUNC_8(VAR_12->scsi_comp_flags & VAR_0)) {
   struct fc_frame *VAR_17;
   struct fc_seq *VAR_18;

   VAR_18 = FUNC_7(VAR_14);
   VAR_17 = FUNC_2(VAR_12->lp, 0);
   if (VAR_17) {
    VAR_16 = VAR_6;
    VAR_16 |= VAR_5 | VAR_4;
    VAR_15 = FUNC_5(VAR_14);
    FUNC_3(VAR_17, VAR_7,
            VAR_15->did, VAR_15->sid,
            VAR_10, VAR_16, 0);
    FUNC_6(VAR_13, VAR_18, VAR_17);
   }
  }
  FUNC_1(VAR_14);
 }





 if (VAR_12->cmd)
  FUNC_4(VAR_12);
}
