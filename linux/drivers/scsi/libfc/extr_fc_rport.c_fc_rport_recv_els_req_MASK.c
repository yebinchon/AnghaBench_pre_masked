
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_seq_els_data {int explan; int reason; } ;
struct fc_rport_priv {int rp_state; int kref; int rp_mutex; } ;
struct fc_lport {int lp_mutex; } ;
struct fc_frame {int dummy; } ;



 int VAR_0 ;
 int VAR_1 ;
 int const VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;



 int FUNC_0 (struct fc_rport_priv*,char*,int,...) ;
 int FUNC_1 (struct fc_lport*,int ,char*,int) ;





 int FUNC_2 (struct fc_frame*) ;
 int FUNC_3 (struct fc_frame*) ;
 int FUNC_4 (struct fc_frame*) ;
 int VAR_5 ;
 struct fc_rport_priv* FUNC_5 (struct fc_lport*,int ) ;
 int FUNC_6 (struct fc_rport_priv*,struct fc_frame*) ;
 int FUNC_7 (struct fc_rport_priv*,struct fc_frame*) ;
 int FUNC_8 (struct fc_rport_priv*,struct fc_frame*) ;
 int FUNC_9 (struct fc_rport_priv*,struct fc_frame*) ;
 int FUNC_10 (struct fc_rport_priv*,struct fc_frame*) ;
 int FUNC_11 (struct fc_rport_priv*) ;
 int FUNC_12 (struct fc_frame*,int const,struct fc_seq_els_data*) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static void FUNC_17(struct fc_lport *VAR_6, struct fc_frame *VAR_7)
{
 struct fc_rport_priv *VAR_8;
 struct fc_seq_els_data VAR_9;

 FUNC_14(&VAR_6->lp_mutex);

 VAR_8 = FUNC_5(VAR_6, FUNC_4(VAR_7));
 if (!VAR_8) {
  FUNC_1(VAR_6, FUNC_4(VAR_7),
    "Received ELS 0x%02x from non-logged-in port\n",
    FUNC_3(VAR_7));
  goto reject;
 }

 FUNC_15(&VAR_8->rp_mutex);

 switch (VAR_8->rp_state) {
 case 130:
 case 128:
 case 129:
 case 132:
  break;
 case 131:
  if (FUNC_3(VAR_7) == 138) {
   FUNC_0(VAR_8, "Reject ELS PRLI "
         "while in state %s\n",
         FUNC_11(VAR_8));
   FUNC_16(&VAR_8->rp_mutex);
   FUNC_13(&VAR_8->kref, VAR_5);
   goto busy;
  }

 default:
  FUNC_0(VAR_8,
        "Reject ELS 0x%02x while in state %s\n",
        FUNC_3(VAR_7), FUNC_11(VAR_8));
  FUNC_16(&VAR_8->rp_mutex);
  FUNC_13(&VAR_8->kref, VAR_5);
  goto reject;
 }

 switch (FUNC_3(VAR_7)) {
 case 138:
  FUNC_7(VAR_8, VAR_7);
  break;
 case 137:
  FUNC_8(VAR_8, VAR_7);
  break;
 case 139:
  FUNC_6(VAR_8, VAR_7);
  break;
 case 134:
  FUNC_12(VAR_7, 134, ((void*)0));
  FUNC_2(VAR_7);
  break;
 case 136:
  FUNC_12(VAR_7, 136, ((void*)0));
  FUNC_2(VAR_7);
  break;
 case 135:
  FUNC_9(VAR_8, VAR_7);
  break;
 case 133:
  FUNC_10(VAR_8, VAR_7);
  break;
 default:
  FUNC_2(VAR_7);
  break;
 }

 FUNC_16(&VAR_8->rp_mutex);
 FUNC_13(&VAR_8->kref, VAR_5);
 return;

reject:
 VAR_9.reason = VAR_4;
 VAR_9.explan = VAR_1;
 FUNC_12(VAR_7, VAR_2, &VAR_9);
 FUNC_2(VAR_7);
 return;

busy:
 VAR_9.reason = VAR_3;
 VAR_9.explan = VAR_0;
 FUNC_12(VAR_7, VAR_2, &VAR_9);
 FUNC_2(VAR_7);
 return;
}
