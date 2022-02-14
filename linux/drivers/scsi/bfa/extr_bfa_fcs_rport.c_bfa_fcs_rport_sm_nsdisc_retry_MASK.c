
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bfa_fcs_rport_s {int pwwn; int pid; TYPE_1__* fcs; int timer; int ns_retries; } ;
typedef enum rport_event { ____Placeholder_rport_event } rport_event ;
struct TYPE_3__ {int bfa; } ;
 int VAR_0 ;
 int FUNC_0 (struct bfa_fcs_rport_s*) ;
 int FUNC_1 (struct bfa_fcs_rport_s*) ;
 int FUNC_2 (struct bfa_fcs_rport_s*) ;
 int FUNC_3 (struct bfa_fcs_rport_s*,int *) ;
 int FUNC_4 (struct bfa_fcs_rport_s*,int *) ;
 int FUNC_5 (struct bfa_fcs_rport_s*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (struct bfa_fcs_rport_s*,int ) ;
 int FUNC_8 (int ,int *,int ,struct bfa_fcs_rport_s*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_11(struct bfa_fcs_rport_s *VAR_7,
  enum rport_event VAR_8)
{
 FUNC_10(VAR_7->fcs, VAR_7->pwwn);
 FUNC_10(VAR_7->fcs, VAR_7->pid);
 FUNC_10(VAR_7->fcs, VAR_8);

 switch (VAR_8) {
 case 128:
  FUNC_7(VAR_7, VAR_2);
  FUNC_3(VAR_7, ((void*)0));
  break;

 case 134:
 case 136:
  FUNC_7(VAR_7, VAR_2);
  FUNC_9(&VAR_7->timer);
  VAR_7->ns_retries = 0;
  FUNC_3(VAR_7, ((void*)0));
  break;

 case 135:
  FUNC_7(VAR_7, VAR_5);
  FUNC_9(&VAR_7->timer);
  FUNC_1(VAR_7);
  break;

 case 130:
  FUNC_7(VAR_7, VAR_4);
  FUNC_9(&VAR_7->timer);
  FUNC_4(VAR_7, ((void*)0));
  break;

 case 133:
  VAR_7->pid = 0;
  FUNC_7(VAR_7, VAR_3);
  FUNC_9(&VAR_7->timer);
  FUNC_8(VAR_7->fcs->bfa, &VAR_7->timer,
    VAR_6, VAR_7,
    VAR_0);
  break;

 case 132:
  FUNC_2(VAR_7);
  break;
 case 129:
  FUNC_5(VAR_7);
  break;

 case 131:
  FUNC_7(VAR_7, VAR_1);
  FUNC_9(&VAR_7->timer);
  FUNC_0(VAR_7);
  break;

 default:
  FUNC_6(VAR_7->fcs, VAR_8);
 }
}
