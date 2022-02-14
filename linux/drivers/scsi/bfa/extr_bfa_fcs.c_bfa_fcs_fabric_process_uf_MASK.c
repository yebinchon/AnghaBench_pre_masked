
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct fchs_s {int dummy; } ;
struct fc_els_cmd_s {int els_code; } ;
struct bfa_fcs_fabric_s {int fcs; } ;



 int FUNC_0 (struct bfa_fcs_fabric_s*,struct fchs_s*,int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void
FUNC_2(struct bfa_fcs_fabric_s *VAR_0, struct fchs_s *VAR_1,
     u16 VAR_2)
{
 struct fc_els_cmd_s *VAR_3 = (struct fc_els_cmd_s *) (VAR_1 + 1);

 FUNC_1(VAR_0->fcs, VAR_3->els_code);

 switch (VAR_3->els_code) {
 case 128:
  FUNC_0(VAR_0, VAR_1, VAR_2);
  break;

 default:



  break;
 }
}
