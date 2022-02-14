
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct fcp_txrdy {int ft_burst_len; int ft_data_ro; } ;
struct fc_seq {int rec_data; } ;
struct fc_lport {scalar_t__ state; } ;
struct fc_frame_header {scalar_t__ fh_r_ctl; scalar_t__ fh_type; } ;
struct fc_frame {int dummy; } ;
struct fc_fcp_pkt {int state; int xfer_contig_end; int xfer_len; struct fc_lport* lp; } ;


 int VAR_0 ;
 int FUNC_0 (struct fc_fcp_pkt*,char*,scalar_t__,...) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (struct fc_frame*) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct fc_fcp_pkt*,struct fc_frame*) ;
 int FUNC_4 (struct fc_fcp_pkt*,struct fc_frame*) ;
 scalar_t__ FUNC_5 (struct fc_fcp_pkt*) ;
 int FUNC_6 (struct fc_fcp_pkt*,struct fc_frame*) ;
 int FUNC_7 (struct fc_fcp_pkt*,struct fc_frame*) ;
 int FUNC_8 (struct fc_fcp_pkt*,struct fc_seq*,size_t,size_t) ;
 int FUNC_9 (struct fc_fcp_pkt*) ;
 int FUNC_10 (struct fc_frame*) ;
 struct fc_frame_header* FUNC_11 (struct fc_frame*) ;
 struct fcp_txrdy* FUNC_12 (struct fc_frame*,int) ;
 int FUNC_13 (struct fc_frame*) ;
 int FUNC_14 (struct fc_frame*) ;
 scalar_t__ FUNC_15 (int ) ;

__attribute__((used)) static void FUNC_16(struct fc_seq *VAR_8, struct fc_frame *VAR_9, void *VAR_10)
{
 struct fc_fcp_pkt *VAR_11 = (struct fc_fcp_pkt *)VAR_10;
 struct fc_lport *VAR_12 = VAR_11->lp;
 struct fc_frame_header *VAR_13;
 struct fcp_txrdy *VAR_14;
 u8 VAR_15;
 int VAR_16 = 0;

 if (FUNC_1(VAR_9)) {
  FUNC_4(VAR_11, VAR_9);
  return;
 }

 VAR_13 = FUNC_11(VAR_9);
 VAR_15 = VAR_13->fh_r_ctl;

 if (VAR_12->state != VAR_7) {
  FUNC_0(VAR_11, "lport state %d, ignoring r_ctl %x\n",
      VAR_12->state, VAR_15);
  goto out;
 }
 if (FUNC_5(VAR_11))
  goto out;

 if (VAR_13->fh_type == VAR_6) {
  FUNC_3(VAR_11, VAR_9);
  goto unlock;
 }

 if (VAR_11->state & (VAR_4 | VAR_5)) {
  FUNC_0(VAR_11, "command aborted, ignoring r_ctl %x\n", VAR_15);
  goto unlock;
 }

 if (VAR_15 == VAR_2) {




  FUNC_2(FUNC_13(VAR_9) & VAR_0);
  VAR_14 = FUNC_12(VAR_9, sizeof(*VAR_14));
  FUNC_2(!VAR_14);

  VAR_16 = FUNC_8(VAR_11, VAR_8,
          (size_t) FUNC_15(VAR_14->ft_data_ro),
          (size_t) FUNC_15(VAR_14->ft_burst_len));
  if (!VAR_16)
   VAR_8->rec_data = VAR_11->xfer_len;
 } else if (VAR_15 == VAR_3) {




  FUNC_2(FUNC_14(VAR_9) < sizeof(*VAR_13));
  FUNC_6(VAR_11, VAR_9);
  VAR_8->rec_data = VAR_11->xfer_contig_end;
 } else if (VAR_15 == VAR_1) {
  FUNC_2(FUNC_13(VAR_9) & VAR_0);

  FUNC_7(VAR_11, VAR_9);
 } else {
  FUNC_0(VAR_11, "unexpected frame.  r_ctl %x\n", VAR_15);
 }
unlock:
 FUNC_9(VAR_11);
out:
 FUNC_10(VAR_9);
}
