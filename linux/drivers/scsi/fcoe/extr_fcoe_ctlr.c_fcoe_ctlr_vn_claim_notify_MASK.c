
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int port_id; int port_name; } ;
struct TYPE_6__ {TYPE_2__ ids; } ;
struct fcoe_rport {int flags; TYPE_3__ rdata; int fcoe_len; int enode_mac; } ;
struct fcoe_ctlr {int state; int port_id; TYPE_1__* lp; } ;
struct TYPE_4__ {int wwpn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int FUNC_0 (struct fcoe_ctlr*,char*,...) ;
 int VAR_3 ;
 int FUNC_1 (struct fcoe_ctlr*) ;
 int FUNC_2 (struct fcoe_ctlr*,struct fcoe_rport*) ;
 int FUNC_3 (struct fcoe_ctlr*) ;
 int FUNC_4 (struct fcoe_ctlr*,int ,int ,int ) ;
 int FUNC_5 (struct fcoe_ctlr*) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(struct fcoe_ctlr *VAR_4,
          struct fcoe_rport *VAR_5)
{
 if (VAR_5->flags & VAR_0) {
  FUNC_0(VAR_4, "send probe req for P2P/REC\n");
  FUNC_4(VAR_4, VAR_2, VAR_3, 0);
  return;
 }
 switch (VAR_4->state) {
 case 129:
 case 131:
 case 130:
  if (VAR_5->rdata.ids.port_id == VAR_4->port_id) {
   FUNC_0(VAR_4, "vn_claim_notify: "
     "restart, state %d\n",
     VAR_4->state);
   FUNC_3(VAR_4);
  }
  break;
 case 132:
 case 128:
  if (VAR_5->rdata.ids.port_id == VAR_4->port_id) {
   if (VAR_5->rdata.ids.port_name > VAR_4->lp->wwpn) {
    FUNC_0(VAR_4, "vn_claim_notify: "
      "restart, port_id collision\n");
    FUNC_3(VAR_4);
    break;
   }
   FUNC_0(VAR_4, "vn_claim_notify: "
     "send claim notify\n");
   FUNC_5(VAR_4);
   break;
  }
  FUNC_0(VAR_4, "vn_claim_notify: send reply to %x\n",
    VAR_5->rdata.ids.port_id);
  FUNC_4(VAR_4, VAR_1, VAR_5->enode_mac,
      FUNC_6((u32)VAR_5->fcoe_len,
          FUNC_1(VAR_4)));
  FUNC_2(VAR_4, VAR_5);
  break;
 default:
  FUNC_0(VAR_4, "vn_claim_notify: "
    "ignoring claim from %x\n",
    VAR_5->rdata.ids.port_id);
  break;
 }
}
