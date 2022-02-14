
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_fcs_fabric_s {int dummy; } ;
struct bfa_fcs_s {struct bfa_fcs_fabric_s fabric; } ;


 int VAR_0 ;
 int FUNC_0 (struct bfa_fcs_fabric_s*,int ) ;
 int FUNC_1 (struct bfa_fcs_s*,int ) ;

void
FUNC_2(struct bfa_fcs_s *VAR_1)
{
 struct bfa_fcs_fabric_s *VAR_2;

 FUNC_1(VAR_1, 0);
 VAR_2 = &VAR_1->fabric;
 FUNC_0(VAR_2, VAR_0);
}
