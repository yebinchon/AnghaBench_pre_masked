
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_fcs_rport_s {int pwwn; int pid; int fcs; } ;
typedef enum rport_event { ____Placeholder_rport_event } rport_event ;





 int FUNC_0 (struct bfa_fcs_rport_s*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct bfa_fcs_rport_s*,int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void
FUNC_4(struct bfa_fcs_rport_s *VAR_1,
    enum rport_event VAR_2)
{
 FUNC_3(VAR_1->fcs, VAR_1->pwwn);
 FUNC_3(VAR_1->fcs, VAR_1->pid);
 FUNC_3(VAR_1->fcs, VAR_2);

 switch (VAR_2) {
 case 129:
  FUNC_2(VAR_1, VAR_0);
  FUNC_0(VAR_1);
  break;

 case 130:
 case 128:

  break;

 default:
  FUNC_1(VAR_1->fcs, VAR_2);
  break;
 }
}
