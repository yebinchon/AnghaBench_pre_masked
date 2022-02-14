
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_fcs_rport_s {int pwwn; int pid; int fcs; } ;
typedef enum rport_event { ____Placeholder_rport_event } rport_event ;
 int FUNC_0 (struct bfa_fcs_rport_s*) ;
 int FUNC_1 (struct bfa_fcs_rport_s*) ;
 int FUNC_2 (struct bfa_fcs_rport_s*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct bfa_fcs_rport_s*,int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static void
FUNC_6(struct bfa_fcs_rport_s *VAR_2,
   enum rport_event VAR_3)
{
 FUNC_5(VAR_2->fcs, VAR_2->pwwn);
 FUNC_5(VAR_2->fcs, VAR_2->pid);
 FUNC_5(VAR_2->fcs, VAR_3);

 switch (VAR_3) {
 case 134:
  FUNC_4(VAR_2, VAR_1);
  FUNC_0(VAR_2);
  break;

 case 128:
  break;
 case 131:



  FUNC_1(VAR_2);
  break;

 case 130:
  FUNC_2(VAR_2);
  break;

 case 129:
 case 133:
 case 135:
 case 132:
 case 137:




  break;

 case 136:
  FUNC_4(VAR_2, VAR_0);
  break;

 default:
  FUNC_3(VAR_2->fcs, VAR_3);
 }
}
