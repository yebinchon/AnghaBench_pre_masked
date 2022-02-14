
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_fcs_rport_s {int pwwn; int pid; int fcs; int plogi_pending; } ;
typedef enum rport_event { ____Placeholder_rport_event } rport_event ;


 int VAR_0 ;
 int FUNC_0 (struct bfa_fcs_rport_s*) ;
 int FUNC_1 (struct bfa_fcs_rport_s*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct bfa_fcs_rport_s*,int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void
FUNC_5(struct bfa_fcs_rport_s *VAR_5,
   enum rport_event VAR_6)
{
 FUNC_4(VAR_5->fcs, VAR_5->pwwn);
 FUNC_4(VAR_5->fcs, VAR_5->pid);
 FUNC_4(VAR_5->fcs, VAR_6);

 switch (VAR_6) {
 case 134:
  FUNC_3(VAR_5, VAR_4);
  FUNC_1(VAR_5);
  break;

 case 131:
  break;

 case 129:
 case 132:
  FUNC_3(VAR_5, VAR_1);
  FUNC_0(VAR_5);
  break;

 case 135:
 case 133:
 case 137:
 case 128:
  FUNC_3(VAR_5, VAR_3);
  FUNC_0(VAR_5);
  break;

 case 130:
  VAR_5->plogi_pending = VAR_0;
  FUNC_3(VAR_5, VAR_3);
  FUNC_0(VAR_5);
  break;

 case 136:
  FUNC_3(VAR_5, VAR_2);
  FUNC_0(VAR_5);
  break;

 default:
  FUNC_2(VAR_5->fcs, VAR_6);
 }
}
