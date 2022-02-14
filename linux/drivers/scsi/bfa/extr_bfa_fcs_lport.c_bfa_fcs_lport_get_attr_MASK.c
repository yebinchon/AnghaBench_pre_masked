
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bfa_lport_attr_s {int state; int port_type; int fpma_mac; int fabric_ip_addr; int fabric_name; void* authfail; void* loopback; int port_cfg; scalar_t__ pid; } ;
struct bfa_fcs_lport_s {TYPE_3__* lps; struct bfa_fcs_lport_s* fabric; TYPE_2__* vport; int oper_type; int port_cfg; scalar_t__ pid; } ;
struct TYPE_6__ {int lp_mac; } ;
struct TYPE_5__ {TYPE_1__* lps; } ;
struct TYPE_4__ {int lp_mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bfa_fcs_lport_s*) ;
 int FUNC_1 (struct bfa_fcs_lport_s*) ;
 int VAR_6 ;
 void* FUNC_2 (struct bfa_fcs_lport_s*,int ) ;
 int FUNC_3 (int ,int ,int ) ;

void
FUNC_4(
 struct bfa_fcs_lport_s *VAR_7,
 struct bfa_lport_attr_s *VAR_8)
{
 if (FUNC_2(VAR_7, VAR_6))
  VAR_8->pid = VAR_7->pid;
 else
  VAR_8->pid = 0;

 VAR_8->port_cfg = VAR_7->port_cfg;

 if (VAR_7->fabric) {
  VAR_8->port_type = VAR_7->fabric->oper_type;
  VAR_8->loopback = FUNC_2(VAR_7->fabric,
    VAR_5);
  VAR_8->authfail =
   FUNC_2(VAR_7->fabric,
    VAR_4);
  VAR_8->fabric_name = FUNC_1(VAR_7);
  FUNC_3(VAR_8->fabric_ip_addr,
   FUNC_0(VAR_7),
   VAR_0);

  if (VAR_7->vport != ((void*)0)) {
   VAR_8->port_type = VAR_3;
   VAR_8->fpma_mac =
    VAR_7->vport->lps->lp_mac;
  } else {
   VAR_8->fpma_mac =
    VAR_7->fabric->lps->lp_mac;
  }
 } else {
  VAR_8->port_type = VAR_2;
  VAR_8->state = VAR_1;
 }
}
