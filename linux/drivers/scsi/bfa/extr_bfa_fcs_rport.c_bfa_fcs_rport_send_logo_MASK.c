
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct fchs_s {int dummy; } ;
struct bfa_fcxp_s {int dummy; } ;
struct TYPE_5__ {int logos; } ;
struct bfa_fcs_rport_s {struct bfa_fcxp_s* fcxp; TYPE_2__ stats; int pid; int fcxp_wqe; struct bfa_fcs_lport_s* port; int fcs; } ;
struct bfa_fcs_lport_s {int lp_tag; TYPE_1__* fabric; TYPE_3__* fcs; } ;
struct TYPE_6__ {int bfa; } ;
struct TYPE_4__ {int vf_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct bfa_fcxp_s* FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (int ,int *,void (*) (void*,struct bfa_fcxp_s*),struct bfa_fcs_rport_s*,int ) ;
 int FUNC_2 (struct bfa_fcs_lport_s*) ;
 int FUNC_3 (struct bfa_fcs_lport_s*) ;
 int FUNC_4 (struct bfa_fcxp_s*) ;
 int FUNC_5 (struct bfa_fcxp_s*) ;
 int FUNC_6 (struct bfa_fcxp_s*,int *,int ,int ,int ,int ,int ,struct fchs_s*,int *,struct bfa_fcs_rport_s*,int ,int ) ;
 int FUNC_7 (struct bfa_fcs_rport_s*,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct fchs_s*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_10(void *VAR_5, struct bfa_fcxp_s *VAR_6)
{
 struct bfa_fcs_rport_s *VAR_7 = VAR_5;
 struct bfa_fcs_lport_s *VAR_8;
 struct fchs_s VAR_9;
 struct bfa_fcxp_s *VAR_10;
 u16 VAR_11;

 FUNC_8(VAR_7->fcs, VAR_7->pid);

 VAR_8 = VAR_7->port;

 VAR_10 = VAR_6 ? VAR_6 :
        FUNC_0(VAR_8->fcs, VAR_0);
 if (!VAR_10) {
  FUNC_1(VAR_8->fcs->bfa, &VAR_7->fcxp_wqe,
    FUNC_10, VAR_7, VAR_0);
  return;
 }
 VAR_7->fcxp = VAR_10;

 VAR_11 = FUNC_9(&VAR_9, FUNC_5(VAR_10), VAR_7->pid,
    FUNC_2(VAR_8), 0,
    FUNC_3(VAR_8));

 FUNC_6(VAR_10, ((void*)0), VAR_8->fabric->vf_id, VAR_8->lp_tag, VAR_0,
   VAR_1, VAR_11, &VAR_9, ((void*)0),
   VAR_7, VAR_3, VAR_2);

 VAR_7->stats.logos++;
 FUNC_4(VAR_7->fcxp);
 FUNC_7(VAR_7, VAR_4);
}
