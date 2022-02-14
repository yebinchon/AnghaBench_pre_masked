
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct fchs_s {int ox_id; int s_id; } ;
struct TYPE_6__ {int bbcred; scalar_t__ port_type; } ;
struct fc_logi_s {int port_name; TYPE_2__ csp; } ;
struct TYPE_7__ {int reply_oxid; int rem_port_wwn; } ;
struct TYPE_8__ {TYPE_3__ pn2n; } ;
struct bfa_fcs_lport_s {TYPE_4__ port_topo; } ;
struct TYPE_5__ {int flogi_rejected; int flogi_rcvd; } ;
struct bfa_fcs_fabric_s {int bb_credit; TYPE_1__ stats; int fcs; struct bfa_fcs_lport_s bport; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct bfa_fcs_fabric_s*) ;
 int FUNC_2 (struct bfa_fcs_fabric_s*,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct bfa_fcs_fabric_s *VAR_1,
   struct fchs_s *VAR_2, u16 VAR_3)
{
 struct fc_logi_s *VAR_4 = (struct fc_logi_s *) (VAR_2 + 1);
 struct bfa_fcs_lport_s *VAR_5 = &VAR_1->bport;

 FUNC_3(VAR_1->fcs, VAR_2->s_id);

 VAR_1->stats.flogi_rcvd++;



 if (VAR_4->csp.port_type) {



  FUNC_3(VAR_1->fcs, VAR_4->port_name);
  VAR_1->stats.flogi_rejected++;
  return;
 }

 VAR_1->bb_credit = FUNC_0(VAR_4->csp.bbcred);
 VAR_5->port_topo.pn2n.rem_port_wwn = VAR_4->port_name;
 VAR_5->port_topo.pn2n.reply_oxid = VAR_2->ox_id;




 FUNC_1(VAR_1);
 FUNC_2(VAR_1, VAR_0);
}
