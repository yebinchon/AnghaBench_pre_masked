
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct fchs_s {int type; int ox_id; } ;
struct fc_els_cmd_s {int els_code; } ;
struct bfa_fcs_itnim_s {int rport; int fcs; } ;



 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;

void
FUNC_3(struct bfa_fcs_itnim_s *VAR_1,
   struct fchs_s *VAR_2, u16 VAR_3)
{
 struct fc_els_cmd_s *VAR_4;

 FUNC_2(VAR_1->fcs, VAR_2->type);

 if (VAR_2->type != VAR_0)
  return;

 VAR_4 = (struct fc_els_cmd_s *) (VAR_2 + 1);

 FUNC_2(VAR_1->fcs, VAR_4->els_code);

 switch (VAR_4->els_code) {
 case 128:
  FUNC_1(VAR_1->rport, VAR_2->ox_id);
  break;

 default:
  FUNC_0(1);
 }
}
