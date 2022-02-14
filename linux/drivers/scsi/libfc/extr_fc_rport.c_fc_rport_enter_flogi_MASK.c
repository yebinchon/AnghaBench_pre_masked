
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int port_id; } ;
struct fc_rport_priv {int kref; TYPE_2__ ids; int rp_mutex; struct fc_lport* local_port; } ;
struct TYPE_3__ {int (* elsct_send ) (struct fc_lport*,int ,struct fc_frame*,int ,int ,struct fc_rport_priv*,int) ;} ;
struct fc_lport {int r_a_tov; TYPE_1__ tt; int point_to_multipoint; } ;
struct fc_frame {int dummy; } ;
struct fc_els_flogi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fc_rport_priv*,char*,int ) ;
 int VAR_3 ;
 struct fc_frame* FUNC_1 (struct fc_lport*,int) ;
 int VAR_4 ;
 void FUNC_2 (struct fc_rport_priv*) ;
 void FUNC_3 (struct fc_rport_priv*,int ) ;
 int VAR_5 ;
 int FUNC_4 (struct fc_rport_priv*) ;
 int FUNC_5 (struct fc_rport_priv*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct fc_lport*,int ,struct fc_frame*,int ,int ,struct fc_rport_priv*,int) ;

__attribute__((used)) static void FUNC_10(struct fc_rport_priv *VAR_6)
{
 struct fc_lport *VAR_7 = VAR_6->local_port;
 struct fc_frame *VAR_8;

 FUNC_8(&VAR_6->rp_mutex);

 if (!VAR_7->point_to_multipoint)
  return FUNC_2(VAR_6);

 FUNC_0(VAR_6, "Entered FLOGI state from %s state\n",
       FUNC_4(VAR_6));

 FUNC_5(VAR_6, VAR_3);

 VAR_8 = FUNC_1(VAR_7, sizeof(struct fc_els_flogi));
 if (!VAR_8)
  return FUNC_3(VAR_6, -VAR_1);

 FUNC_6(&VAR_6->kref);
 if (!VAR_7->tt.elsct_send(VAR_7, VAR_6->ids.port_id, VAR_8, VAR_0,
      VAR_5, VAR_6,
      2 * VAR_7->r_a_tov)) {
  FUNC_3(VAR_6, -VAR_2);
  FUNC_7(&VAR_6->kref, VAR_4);
 }
}
