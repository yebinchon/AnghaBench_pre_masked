
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_fcs_rport_s {int pwwn; int pid; int fcs; int prlo; } ;
typedef enum rport_event { ____Placeholder_rport_event } rport_event ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bfa_fcs_rport_s*) ;
 int FUNC_1 (struct bfa_fcs_rport_s*) ;
 int FUNC_2 (struct bfa_fcs_rport_s*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct bfa_fcs_rport_s*,int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static void
FUNC_6(struct bfa_fcs_rport_s *VAR_4,
   enum rport_event VAR_5)
{
 FUNC_5(VAR_4->fcs, VAR_4->pwwn);
 FUNC_5(VAR_4->fcs, VAR_4->pid);
 FUNC_5(VAR_4->fcs, VAR_5);

 switch (VAR_5) {
 case 133:
  FUNC_4(VAR_4, VAR_3);
  FUNC_0(VAR_4);
  break;

 case 134:
  if (VAR_4->pid && (VAR_4->prlo == VAR_1))
   FUNC_2(VAR_4);
  if (VAR_4->pid && (VAR_4->prlo == VAR_0))
   FUNC_1(VAR_4);

  FUNC_4(VAR_4, VAR_2);
  break;

 case 128:
 case 129:
 case 132:
 case 131:
 case 130:
 case 135:
  break;

 default:
  FUNC_3(VAR_4->fcs, VAR_5);
 }
}
