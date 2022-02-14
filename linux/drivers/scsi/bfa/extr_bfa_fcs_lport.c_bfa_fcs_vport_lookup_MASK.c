
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wwn_t ;
typedef int u16 ;
struct bfa_fcs_vport_s {int dummy; } ;
struct bfa_fcs_s {int dummy; } ;
struct bfa_fcs_fabric_s {int dummy; } ;


 struct bfa_fcs_vport_s* FUNC_0 (struct bfa_fcs_fabric_s*,int ) ;
 struct bfa_fcs_fabric_s* FUNC_1 (struct bfa_fcs_s*,int ) ;
 int FUNC_2 (struct bfa_fcs_s*,int ) ;

struct bfa_fcs_vport_s *
FUNC_3(struct bfa_fcs_s *VAR_0, u16 VAR_1, wwn_t VAR_2)
{
 struct bfa_fcs_vport_s *VAR_3;
 struct bfa_fcs_fabric_s *VAR_4;

 FUNC_2(VAR_0, VAR_1);
 FUNC_2(VAR_0, VAR_2);

 VAR_4 = FUNC_1(VAR_0, VAR_1);
 if (!VAR_4) {
  FUNC_2(VAR_0, VAR_1);
  return ((void*)0);
 }

 VAR_3 = FUNC_0(VAR_4, VAR_2);
 return VAR_3;
}
