
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct fchs_s {int dummy; } ;
struct bfa_fcxp_s {int dummy; } ;
struct bfa_fcs_rport_s {int bfa_rport; int pid; int pwwn; struct bfa_fcs_lport_s* port; } ;
struct bfa_fcs_lport_s {int lp_tag; TYPE_1__* fabric; TYPE_3__* fcs; } ;
struct TYPE_5__ {int prli_sent; int fcxp_alloc_wait; } ;
struct bfa_fcs_itnim_s {TYPE_2__ stats; struct bfa_fcs_rport_s* rport; struct bfa_fcxp_s* fcxp; int fcxp_wqe; int fcs; } ;
struct TYPE_6__ {int bfa; } ;
struct TYPE_4__ {int vf_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct bfa_fcxp_s* FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (int ,int *,void (*) (void*,struct bfa_fcxp_s*),struct bfa_fcs_itnim_s*,int ) ;
 int VAR_6 ;
 int FUNC_2 (struct bfa_fcs_lport_s*) ;
 int FUNC_3 (struct bfa_fcxp_s*) ;
 int FUNC_4 (struct bfa_fcxp_s*,int ,int ,int ,int ,int ,int,struct fchs_s*,int ,void*,int ,int ) ;
 int FUNC_5 (struct bfa_fcs_itnim_s*,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct fchs_s*,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_8(void *VAR_7, struct bfa_fcxp_s *VAR_8)
{
 struct bfa_fcs_itnim_s *VAR_9 = VAR_7;
 struct bfa_fcs_rport_s *VAR_10 = VAR_9->rport;
 struct bfa_fcs_lport_s *VAR_11 = VAR_10->port;
 struct fchs_s VAR_12;
 struct bfa_fcxp_s *VAR_13;
 int VAR_14;

 FUNC_6(VAR_9->fcs, VAR_9->rport->pwwn);

 VAR_13 = VAR_8 ? VAR_8 :
        FUNC_0(VAR_11->fcs, VAR_2);
 if (!VAR_13) {
  VAR_9->stats.fcxp_alloc_wait++;
  FUNC_1(VAR_11->fcs->bfa, &VAR_9->fcxp_wqe,
    FUNC_8, VAR_9, VAR_2);
  return;
 }
 VAR_9->fcxp = VAR_13;

 VAR_14 = FUNC_7(&VAR_12, FUNC_3(VAR_13),
       VAR_9->rport->pid, FUNC_2(VAR_11), 0);

 FUNC_4(VAR_13, VAR_10->bfa_rport, VAR_11->fabric->vf_id, VAR_11->lp_tag,
        VAR_0, VAR_3, VAR_14, &VAR_12,
        VAR_6, (void *)VAR_9,
        VAR_5, VAR_4);

 VAR_9->stats.prli_sent++;
 FUNC_5(VAR_9, VAR_1);
}
