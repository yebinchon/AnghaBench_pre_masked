
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bfa_fcs_rport_s {int pwwn; int pid; int old_pid; TYPE_1__* fcs; int fcxp; int timer; int ns_retries; } ;
typedef enum rport_event { ____Placeholder_rport_event } rport_event ;
struct TYPE_3__ {int bfa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bfa_fcs_rport_s*) ;
 int FUNC_1 (struct bfa_fcs_rport_s*) ;
 int FUNC_2 (struct bfa_fcs_rport_s*) ;
 int FUNC_3 (struct bfa_fcs_rport_s*,int *) ;
 int FUNC_4 (struct bfa_fcs_rport_s*,int *) ;
 int FUNC_5 (struct bfa_fcs_rport_s*,int *) ;
 int FUNC_6 (struct bfa_fcs_rport_s*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (struct bfa_fcs_rport_s*,int ) ;
 int FUNC_10 (int ,int *,int ,struct bfa_fcs_rport_s*,int ) ;
 int FUNC_11 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_12(struct bfa_fcs_rport_s *VAR_9,
   enum rport_event VAR_10)
{
 FUNC_11(VAR_9->fcs, VAR_9->pwwn);
 FUNC_11(VAR_9->fcs, VAR_9->pid);
 FUNC_11(VAR_9->fcs, VAR_10);

 switch (VAR_10) {
 case 137:
 case 136:
  if (VAR_9->pid) {
   FUNC_9(VAR_9, VAR_5);
   FUNC_4(VAR_9, ((void*)0));
  } else {
   FUNC_9(VAR_9,
     VAR_3);
   VAR_9->ns_retries = 0;
   FUNC_3(VAR_9, ((void*)0));
  }
  break;

 case 133:
  VAR_9->ns_retries++;
  if (VAR_9->ns_retries < VAR_0) {
   FUNC_9(VAR_9,
     VAR_3);
   FUNC_3(VAR_9, ((void*)0));
  } else {
   VAR_9->old_pid = VAR_9->pid;
   VAR_9->pid = 0;
   FUNC_9(VAR_9, VAR_4);
   FUNC_10(VAR_9->fcs->bfa, &VAR_9->timer,
     VAR_8, VAR_9,
     VAR_1);
  };
  break;

 case 135:
  FUNC_9(VAR_9, VAR_7);
  FUNC_7(VAR_9->fcxp);
  FUNC_1(VAR_9);
  break;

 case 129:
  FUNC_9(VAR_9, VAR_6);
  FUNC_7(VAR_9->fcxp);
  FUNC_5(VAR_9, ((void*)0));
  break;

 case 132:
  VAR_9->pid = 0;
  FUNC_9(VAR_9, VAR_4);
  FUNC_7(VAR_9->fcxp);
  FUNC_10(VAR_9->fcs->bfa, &VAR_9->timer,
    VAR_8, VAR_9,
    VAR_1);
  break;


 case 128:
  FUNC_6(VAR_9);
  break;
 case 134:



  break;

 case 131:



  FUNC_2(VAR_9);
  break;

 case 130:
  FUNC_9(VAR_9, VAR_2);
  FUNC_7(VAR_9->fcxp);
  FUNC_0(VAR_9);
  break;

 default:
  FUNC_8(VAR_9->fcs, VAR_10);
 }
}
