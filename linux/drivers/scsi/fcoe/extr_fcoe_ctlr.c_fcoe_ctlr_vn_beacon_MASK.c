
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ node_name; scalar_t__ port_name; int port_id; } ;
struct TYPE_6__ {TYPE_2__ ids; } ;
struct fcoe_rport {int flags; TYPE_3__ rdata; scalar_t__ time; } ;
struct fcoe_ctlr {scalar_t__ state; scalar_t__ sol_time; struct fc_lport* lp; } ;
struct TYPE_4__ {scalar_t__ node_name; scalar_t__ port_name; int port_id; } ;
struct fc_rport_priv {int kref; TYPE_1__ ids; } ;
struct fc_lport {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct fcoe_ctlr*,char*,...) ;
 int VAR_4 ;
 int FUNC_1 (struct fc_rport_priv*) ;
 struct fc_rport_priv* FUNC_2 (struct fc_lport*,int ) ;
 int VAR_5 ;
 struct fcoe_rport* FUNC_3 (struct fc_rport_priv*) ;
 int FUNC_4 (struct fcoe_ctlr*,int ,int ,int ) ;
 int FUNC_5 (struct fcoe_ctlr*) ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct fcoe_ctlr *VAR_7,
    struct fcoe_rport *VAR_8)
{
 struct fc_lport *VAR_9 = VAR_7->lp;
 struct fc_rport_priv *VAR_10;
 struct fcoe_rport *VAR_11;

 if (VAR_8->flags & VAR_0) {
  FUNC_0(VAR_7, "p2p beacon while in vn2vn mode\n");
  FUNC_4(VAR_7, VAR_1, VAR_5, 0);
  return;
 }
 VAR_10 = FUNC_2(VAR_9, VAR_8->rdata.ids.port_id);
 if (VAR_10) {
  if (VAR_10->ids.node_name == VAR_8->rdata.ids.node_name &&
      VAR_10->ids.port_name == VAR_8->rdata.ids.port_name) {
   VAR_11 = FUNC_3(VAR_10);

   FUNC_0(VAR_7, "beacon from rport %x\n",
     VAR_10->ids.port_id);
   if (!VAR_11->time && VAR_7->state == VAR_2) {
    FUNC_0(VAR_7, "beacon expired "
      "for rport %x\n",
      VAR_10->ids.port_id);
    FUNC_1(VAR_10);
   }
   VAR_11->time = VAR_6;
  }
  FUNC_6(&VAR_10->kref, VAR_4);
  return;
 }
 if (VAR_7->state != VAR_2)
  return;






 FUNC_0(VAR_7, "beacon from new rport %x. sending claim notify\n",
   VAR_8->rdata.ids.port_id);
 if (FUNC_8(VAR_6,
         VAR_7->sol_time + FUNC_7(VAR_3)))
  FUNC_5(VAR_7);
}
