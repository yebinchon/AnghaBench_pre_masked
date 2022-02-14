
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ port_id; int port_name; } ;
struct TYPE_6__ {TYPE_2__ ids; } ;
struct fcoe_rport {int flags; int enode_mac; TYPE_3__ rdata; } ;
struct fcoe_ctlr {scalar_t__ port_id; int state; TYPE_1__* lp; } ;
struct TYPE_4__ {int wwpn; } ;


 int VAR_0 ;
 int VAR_1 ;





 int FUNC_0 (struct fcoe_ctlr*,char*,...) ;
 int FUNC_1 (struct fcoe_ctlr*) ;
 int FUNC_2 (struct fcoe_ctlr*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct fcoe_ctlr *VAR_2,
       struct fcoe_rport *VAR_3)
{
 if (VAR_3->rdata.ids.port_id != VAR_2->port_id)
  return;

 switch (VAR_2->state) {
 case 132:
 case 128:
  FUNC_0(VAR_2, "vn_probe_req: send reply, state %x\n",
    VAR_2->state);
  FUNC_2(VAR_2, VAR_1,
      VAR_3->enode_mac, 0);
  break;
 case 131:
 case 130:







  if (VAR_2->lp->wwpn > VAR_3->rdata.ids.port_name &&
      !(VAR_3->flags & VAR_0)) {
   FUNC_0(VAR_2, "vn_probe_req: "
     "port_id collision\n");
   FUNC_2(VAR_2, VAR_1,
       VAR_3->enode_mac, 0);
   break;
  }

 case 129:
  FUNC_0(VAR_2, "vn_probe_req: "
    "restart VN2VN negotiation\n");
  FUNC_1(VAR_2);
  break;
 default:
  FUNC_0(VAR_2, "vn_probe_req: ignore state %x\n",
    VAR_2->state);
  break;
 }
}
