
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_fcs_rport_s {int pwwn; int pid; int fcs; int ns_retries; TYPE_1__* port; } ;
typedef enum rport_event { ____Placeholder_rport_event } rport_event ;
struct TYPE_2__ {int fabric; } ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct bfa_fcs_rport_s*) ;
 int FUNC_2 (struct bfa_fcs_rport_s*,int *) ;
 int FUNC_3 (struct bfa_fcs_rport_s*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct bfa_fcs_rport_s*,int ) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static void
FUNC_7(struct bfa_fcs_rport_s *VAR_5, enum rport_event VAR_6)
{
 FUNC_6(VAR_5->fcs, VAR_5->pwwn);
 FUNC_6(VAR_5->fcs, VAR_5->pid);
 FUNC_6(VAR_5->fcs, VAR_6);

 switch (VAR_6) {
 case 135:
  if (FUNC_0(VAR_5->port->fabric)) {
   FUNC_5(VAR_5,
      VAR_4);
   VAR_5->ns_retries = 0;
   FUNC_3(VAR_5, ((void*)0));
  } else {
   FUNC_5(VAR_5,
    VAR_0);
   FUNC_2(VAR_5, ((void*)0));
  }
  break;

 case 131:
 case 134:
 case 137:
 case 129:
  FUNC_5(VAR_5, VAR_3);
  FUNC_1(VAR_5);
  break;

 case 136:
  FUNC_5(VAR_5, VAR_2);
  FUNC_1(VAR_5);
  break;

 case 133:
 case 130:
  FUNC_5(VAR_5, VAR_1);
  FUNC_1(VAR_5);
  break;

 case 128:
 case 132:
  break;

 default:
  FUNC_4(VAR_5->fcs, VAR_6);
 }
}
