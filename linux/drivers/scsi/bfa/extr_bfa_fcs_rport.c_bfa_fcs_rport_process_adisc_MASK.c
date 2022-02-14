
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct fchs_s {int ox_id; int s_id; int d_id; } ;
struct fc_adisc_s {int dummy; } ;
struct bfa_fcxp_s {int dummy; } ;
struct TYPE_6__ {int adisc_rejected; int adisc_rcvd; } ;
struct bfa_fcs_rport_s {TYPE_3__ stats; int itnim; struct bfa_fcs_lport_s* port; } ;
struct TYPE_4__ {int nwwn; int pwwn; } ;
struct bfa_fcs_lport_s {int lp_tag; TYPE_2__* fabric; TYPE_1__ port_cfg; int fcs; } ;
struct TYPE_5__ {int vf_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct bfa_fcxp_s* FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct bfa_fcs_lport_s*) ;
 int FUNC_3 (struct bfa_fcs_rport_s*,struct fchs_s*,int ,int ) ;
 int FUNC_4 (struct bfa_fcxp_s*) ;
 int FUNC_5 (struct bfa_fcxp_s*,int *,int ,int ,int ,int ,int ,struct fchs_s*,int *,int *,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct fchs_s*,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_8(struct bfa_fcs_rport_s *VAR_6,
   struct fchs_s *VAR_7, u16 VAR_8)
{
 struct bfa_fcxp_s *VAR_9;
 struct fchs_s VAR_10;
 struct bfa_fcs_lport_s *VAR_11 = VAR_6->port;
 struct fc_adisc_s *VAR_12;

 FUNC_6(VAR_11->fcs, VAR_7->s_id);
 FUNC_6(VAR_11->fcs, VAR_7->d_id);

 VAR_6->stats.adisc_rcvd++;

 VAR_12 = (struct fc_adisc_s *) (VAR_7 + 1);





 if (FUNC_1(VAR_6->itnim) == VAR_1) {

  VAR_9 = FUNC_0(VAR_11->fcs, VAR_0);
  if (!VAR_9)
   return;

  VAR_8 = FUNC_7(&VAR_10, FUNC_4(VAR_9),
    VAR_7->s_id, FUNC_2(VAR_11),
    VAR_7->ox_id, VAR_11->port_cfg.pwwn,
    VAR_11->port_cfg.nwwn);

  FUNC_5(VAR_9, ((void*)0), VAR_11->fabric->vf_id, VAR_11->lp_tag,
    VAR_0, VAR_2, VAR_8, &VAR_10, ((void*)0), ((void*)0),
    VAR_5, 0);
 } else {
  VAR_6->stats.adisc_rejected++;
  FUNC_3(VAR_6, VAR_7,
       VAR_4,
       VAR_3);
 }
}
