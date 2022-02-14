
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_5__ {scalar_t__ port_id; int port_name; int node_name; } ;
struct TYPE_6__ {TYPE_2__ ids; } ;
struct fcoe_rport {scalar_t__ time; int vn_mac; int enode_mac; int login_count; int flags; scalar_t__ fcoe_len; TYPE_3__ rdata; } ;
struct fcoe_ctlr {scalar_t__ port_id; struct fc_lport* lp; } ;
struct fc_rport_identifiers {int port_name; int node_name; } ;
struct fc_rport_priv {int rp_state; int rp_mutex; struct fc_rport_identifiers ids; int disc_id; int * ops; } ;
struct TYPE_4__ {int disc_id; int disc_mutex; } ;
struct fc_lport {TYPE_1__ disc; } ;


 int VAR_0 ;
 int FUNC_0 (struct fcoe_ctlr*,char*,scalar_t__,...) ;
 struct fc_rport_priv* FUNC_1 (struct fc_lport*,scalar_t__) ;
 int FUNC_2 (struct fc_rport_priv*) ;
 struct fcoe_rport* FUNC_3 (struct fc_rport_priv*) ;
 int VAR_1 ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct fcoe_ctlr *VAR_2, struct fcoe_rport *VAR_3)
{
 struct fc_lport *VAR_4 = VAR_2->lp;
 struct fc_rport_priv *VAR_5;
 struct fc_rport_identifiers *VAR_6;
 struct fcoe_rport *VAR_7;
 u32 VAR_8;

 VAR_8 = VAR_3->rdata.ids.port_id;
 if (VAR_8 == VAR_2->port_id)
  return;

 FUNC_5(&VAR_4->disc.disc_mutex);
 VAR_5 = FUNC_1(VAR_4, VAR_8);
 if (!VAR_5) {
  FUNC_6(&VAR_4->disc.disc_mutex);
  return;
 }
 FUNC_5(&VAR_5->rp_mutex);
 FUNC_6(&VAR_4->disc.disc_mutex);

 VAR_5->ops = &VAR_1;
 VAR_5->disc_id = VAR_4->disc.disc_id;

 VAR_6 = &VAR_5->ids;
 if ((VAR_6->port_name != -1 &&
      VAR_6->port_name != VAR_3->rdata.ids.port_name) ||
     (VAR_6->node_name != -1 &&
      VAR_6->node_name != VAR_3->rdata.ids.node_name)) {
  FUNC_6(&VAR_5->rp_mutex);
  FUNC_0(VAR_2, "vn_add rport logoff %6.6x\n", VAR_8);
  FUNC_2(VAR_5);
  FUNC_5(&VAR_5->rp_mutex);
 }
 VAR_6->port_name = VAR_3->rdata.ids.port_name;
 VAR_6->node_name = VAR_3->rdata.ids.node_name;
 FUNC_6(&VAR_5->rp_mutex);

 VAR_7 = FUNC_3(VAR_5);
 FUNC_0(VAR_2, "vn_add rport %6.6x %s state %d\n",
   VAR_8, VAR_7->fcoe_len ? "old" : "new",
   VAR_5->rp_state);
 VAR_7->fcoe_len = VAR_3->fcoe_len;
 VAR_7->flags = VAR_3->flags;
 VAR_7->login_count = VAR_3->login_count;
 FUNC_4(VAR_7->enode_mac, VAR_3->enode_mac, VAR_0);
 FUNC_4(VAR_7->vn_mac, VAR_3->vn_mac, VAR_0);
 VAR_7->time = 0;
}
