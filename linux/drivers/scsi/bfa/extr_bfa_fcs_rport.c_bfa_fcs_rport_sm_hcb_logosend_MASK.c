
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_fcs_rport_s {int pwwn; int pid; int fcs; int prlo; } ;
typedef enum rport_event { ____Placeholder_rport_event } rport_event ;


 int VAR_0 ;






 int FUNC_0 (struct bfa_fcs_rport_s*,int *) ;
 int FUNC_1 (struct bfa_fcs_rport_s*) ;
 int FUNC_2 (struct bfa_fcs_rport_s*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct bfa_fcs_rport_s*,int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static void
FUNC_6(struct bfa_fcs_rport_s *VAR_3,
   enum rport_event VAR_4)
{
 FUNC_5(VAR_3->fcs, VAR_3->pwwn);
 FUNC_5(VAR_3->fcs, VAR_3->pid);
 FUNC_5(VAR_3->fcs, VAR_4);

 switch (VAR_4) {
 case 132:
  FUNC_4(VAR_3, VAR_2);
  FUNC_0(VAR_3, ((void*)0));
  break;

 case 131:
  FUNC_1(VAR_3);

 case 130:
  if (VAR_3->prlo == VAR_0)
   FUNC_2(VAR_3);

  FUNC_4(VAR_3, VAR_1);
  break;

 case 128:
 case 129:
 case 133:
  break;

 default:
  FUNC_3(VAR_3->fcs, VAR_4);
 }
}
