
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct fc_seq {int dummy; } ;
struct TYPE_2__ {scalar_t__ port_id; scalar_t__ port_name; scalar_t__ node_name; } ;
struct fc_rport_priv {scalar_t__ rp_state; int kref; int rp_mutex; TYPE_1__ ids; } ;
struct fc_frame {int dummy; } ;
struct fc_els_adisc {int adisc_wwnn; int adisc_wwpn; int adisc_port_id; } ;


 scalar_t__ VAR_0 ;
 struct fc_frame* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct fc_rport_priv*,char*,...) ;
 scalar_t__ FUNC_2 (struct fc_frame*) ;
 int FUNC_3 (struct fc_frame*) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (struct fc_frame*) ;
 struct fc_els_adisc* FUNC_5 (struct fc_frame*,int) ;
 scalar_t__ FUNC_6 (struct fc_frame*) ;
 int VAR_3 ;
 int FUNC_7 (struct fc_rport_priv*) ;
 int FUNC_8 (struct fc_rport_priv*) ;
 int FUNC_9 (struct fc_rport_priv*,int ) ;
 int FUNC_10 (struct fc_rport_priv*) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int ) ;

__attribute__((used)) static void FUNC_16(struct fc_seq *VAR_4, struct fc_frame *VAR_5,
    void *VAR_6)
{
 struct fc_rport_priv *VAR_7 = VAR_6;
 struct fc_els_adisc *VAR_8;
 u8 VAR_9;

 FUNC_1(VAR_7, "Received a ADISC response\n");

 if (VAR_5 == FUNC_0(-VAR_1))
  goto put;

 FUNC_13(&VAR_7->rp_mutex);

 if (VAR_7->rp_state != VAR_2) {
  FUNC_1(VAR_7, "Received a ADISC resp but in state %s\n",
        FUNC_10(VAR_7));
  if (FUNC_2(VAR_5))
   goto err;
  goto out;
 }

 if (FUNC_2(VAR_5)) {
  FUNC_9(VAR_7, FUNC_3(VAR_5));
  goto err;
 }






 VAR_9 = FUNC_6(VAR_5);
 VAR_8 = FUNC_5(VAR_5, sizeof(*VAR_8));
 if (VAR_9 != VAR_0 || !VAR_8 ||
     FUNC_15(VAR_8->adisc_port_id) != VAR_7->ids.port_id ||
     FUNC_11(&VAR_8->adisc_wwpn) != VAR_7->ids.port_name ||
     FUNC_11(&VAR_8->adisc_wwnn) != VAR_7->ids.node_name) {
  FUNC_1(VAR_7, "ADISC error or mismatch\n");
  FUNC_7(VAR_7);
 } else {
  FUNC_1(VAR_7, "ADISC OK\n");
  FUNC_8(VAR_7);
 }
out:
 FUNC_4(VAR_5);
err:
 FUNC_14(&VAR_7->rp_mutex);
put:
 FUNC_12(&VAR_7->kref, VAR_3);
}
