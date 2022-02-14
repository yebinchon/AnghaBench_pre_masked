
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16 ;
struct fchs_s {int ox_id; int s_id; int d_id; } ;
struct TYPE_7__ {scalar_t__ target; } ;
struct TYPE_8__ {int type; TYPE_2__ servparams; } ;
struct fc_prli_s {TYPE_3__ parampage; } ;
struct bfa_fcxp_s {int dummy; } ;
struct TYPE_6__ {int prli_rcvd; } ;
struct bfa_fcs_rport_s {int itnim; int scsi_function; int fcs; TYPE_1__ stats; struct bfa_fcs_lport_s* port; } ;
struct TYPE_9__ {int roles; } ;
struct bfa_fcs_lport_s {int lp_tag; TYPE_5__* fabric; TYPE_4__ port_cfg; int fcs; } ;
struct TYPE_10__ {int vf_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct bfa_fcxp_s* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bfa_fcs_lport_s*) ;
 int FUNC_3 (struct bfa_fcxp_s*) ;
 int FUNC_4 (struct bfa_fcxp_s*,int *,int ,int ,int ,int ,int ,struct fchs_s*,int *,int *,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct fchs_s*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_7(struct bfa_fcs_rport_s *VAR_5,
   struct fchs_s *VAR_6, u16 VAR_7)
{
 struct bfa_fcxp_s *VAR_8;
 struct fchs_s VAR_9;
 struct bfa_fcs_lport_s *VAR_10 = VAR_5->port;
 struct fc_prli_s *VAR_11;

 FUNC_5(VAR_10->fcs, VAR_6->s_id);
 FUNC_5(VAR_10->fcs, VAR_6->d_id);

 VAR_5->stats.prli_rcvd++;




 VAR_11 = (struct fc_prli_s *) (VAR_6 + 1);

 if (VAR_11->parampage.servparams.target) {






  FUNC_5(VAR_10->fcs, VAR_6->s_id);
  VAR_5->scsi_function = VAR_2;
 } else {
  FUNC_5(VAR_5->fcs, VAR_11->parampage.type);
  VAR_5->scsi_function = VAR_1;
  FUNC_1(VAR_5->itnim);
 }

 VAR_8 = FUNC_0(VAR_10->fcs, VAR_0);
 if (!VAR_8)
  return;

 VAR_7 = FUNC_6(&VAR_9, FUNC_3(VAR_8),
    VAR_6->s_id, FUNC_2(VAR_10),
    VAR_6->ox_id, VAR_10->port_cfg.roles);

 FUNC_4(VAR_8, ((void*)0), VAR_10->fabric->vf_id, VAR_10->lp_tag, VAR_0,
   VAR_3, VAR_7, &VAR_9, ((void*)0), ((void*)0), VAR_4, 0);
}
