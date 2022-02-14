
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct fcp_srr {int srr_r_ctl; int srr_rel_off; void* srr_rx_id; void* srr_ox_id; int srr_op; } ;
struct fc_seq {int dummy; } ;
struct fc_rport_libfc_priv {int flags; scalar_t__ rp_state; TYPE_1__* local_port; } ;
struct fc_rport {int port_id; struct fc_rport_libfc_priv* dd_data; } ;
struct fc_lport {int dummy; } ;
struct fc_frame {int dummy; } ;
struct fc_fcp_pkt {int state; void* xfer_contig_end; void* xfer_len; struct fc_seq* recov_seq; struct fc_rport* rport; int seq_ptr; struct fc_lport* lp; } ;
struct fc_exch {int rxid; int oxid; } ;
typedef enum fc_rctl { ____Placeholder_fc_rctl } fc_rctl ;
struct TYPE_2__ {int port_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 struct fc_seq* FUNC_0 (struct fc_lport*,struct fc_frame*,int ,int ,struct fc_fcp_pkt*,int ) ;
 struct fc_frame* FUNC_1 (struct fc_lport*,int) ;
 int VAR_8 ;
 int FUNC_2 (struct fc_fcp_pkt*) ;
 int FUNC_3 (struct fc_fcp_pkt*,int ) ;
 int VAR_9 ;
 int FUNC_4 (struct fc_frame*,int ,int ,int ,int ,int ,int ) ;
 struct fcp_srr* FUNC_5 (struct fc_frame*,int) ;
 struct fc_exch* FUNC_6 (int ) ;
 int FUNC_7 (struct fc_fcp_pkt*) ;
 int FUNC_8 (void*) ;
 void* FUNC_9 (int ) ;
 int FUNC_10 (struct fcp_srr*,int ,int) ;

__attribute__((used)) static void FUNC_11(struct fc_fcp_pkt *VAR_10, enum fc_rctl VAR_11, u32 VAR_12)
{
 struct fc_lport *VAR_13 = VAR_10->lp;
 struct fc_rport *VAR_14;
 struct fc_rport_libfc_priv *VAR_15;
 struct fc_exch *VAR_16 = FUNC_6(VAR_10->seq_ptr);
 struct fc_seq *VAR_17;
 struct fcp_srr *VAR_18;
 struct fc_frame *VAR_19;

 VAR_14 = VAR_10->rport;
 VAR_15 = VAR_14->dd_data;

 if (!(VAR_15->flags & VAR_3) ||
     VAR_15->rp_state != VAR_7)
  goto retry;
 VAR_19 = FUNC_1(VAR_13, sizeof(*VAR_18));
 if (!VAR_19)
  goto retry;

 VAR_18 = FUNC_5(VAR_19, sizeof(*VAR_18));
 FUNC_10(VAR_18, 0, sizeof(*VAR_18));
 VAR_18->srr_op = VAR_0;
 VAR_18->srr_ox_id = FUNC_9(VAR_16->oxid);
 VAR_18->srr_rx_id = FUNC_9(VAR_16->rxid);
 VAR_18->srr_r_ctl = VAR_11;
 VAR_18->srr_rel_off = FUNC_8(VAR_12);

 FUNC_4(VAR_19, VAR_2, VAR_14->port_id,
         VAR_15->local_port->port_id, VAR_6,
         VAR_1, 0);

 VAR_17 = FUNC_0(VAR_13, VAR_19, VAR_9,
          VAR_8,
          VAR_10, FUNC_7(VAR_10));
 if (!VAR_17)
  goto retry;

 VAR_10->recov_seq = VAR_17;
 VAR_10->xfer_len = VAR_12;
 VAR_10->xfer_contig_end = VAR_12;
 VAR_10->state &= ~VAR_4;
 FUNC_2(VAR_10);
 return;
retry:
 FUNC_3(VAR_10, VAR_5);
}
