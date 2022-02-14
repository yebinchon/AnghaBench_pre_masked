
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ port_id; } ;
struct TYPE_4__ {TYPE_1__ ids; } ;
struct fcoe_rport {TYPE_2__ rdata; } ;
struct fcoe_ctlr {scalar_t__ port_id; int state; } ;







 int FUNC_0 (struct fcoe_ctlr*,char*,...) ;
 int FUNC_1 (struct fcoe_ctlr*) ;
 int FUNC_2 (struct fcoe_ctlr*) ;

__attribute__((used)) static void FUNC_3(struct fcoe_ctlr *VAR_0,
         struct fcoe_rport *VAR_1)
{
 if (VAR_1->rdata.ids.port_id != VAR_0->port_id)
  return;
 switch (VAR_0->state) {
 case 129:
 case 131:
 case 130:
 case 132:
  FUNC_0(VAR_0, "vn_probe_reply: restart state %x\n",
    VAR_0->state);
  FUNC_1(VAR_0);
  break;
 case 128:
  FUNC_0(VAR_0, "vn_probe_reply: send claim notify\n");
  FUNC_2(VAR_0);
  break;
 default:
  break;
 }
}
