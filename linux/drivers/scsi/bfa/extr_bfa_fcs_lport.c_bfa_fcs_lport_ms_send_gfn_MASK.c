
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct fchs_s {int dummy; } ;
struct bfa_fcxp_s {int dummy; } ;
struct bfa_fcs_lport_ms_s {struct bfa_fcxp_s* fcxp; int fcxp_wqe; TYPE_3__* port; } ;
struct TYPE_9__ {int lp_tag; TYPE_2__* fabric; TYPE_4__* fcs; int pid; } ;
typedef TYPE_3__ bfa_fcs_lport_t ;
struct TYPE_10__ {int bfa; } ;
struct TYPE_8__ {int vf_id; TYPE_1__* lps; } ;
struct TYPE_7__ {int pr_nwwn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct bfa_fcxp_s* FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (int ,int *,void (*) (void*,struct bfa_fcxp_s*),struct bfa_fcs_lport_ms_s*,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_6 ;
 int FUNC_3 (struct bfa_fcxp_s*) ;
 int FUNC_4 (struct bfa_fcxp_s*,int *,int ,int ,int ,int ,int,struct fchs_s*,int ,void*,int ,int ) ;
 int FUNC_5 (struct bfa_fcs_lport_ms_s*,int ) ;
 int FUNC_6 (TYPE_4__*,int ) ;
 int FUNC_7 (struct fchs_s*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_8(void *VAR_7, struct bfa_fcxp_s *VAR_8)
{
 struct bfa_fcs_lport_ms_s *VAR_9 = VAR_7;
 bfa_fcs_lport_t *VAR_10 = VAR_9->port;
 struct fchs_s VAR_11;
 int VAR_12;
 struct bfa_fcxp_s *VAR_13;

 FUNC_6(VAR_10->fcs, VAR_10->pid);

 VAR_13 = VAR_8 ? VAR_8 :
        FUNC_0(VAR_10->fcs, VAR_1);
 if (!VAR_13) {
  FUNC_1(VAR_10->fcs->bfa, &VAR_9->fcxp_wqe,
    FUNC_8, VAR_9, VAR_1);
  return;
 }
 VAR_9->fcxp = VAR_13;

 VAR_12 = FUNC_7(&VAR_11, FUNC_3(VAR_13),
        FUNC_2(VAR_10),
     VAR_10->fabric->lps->pr_nwwn);

 FUNC_4(VAR_13, ((void*)0), VAR_10->fabric->vf_id, VAR_10->lp_tag, VAR_0,
     VAR_2, VAR_12, &VAR_11,
     VAR_6, (void *)VAR_9,
     VAR_4, VAR_3);

 FUNC_5(VAR_9, VAR_5);
}
