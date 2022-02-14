
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wwn_t ;
typedef int u16 ;
struct TYPE_5__ {int pwwn; } ;
struct bfa_fcs_lport_s {TYPE_1__ port_cfg; } ;
struct bfa_fcs_vport_s {struct bfa_fcs_lport_s lport; } ;
struct bfa_fcs_s {int dummy; } ;
struct TYPE_6__ {struct bfa_fcs_lport_s bport; } ;
typedef TYPE_2__ bfa_fcs_vf_t ;


 int FUNC_0 (int ) ;
 struct bfa_fcs_vport_s* FUNC_1 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_2 (struct bfa_fcs_s*,int ) ;
 int FUNC_3 (struct bfa_fcs_s*,int ) ;

struct bfa_fcs_lport_s *
FUNC_4(struct bfa_fcs_s *VAR_0, u16 VAR_1, wwn_t VAR_2)
{
 struct bfa_fcs_vport_s *VAR_3;
 bfa_fcs_vf_t *VAR_4;

 FUNC_0(VAR_0 == ((void*)0));

 VAR_4 = FUNC_2(VAR_0, VAR_1);
 if (VAR_4 == ((void*)0)) {
  FUNC_3(VAR_0, VAR_1);
  return ((void*)0);
 }

 if (!VAR_2 || (VAR_4->bport.port_cfg.pwwn == VAR_2))
  return &VAR_4->bport;

 VAR_3 = FUNC_1(VAR_4, VAR_2);
 if (VAR_3)
  return &VAR_3->lport;

 return ((void*)0);
}
