
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct fc_seq_els_data {void* explan; int reason; } ;
struct TYPE_3__ {void* port_name; void* node_name; } ;
struct fc_rport_priv {int rp_state; int rp_mutex; int maxframe_size; TYPE_1__ ids; } ;
struct TYPE_4__ {int (* frame_send ) (struct fc_lport*,struct fc_frame*) ;} ;
struct fc_disc {int disc_mutex; } ;
struct fc_lport {TYPE_2__ tt; int mfs; void* wwpn; struct fc_disc disc; int lp_mutex; } ;
struct fc_frame {int dummy; } ;
struct fc_els_flogi {int fl_wwnn; int fl_wwpn; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct fc_rport_priv*,char*,...) ;
 int FUNC_1 (struct fc_lport*,int ,char*) ;
 int FUNC_2 (struct fc_frame*,struct fc_frame*,int ,int ) ;
 struct fc_frame* FUNC_3 (struct fc_lport*,int) ;
 int FUNC_4 (struct fc_frame*) ;
 struct fc_els_flogi* FUNC_5 (struct fc_frame*,int) ;
 int FUNC_6 (struct fc_frame*) ;
 int FUNC_7 (struct fc_lport*,struct fc_frame*,int ) ;
 int FUNC_8 (struct fc_els_flogi*,int ) ;
 int FUNC_9 (struct fc_lport*,struct fc_rport_priv*) ;
 struct fc_rport_priv* FUNC_10 (struct fc_lport*,int ) ;
 int FUNC_11 (struct fc_rport_priv*) ;
 int FUNC_12 (struct fc_rport_priv*) ;
 int FUNC_13 (struct fc_frame*,int ,struct fc_seq_els_data*) ;
 void* FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct fc_lport*,struct fc_frame*) ;

__attribute__((used)) static void FUNC_19(struct fc_lport *VAR_11,
        struct fc_frame *VAR_12)
{
 struct fc_disc *VAR_13;
 struct fc_rport_priv *VAR_14;
 struct fc_frame *VAR_15 = VAR_12;
 struct fc_els_flogi *VAR_16;
 struct fc_seq_els_data VAR_17;
 u32 VAR_18;

 FUNC_15(&VAR_11->lp_mutex);

 VAR_18 = FUNC_6(VAR_15);

 FUNC_1(VAR_11, VAR_18, "Received PLOGI request\n");

 VAR_16 = FUNC_5(VAR_15, sizeof(*VAR_16));
 if (!VAR_16) {
  FUNC_1(VAR_11, VAR_18, "Received PLOGI too short\n");
  VAR_17.reason = VAR_8;
  VAR_17.explan = VAR_1;
  goto reject;
 }

 VAR_13 = &VAR_11->disc;
 FUNC_16(&VAR_13->disc_mutex);
 VAR_14 = FUNC_10(VAR_11, VAR_18);
 if (!VAR_14) {
  FUNC_17(&VAR_13->disc_mutex);
  VAR_17.reason = VAR_9;
  VAR_17.explan = VAR_0;
  goto reject;
 }

 FUNC_16(&VAR_14->rp_mutex);
 FUNC_17(&VAR_13->disc_mutex);

 VAR_14->ids.port_name = FUNC_14(&VAR_16->fl_wwpn);
 VAR_14->ids.node_name = FUNC_14(&VAR_16->fl_wwnn);
 switch (VAR_14->rp_state) {
 case 133:
  FUNC_0(VAR_14, "Received PLOGI in INIT state\n");
  break;
 case 131:
  FUNC_0(VAR_14, "Received PLOGI in PLOGI_WAIT state\n");
  break;
 case 132:
  FUNC_0(VAR_14, "Received PLOGI in PLOGI state\n");
  if (VAR_14->ids.port_name < VAR_11->wwpn) {
   FUNC_17(&VAR_14->rp_mutex);
   VAR_17.reason = VAR_6;
   VAR_17.explan = VAR_2;
   goto reject;
  }
  break;
 case 130:
 case 128:
 case 129:
 case 136:
  FUNC_0(VAR_14, "Received PLOGI in logged-in state %d "
        "- ignored for now\n", VAR_14->rp_state);

  break;
 case 134:
 case 135:
  FUNC_0(VAR_14, "Received PLOGI in state %s - send busy\n",
        FUNC_12(VAR_14));
  FUNC_17(&VAR_14->rp_mutex);
  VAR_17.reason = VAR_5;
  VAR_17.explan = VAR_2;
  goto reject;
 }
 if (!FUNC_9(VAR_11, VAR_14)) {
  FUNC_0(VAR_14, "Received PLOGI for incompatible role\n");
  FUNC_17(&VAR_14->rp_mutex);
  VAR_17.reason = VAR_7;
  VAR_17.explan = VAR_2;
  goto reject;
 }




 VAR_14->maxframe_size = FUNC_8(VAR_16, VAR_11->mfs);




 VAR_15 = FUNC_3(VAR_11, sizeof(*VAR_16));
 if (!VAR_15)
  goto out;

 FUNC_7(VAR_11, VAR_15, VAR_3);
 FUNC_2(VAR_15, VAR_12, VAR_10, 0);
 VAR_11->tt.frame_send(VAR_11, VAR_15);
 FUNC_11(VAR_14);
out:
 FUNC_17(&VAR_14->rp_mutex);
 FUNC_4(VAR_12);
 return;

reject:
 FUNC_13(VAR_15, VAR_4, &VAR_17);
 FUNC_4(VAR_15);
}
