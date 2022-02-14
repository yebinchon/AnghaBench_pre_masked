
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wwn_t ;
struct bfa_fcs_rport_s {int dummy; } ;
struct bfa_fcs_lport_s {int fcs; } ;


 int VAR_0 ;
 struct bfa_fcs_rport_s* FUNC_0 (struct bfa_fcs_lport_s*,int ,int ) ;
 int FUNC_1 (struct bfa_fcs_rport_s*,int ) ;
 int FUNC_2 (int ,int ) ;

struct bfa_fcs_rport_s *
FUNC_3(struct bfa_fcs_lport_s *VAR_1, wwn_t VAR_2)
{
 struct bfa_fcs_rport_s *VAR_3;
 FUNC_2(VAR_1->fcs, VAR_2);
 VAR_3 = FUNC_0(VAR_1, VAR_2, 0);
 if (!VAR_3)
  return ((void*)0);

 FUNC_1(VAR_3, VAR_0);
 return VAR_3;
}
