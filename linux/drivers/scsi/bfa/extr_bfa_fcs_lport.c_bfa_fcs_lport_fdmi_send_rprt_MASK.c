
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct fchs_s {int dummy; } ;
struct ct_hdr_s {int dummy; } ;
struct bfa_fcxp_s {int dummy; } ;
struct TYPE_7__ {int pwwn; } ;
struct bfa_fcs_lport_s {int lp_tag; TYPE_3__* fabric; TYPE_4__* fcs; TYPE_2__ port_cfg; } ;
struct bfa_fcs_lport_fdmi_s {struct bfa_fcxp_s* fcxp; int fcxp_wqe; TYPE_1__* ms; } ;
struct TYPE_9__ {int bfa; } ;
struct TYPE_8__ {int vf_id; } ;
struct TYPE_6__ {struct bfa_fcs_lport_s* port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct bfa_fcxp_s* FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (int ,int *,void (*) (void*,struct bfa_fcxp_s*),struct bfa_fcs_lport_fdmi_s*,int ) ;
 scalar_t__ FUNC_2 (struct bfa_fcs_lport_fdmi_s*,int *) ;
 int VAR_7 ;
 int FUNC_3 (struct bfa_fcs_lport_s*) ;
 int * FUNC_4 (struct bfa_fcxp_s*) ;
 int FUNC_5 (struct bfa_fcxp_s*,int *,int ,int ,int ,int ,scalar_t__,struct fchs_s*,int ,void*,int ,int ) ;
 int FUNC_6 (struct bfa_fcs_lport_fdmi_s*,int ) ;
 int FUNC_7 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_8 (struct fchs_s*,int *,int ,int ) ;
 int FUNC_9 (int *,int ,int ) ;

__attribute__((used)) static void
FUNC_10(void *VAR_8, struct bfa_fcxp_s *VAR_9)
{
 struct bfa_fcs_lport_fdmi_s *VAR_10 = VAR_8;
 struct bfa_fcs_lport_s *VAR_11 = VAR_10->ms->port;
 struct fchs_s VAR_12;
 u16 VAR_13, VAR_14;
 struct bfa_fcxp_s *VAR_15;
 u8 *VAR_16;

 FUNC_7(VAR_11->fcs, VAR_11->port_cfg.pwwn);

 VAR_15 = VAR_9 ? VAR_9 :
        FUNC_0(VAR_11->fcs, VAR_1);
 if (!VAR_15) {
  FUNC_1(VAR_11->fcs->bfa, &VAR_10->fcxp_wqe,
    FUNC_10, VAR_10, VAR_1);
  return;
 }
 VAR_10->fcxp = VAR_15;

 VAR_16 = FUNC_4(VAR_15);
 FUNC_9(VAR_16, 0, VAR_4);

 VAR_13 = FUNC_8(&VAR_12, VAR_16, FUNC_3(VAR_11),
       VAR_6);

 VAR_14 =
  FUNC_2(VAR_10,
       (u8 *) ((struct ct_hdr_s *) VAR_16
             + 1));

 FUNC_5(VAR_15, ((void*)0), VAR_11->fabric->vf_id, VAR_11->lp_tag, VAR_0,
     VAR_2, VAR_13 + VAR_14, &VAR_12,
     VAR_7, (void *)VAR_10,
     VAR_4, VAR_3);

 FUNC_6(VAR_10, VAR_5);
}
