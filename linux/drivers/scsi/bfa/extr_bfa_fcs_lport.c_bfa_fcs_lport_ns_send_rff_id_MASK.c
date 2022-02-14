
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct fchs_s {int dummy; } ;
struct bfa_fcxp_s {int dummy; } ;
struct TYPE_8__ {int ns_rffid_sent; int ns_rffid_alloc_wait; } ;
struct TYPE_6__ {int pwwn; } ;
struct bfa_fcs_lport_s {TYPE_3__ stats; int lp_tag; TYPE_2__* fabric; TYPE_4__* fcs; TYPE_1__ port_cfg; } ;
struct bfa_fcs_lport_ns_s {struct bfa_fcs_lport_s* port; struct bfa_fcxp_s* fcxp; int fcxp_wqe; } ;
struct TYPE_9__ {int bfa; } ;
struct TYPE_7__ {int vf_id; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bfa_fcs_lport_s*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct bfa_fcxp_s* FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (int ,int *,void (*) (void*,struct bfa_fcxp_s*),struct bfa_fcs_lport_ns_s*,int ) ;
 int FUNC_3 (struct bfa_fcs_lport_s*) ;
 int VAR_8 ;
 int FUNC_4 (struct bfa_fcxp_s*) ;
 int FUNC_5 (struct bfa_fcxp_s*,int *,int ,int ,int ,int ,int,struct fchs_s*,int ,void*,int ,int ) ;
 int FUNC_6 (struct bfa_fcs_lport_ns_s*,int ) ;
 int FUNC_7 (TYPE_4__*,int ) ;
 int FUNC_8 (struct fchs_s*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_9(void *VAR_9, struct bfa_fcxp_s *VAR_10)
{
 struct bfa_fcs_lport_ns_s *VAR_11 = VAR_9;
 struct bfa_fcs_lport_s *VAR_12 = VAR_11->port;
 struct fchs_s VAR_13;
 int VAR_14;
 struct bfa_fcxp_s *VAR_15;
 u8 VAR_16 = 0;

 FUNC_7(VAR_12->fcs, VAR_12->port_cfg.pwwn);

 VAR_15 = VAR_10 ? VAR_10 :
        FUNC_1(VAR_12->fcs, VAR_1);
 if (!VAR_15) {
  VAR_12->stats.ns_rffid_alloc_wait++;
  FUNC_2(VAR_12->fcs->bfa, &VAR_11->fcxp_wqe,
    FUNC_9, VAR_11, VAR_1);
  return;
 }
 VAR_11->fcxp = VAR_15;

 if (FUNC_0(VAR_11->port))
  VAR_16 = VAR_4;

 VAR_14 = FUNC_8(&VAR_13, FUNC_4(VAR_15),
        FUNC_3(VAR_12), 0,
     VAR_6, VAR_16);

 FUNC_5(VAR_15, ((void*)0), VAR_12->fabric->vf_id, VAR_12->lp_tag, VAR_0,
     VAR_2, VAR_14, &VAR_13,
     VAR_8, (void *)VAR_11,
     VAR_5, VAR_3);

 VAR_12->stats.ns_rffid_sent++;
 FUNC_6(VAR_11, VAR_7);
}
