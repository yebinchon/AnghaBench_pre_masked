
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_fcs_vport_s {int lport; int lps; } ;
typedef enum bfa_fcs_vport_event { ____Placeholder_bfa_fcs_vport_event } bfa_fcs_vport_event ;
 int VAR_0 ;
 int FUNC_0 (struct bfa_fcs_vport_s*) ;
 int FUNC_1 (struct bfa_fcs_vport_s*) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct bfa_fcs_vport_s*,int ) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static void
FUNC_7(struct bfa_fcs_vport_s *VAR_3,
    enum bfa_fcs_vport_event VAR_4)
{
 FUNC_6(FUNC_0(VAR_3), FUNC_1(VAR_3));
 FUNC_6(FUNC_0(VAR_3), VAR_4);

 switch (VAR_4) {
 case 128:
  FUNC_5(VAR_3, VAR_2);
  FUNC_2(&VAR_3->lport);
  break;

 case 134:
  break;

 case 132:
 case 130:
 case 129:
 case 133:
 case 131:
  FUNC_5(VAR_3, VAR_1);
  FUNC_4(VAR_3->lps, VAR_0);
  FUNC_2(&VAR_3->lport);
  break;

 default:
  FUNC_3(FUNC_0(VAR_3), VAR_4);
 }
}
