
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct bfa_fcs_rport_s {int pwwn; int pid; int old_pid; TYPE_2__* fcs; int fcxp; int ns_retries; TYPE_3__* port; int timer; int plogi_retries; int prlo; } ;
typedef enum rport_event { ____Placeholder_rport_event } rport_event ;
struct TYPE_7__ {TYPE_1__* fcs; } ;
struct TYPE_6__ {int bfa; } ;
struct TYPE_5__ {int bfa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (struct bfa_fcs_rport_s*) ;
 int FUNC_3 (struct bfa_fcs_rport_s*) ;
 int FUNC_4 (struct bfa_fcs_rport_s*) ;
 int FUNC_5 (struct bfa_fcs_rport_s*,int *) ;
 int FUNC_6 (struct bfa_fcs_rport_s*,int *) ;
 int FUNC_7 (struct bfa_fcs_rport_s*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_2__*,int) ;
 int FUNC_10 (struct bfa_fcs_rport_s*,int ) ;
 int FUNC_11 (TYPE_3__*,int ) ;
 int FUNC_12 (int ,int *,int ,struct bfa_fcs_rport_s*,int) ;
 int FUNC_13 (TYPE_2__*,int) ;
 int VAR_13 ;

__attribute__((used)) static void
FUNC_14(struct bfa_fcs_rport_s *VAR_14, enum rport_event VAR_15)
{
 FUNC_13(VAR_14->fcs, VAR_14->pwwn);
 FUNC_13(VAR_14->fcs, VAR_14->pid);
 FUNC_13(VAR_14->fcs, VAR_15);

 switch (VAR_15) {
 case 140:
  FUNC_10(VAR_14, VAR_6);
  VAR_14->plogi_retries = 0;
  FUNC_2(VAR_14);
  break;

 case 134:
  FUNC_4(VAR_14);

 case 130:
  if (VAR_14->prlo == VAR_3)
   FUNC_7(VAR_14);

  FUNC_8(VAR_14->fcxp);

 case 136:
  if (VAR_14->plogi_retries < VAR_1) {
   VAR_14->plogi_retries++;
   FUNC_10(VAR_14, VAR_9);
   FUNC_12(VAR_14->fcs->bfa, &VAR_14->timer,
     VAR_12, VAR_14,
     VAR_0);
  } else {
   FUNC_11(VAR_14->port, VAR_13);
   VAR_14->old_pid = VAR_14->pid;
   VAR_14->pid = 0;
   FUNC_10(VAR_14, VAR_8);
   FUNC_12(VAR_14->fcs->bfa, &VAR_14->timer,
     VAR_12, VAR_14,
     VAR_5);
  }
  break;

 case 128:
  break;

 case 129:
  FUNC_10(VAR_14, VAR_8);
  FUNC_8(VAR_14->fcxp);
  FUNC_12(VAR_14->fcs->bfa, &VAR_14->timer,
    VAR_12, VAR_14,
    VAR_5);
  break;

 case 131:
  VAR_14->plogi_retries = 0;
  FUNC_10(VAR_14, VAR_9);
  FUNC_12(VAR_14->fcs->bfa, &VAR_14->timer,
    VAR_12, VAR_14,
    (VAR_4 * 1000));
  break;

 case 135:
  VAR_14->pid = 0;
  FUNC_10(VAR_14, VAR_8);
  FUNC_8(VAR_14->fcxp);
  FUNC_12(VAR_14->fcs->bfa, &VAR_14->timer,
    VAR_12, VAR_14,
    VAR_5);
  break;

 case 139:
 case 137:
  FUNC_8(VAR_14->fcxp);
  FUNC_0(!(FUNC_1(VAR_14->port->fcs->bfa) !=
     VAR_2));
  FUNC_10(VAR_14, VAR_7);
  VAR_14->ns_retries = 0;
  FUNC_5(VAR_14, ((void*)0));
  break;

 case 132:
  FUNC_10(VAR_14, VAR_10);
  FUNC_8(VAR_14->fcxp);
  FUNC_6(VAR_14, ((void*)0));
  break;

 case 138:
  FUNC_10(VAR_14, VAR_11);
  FUNC_8(VAR_14->fcxp);
  FUNC_3(VAR_14);
  break;

 case 133:
  FUNC_10(VAR_14, VAR_6);
  FUNC_8(VAR_14->fcxp);
  FUNC_2(VAR_14);
  break;

 default:
  FUNC_9(VAR_14->fcs, VAR_15);
 }
}
