
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fc_seq_els_data {int explan; int reason; } ;
struct fc_rport_priv {int rp_mutex; struct fc_lport* local_port; } ;
struct TYPE_2__ {int (* frame_send ) (struct fc_lport*,struct fc_frame*) ;} ;
struct fc_lport {TYPE_1__ tt; int e_d_tov; int r_a_tov; int lp_mutex; } ;
struct fc_frame {int dummy; } ;
struct fc_els_rtv_acc {scalar_t__ rtv_toq; void* rtv_e_d_tov; void* rtv_r_a_tov; int rtv_cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct fc_rport_priv*,char*) ;
 int FUNC_1 (struct fc_frame*,struct fc_frame*,int ,int ) ;
 struct fc_frame* FUNC_2 (struct fc_lport*,int) ;
 int FUNC_3 (struct fc_frame*) ;
 struct fc_els_rtv_acc* FUNC_4 (struct fc_frame*,int) ;
 int FUNC_5 (struct fc_frame*,int ,struct fc_seq_els_data*) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct fc_lport*,struct fc_frame*) ;

__attribute__((used)) static void FUNC_9(struct fc_rport_priv *VAR_5,
      struct fc_frame *VAR_6)
{
 struct fc_lport *VAR_7 = VAR_5->local_port;
 struct fc_frame *VAR_8;
 struct fc_els_rtv_acc *VAR_9;
 struct fc_seq_els_data VAR_10;

 FUNC_7(&VAR_5->rp_mutex);
 FUNC_7(&VAR_7->lp_mutex);

 FUNC_0(VAR_5, "Received RTV request\n");

 VAR_8 = FUNC_2(VAR_7, sizeof(*VAR_9));
 if (!VAR_8) {
  VAR_10.reason = VAR_3;
  VAR_10.explan = VAR_0;
  FUNC_5(VAR_6, VAR_2, &VAR_10);
  goto drop;
 }
 VAR_9 = FUNC_4(VAR_8, sizeof(*VAR_9));
 VAR_9->rtv_cmd = VAR_1;
 VAR_9->rtv_r_a_tov = FUNC_6(VAR_7->r_a_tov);
 VAR_9->rtv_e_d_tov = FUNC_6(VAR_7->e_d_tov);
 VAR_9->rtv_toq = 0;
 FUNC_1(VAR_8, VAR_6, VAR_4, 0);
 VAR_7->tt.frame_send(VAR_7, VAR_8);
drop:
 FUNC_3(VAR_6);
}
