
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fc_seq_els_data {int explan; int reason; } ;
struct fc_rport_priv {int rp_mutex; struct fc_lport* local_port; } ;
struct TYPE_2__ {int (* frame_send ) (struct fc_lport*,struct fc_frame*) ;int (* get_lesb ) (struct fc_lport*,struct fc_els_lesb*) ;} ;
struct fc_host_statistics {int invalid_crc_count; int invalid_tx_word_count; int prim_seq_protocol_err_count; int loss_of_signal_count; int loss_of_sync_count; int link_failure_count; } ;
struct fc_lport {TYPE_1__ tt; struct fc_host_statistics host_stats; int host; } ;
struct fc_frame {int dummy; } ;
struct fc_els_lesb {void* lesb_inv_crc; void* lesb_inv_word; void* lesb_prim_err; void* lesb_sig_loss; void* lesb_sync_loss; void* lesb_link_fail; } ;
struct fc_els_rls_resp {struct fc_els_lesb rls_lesb; int rls_cmd; } ;
struct fc_els_rls {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct fc_rport_priv*,char*,int ) ;
 int FUNC_1 (struct fc_frame*,struct fc_frame*,int ,int ) ;
 struct fc_frame* FUNC_2 (struct fc_lport*,int) ;
 int FUNC_3 (struct fc_frame*) ;
 void* FUNC_4 (struct fc_frame*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct fc_rport_priv*) ;
 int FUNC_7 (struct fc_frame*,int ,struct fc_seq_els_data*) ;
 void* FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct fc_els_rls_resp*,int ,int) ;
 int FUNC_11 (struct fc_lport*,struct fc_els_lesb*) ;
 int FUNC_12 (struct fc_lport*,struct fc_frame*) ;

__attribute__((used)) static void FUNC_13(struct fc_rport_priv *VAR_7,
      struct fc_frame *VAR_8)

{
 struct fc_lport *VAR_9 = VAR_7->local_port;
 struct fc_frame *VAR_10;
 struct fc_els_rls *VAR_11;
 struct fc_els_rls_resp *VAR_12;
 struct fc_els_lesb *VAR_13;
 struct fc_seq_els_data VAR_14;
 struct fc_host_statistics *VAR_15;

 FUNC_9(&VAR_7->rp_mutex);

 FUNC_0(VAR_7, "Received RLS request while in state %s\n",
       FUNC_6(VAR_7));

 VAR_11 = FUNC_4(VAR_8, sizeof(*VAR_11));
 if (!VAR_11) {
  VAR_14.reason = VAR_4;
  VAR_14.explan = VAR_1;
  goto out_rjt;
 }

 VAR_10 = FUNC_2(VAR_9, sizeof(*VAR_12));
 if (!VAR_10) {
  VAR_14.reason = VAR_5;
  VAR_14.explan = VAR_0;
  goto out_rjt;
 }

 VAR_12 = FUNC_4(VAR_10, sizeof(*VAR_12));
 FUNC_10(VAR_12, 0, sizeof(*VAR_12));
 VAR_12->rls_cmd = VAR_2;
 VAR_13 = &VAR_12->rls_lesb;
 if (VAR_9->tt.get_lesb) {

  VAR_9->tt.get_lesb(VAR_9, VAR_13);
 } else {
  FUNC_5(VAR_9->host);
  VAR_15 = &VAR_9->host_stats;
  VAR_13->lesb_link_fail = FUNC_8(VAR_15->link_failure_count);
  VAR_13->lesb_sync_loss = FUNC_8(VAR_15->loss_of_sync_count);
  VAR_13->lesb_sig_loss = FUNC_8(VAR_15->loss_of_signal_count);
  VAR_13->lesb_prim_err = FUNC_8(VAR_15->prim_seq_protocol_err_count);
  VAR_13->lesb_inv_word = FUNC_8(VAR_15->invalid_tx_word_count);
  VAR_13->lesb_inv_crc = FUNC_8(VAR_15->invalid_crc_count);
 }

 FUNC_1(VAR_10, VAR_8, VAR_6, 0);
 VAR_9->tt.frame_send(VAR_9, VAR_10);
 goto out;

out_rjt:
 FUNC_7(VAR_8, VAR_3, &VAR_14);
out:
 FUNC_3(VAR_8);
}
