
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct bfa_fcs_vport_s {TYPE_2__* lps; } ;
struct bfa_fcs_s {int dummy; } ;
struct bfa_fcs_lport_s {scalar_t__ num_rports; int rport_q; TYPE_3__* fabric; int lp_tag; struct bfa_fcs_vport_s* vport; struct bfa_fcs_s* fcs; } ;
struct TYPE_6__ {TYPE_1__* lps; } ;
struct TYPE_5__ {int bfa_tag; } ;
struct TYPE_4__ {int bfa_tag; } ;


 int FUNC_0 (int *) ;
 TYPE_3__* FUNC_1 (struct bfa_fcs_s*,int ) ;

void
FUNC_2(struct bfa_fcs_lport_s *VAR_0, struct bfa_fcs_s *VAR_1,
     u16 VAR_2, struct bfa_fcs_vport_s *VAR_3)
{
 VAR_0->fcs = VAR_1;
 VAR_0->fabric = FUNC_1(VAR_1, VAR_2);
 VAR_0->vport = VAR_3;
 VAR_0->lp_tag = (VAR_3) ? VAR_3->lps->bfa_tag :
      VAR_0->fabric->lps->bfa_tag;

 FUNC_0(&VAR_0->rport_q);
 VAR_0->num_rports = 0;
}
