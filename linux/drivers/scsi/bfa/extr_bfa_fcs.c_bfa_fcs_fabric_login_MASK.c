
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct bfa_s {int dummy; } ;
struct bfa_lport_cfg_s {int nwwn; int pwwn; } ;
struct TYPE_4__ {int flogi_sent; } ;
struct TYPE_6__ {struct bfa_lport_cfg_s port_cfg; } ;
struct bfa_fcs_fabric_s {TYPE_1__ stats; int auth_reqd; int lps; TYPE_3__ bport; TYPE_2__* fcs; } ;
struct TYPE_5__ {struct bfa_s* bfa; } ;


 int FUNC_0 (struct bfa_s*) ;
 int FUNC_1 (int ,struct bfa_fcs_fabric_s*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct bfa_fcs_fabric_s *VAR_0)
{
 struct bfa_s *VAR_1 = VAR_0->fcs->bfa;
 struct bfa_lport_cfg_s *VAR_2 = &VAR_0->bport.port_cfg;
 u8 VAR_3 = 0;


 FUNC_1(VAR_0->lps, VAR_0, VAR_3, FUNC_0(VAR_1),
        VAR_2->pwwn, VAR_2->nwwn, VAR_0->auth_reqd);

 VAR_0->stats.flogi_sent++;
}
