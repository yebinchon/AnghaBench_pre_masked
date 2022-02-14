
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct fchs_s {int dummy; } ;
struct bfa_fcxp_s {int dummy; } ;
struct bfa_fcs_lport_scn_s {struct bfa_fcxp_s* fcxp; int fcxp_wqe; struct bfa_fcs_lport_s* port; } ;
struct TYPE_7__ {int pwwn; } ;
struct bfa_fcs_lport_s {int lp_tag; TYPE_3__* fabric; int pid; TYPE_4__* fcs; int vport; TYPE_1__ port_cfg; } ;
struct TYPE_11__ {int ioc; } ;
struct TYPE_10__ {TYPE_5__* bfa; } ;
struct TYPE_9__ {int vf_id; TYPE_2__* lps; } ;
struct TYPE_8__ {int brcd_switch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct bfa_fcxp_s* FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_5__*,int *,void (*) (void*,struct bfa_fcxp_s*),struct bfa_fcs_lport_scn_s*,int ) ;
 int VAR_6 ;
 int FUNC_2 (struct bfa_fcxp_s*) ;
 int FUNC_3 (struct bfa_fcxp_s*,int *,int ,int ,int ,int ,int,struct fchs_s*,int ,void*,int ,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (struct bfa_fcs_lport_scn_s*,int ) ;
 int FUNC_6 (TYPE_4__*,int ) ;
 int FUNC_7 (struct fchs_s*,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_8(void *VAR_7, struct bfa_fcxp_s *VAR_8)
{
 struct bfa_fcs_lport_scn_s *VAR_9 = VAR_7;
 struct bfa_fcs_lport_s *VAR_10 = VAR_9->port;
 struct fchs_s VAR_11;
 int VAR_12;
 struct bfa_fcxp_s *VAR_13;

 FUNC_6(VAR_10->fcs, VAR_10->pid);
 FUNC_6(VAR_10->fcs, VAR_10->port_cfg.pwwn);

 VAR_13 = VAR_8 ? VAR_8 :
        FUNC_0(VAR_10->fcs, VAR_1);
 if (!VAR_13) {
  FUNC_1(VAR_10->fcs->bfa, &VAR_9->fcxp_wqe,
    FUNC_8, VAR_9, VAR_1);
  return;
 }
 VAR_9->fcxp = VAR_13;


 if ((!VAR_10->vport) && FUNC_4(&VAR_10->fcs->bfa->ioc)) {
  VAR_12 = FUNC_7(&VAR_11, FUNC_2(VAR_13),
    VAR_10->fabric->lps->brcd_switch,
    VAR_10->pid, 0);
 } else {
     VAR_12 = FUNC_7(&VAR_11, FUNC_2(VAR_13),
        VAR_0,
        VAR_10->pid, 0);
 }

 FUNC_3(VAR_13, ((void*)0), VAR_10->fabric->vf_id, VAR_10->lp_tag, VAR_0,
     VAR_2, VAR_12, &VAR_11,
     VAR_6,
     (void *)VAR_9, VAR_4, VAR_3);

 FUNC_5(VAR_9, VAR_5);
}
