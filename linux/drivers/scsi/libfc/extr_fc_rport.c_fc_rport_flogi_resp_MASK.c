
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct fc_seq {int dummy; } ;
struct TYPE_4__ {scalar_t__ port_name; } ;
struct fc_rport_priv {scalar_t__ rp_state; unsigned int r_a_tov; int kref; int rp_mutex; TYPE_2__ ids; struct fc_lport* local_port; } ;
struct fc_lport {scalar_t__ wwpn; } ;
struct fc_frame {int dummy; } ;
struct fc_els_ls_rjt {int er_explan; int er_reason; } ;
struct TYPE_3__ {int sp_r_a_tov; } ;
struct fc_els_flogi {TYPE_1__ fl_csp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct fc_frame* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct fc_rport_priv*,char*,...) ;
 scalar_t__ FUNC_2 (struct fc_frame*) ;
 int FUNC_3 (struct fc_frame*) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 char* FUNC_4 (struct fc_frame*) ;
 int FUNC_5 (struct fc_frame*) ;
 void* FUNC_6 (struct fc_frame*,int) ;
 scalar_t__ FUNC_7 (struct fc_frame*) ;
 int VAR_8 ;
 int FUNC_8 (struct fc_rport_priv*) ;
 int FUNC_9 (struct fc_rport_priv*,int ) ;
 int FUNC_10 (struct fc_rport_priv*,int) ;
 scalar_t__ FUNC_11 (struct fc_rport_priv*,struct fc_frame*) ;
 int FUNC_12 (struct fc_rport_priv*) ;
 int FUNC_13 (struct fc_rport_priv*,int ) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 unsigned int FUNC_17 (int ) ;

__attribute__((used)) static void FUNC_18(struct fc_seq *VAR_9, struct fc_frame *VAR_10,
    void *VAR_11)
{
 struct fc_rport_priv *VAR_12 = VAR_11;
 struct fc_lport *VAR_13 = VAR_12->local_port;
 struct fc_els_flogi *VAR_14;
 unsigned int VAR_15;
 u8 VAR_16;
 int VAR_17 = 0;

 FUNC_1(VAR_12, "Received a FLOGI %s\n",
       FUNC_2(VAR_10) ? "error" : FUNC_4(VAR_10));

 if (VAR_10 == FUNC_0(-VAR_3))
  goto put;

 FUNC_15(&VAR_12->rp_mutex);

 if (VAR_12->rp_state != VAR_6) {
  FUNC_1(VAR_12, "Received a FLOGI response, but in state "
        "%s\n", FUNC_12(VAR_12));
  if (FUNC_2(VAR_10))
   goto err;
  goto out;
 }

 if (FUNC_2(VAR_10)) {
  FUNC_9(VAR_12, FUNC_3(VAR_10));
  goto err;
 }
 VAR_16 = FUNC_7(VAR_10);
 if (VAR_16 == VAR_1) {
  struct fc_els_ls_rjt *VAR_18;

  VAR_18 = FUNC_6(VAR_10, sizeof(*VAR_18));
  FUNC_1(VAR_12, "FLOGI ELS rejected, reason %x expl %x\n",
        VAR_18->er_reason, VAR_18->er_explan);
  VAR_17 = -VAR_4;
  goto bad;
 } else if (VAR_16 != VAR_0) {
  FUNC_1(VAR_12, "FLOGI ELS invalid opcode %x\n", VAR_16);
  VAR_17 = -VAR_4;
  goto bad;
 }
 if (FUNC_11(VAR_12, VAR_10)) {
  FUNC_1(VAR_12, "FLOGI failed, no login\n");
  VAR_17 = -VAR_5;
  goto bad;
 }

 VAR_14 = FUNC_6(VAR_10, sizeof(*VAR_14));
 if (!VAR_14) {
  VAR_17 = -VAR_2;
  goto bad;
 }
 VAR_15 = FUNC_17(VAR_14->fl_csp.sp_r_a_tov);
 if (VAR_15 > VAR_12->r_a_tov)
  VAR_12->r_a_tov = VAR_15;

 if (VAR_12->ids.port_name < VAR_13->wwpn)
  FUNC_8(VAR_12);
 else
  FUNC_13(VAR_12, VAR_7);
out:
 FUNC_5(VAR_10);
err:
 FUNC_16(&VAR_12->rp_mutex);
put:
 FUNC_14(&VAR_12->kref, VAR_8);
 return;
bad:
 FUNC_1(VAR_12, "Bad FLOGI response\n");
 FUNC_10(VAR_12, VAR_17);
 goto out;
}
