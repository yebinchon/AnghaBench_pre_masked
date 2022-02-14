
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bfa_fcs_rport_s {int pwwn; int pid; TYPE_1__* fcs; int timer; int fcxp; } ;
typedef enum rport_event { ____Placeholder_rport_event } rport_event ;
struct TYPE_3__ {int bfa; } ;
 int VAR_0 ;
 int FUNC_0 (struct bfa_fcs_rport_s*) ;
 int FUNC_1 (struct bfa_fcs_rport_s*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (struct bfa_fcs_rport_s*,int ) ;
 int FUNC_5 (int ,int *,int ,struct bfa_fcs_rport_s*,int ) ;
 int FUNC_6 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_7(struct bfa_fcs_rport_s *VAR_5,
   enum rport_event VAR_6)
{
 FUNC_6(VAR_5->fcs, VAR_5->pwwn);
 FUNC_6(VAR_5->fcs, VAR_5->pid);
 FUNC_6(VAR_5->fcs, VAR_6);

 switch (VAR_6) {
 case 135:
  FUNC_4(VAR_5, VAR_1);
  FUNC_0(VAR_5);
  break;

 case 130:
  FUNC_4(VAR_5, VAR_3);
  FUNC_2(VAR_5->fcxp);
  FUNC_1(VAR_5, ((void*)0));
  break;

 case 133:
  FUNC_4(VAR_5, VAR_2);
  FUNC_5(VAR_5->fcs->bfa, &VAR_5->timer,
   VAR_4, VAR_5,
   VAR_0);
  break;

 case 134:
 case 128:
 case 132:
 case 131:
 case 129:
  FUNC_4(VAR_5, VAR_2);
  FUNC_2(VAR_5->fcxp);
  FUNC_5(VAR_5->fcs->bfa, &VAR_5->timer,
   VAR_4, VAR_5,
   VAR_0);
  break;

 default:
  FUNC_3(VAR_5->fcs, VAR_6);
 }
}
