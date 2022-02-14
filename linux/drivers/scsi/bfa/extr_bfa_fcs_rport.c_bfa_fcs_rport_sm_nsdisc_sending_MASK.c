
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bfa_fcs_rport_s {int pwwn; int pid; TYPE_1__* fcs; int fcxp_wqe; int timer; int ns_retries; } ;
typedef enum rport_event { ____Placeholder_rport_event } rport_event ;
struct TYPE_3__ {int bfa; } ;
 int VAR_0 ;
 int FUNC_0 (struct bfa_fcs_rport_s*) ;
 int FUNC_1 (struct bfa_fcs_rport_s*) ;
 int FUNC_2 (struct bfa_fcs_rport_s*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (struct bfa_fcs_rport_s*,int ) ;
 int FUNC_6 (int ,int *,int ,struct bfa_fcs_rport_s*,int ) ;
 int FUNC_7 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_8(struct bfa_fcs_rport_s *VAR_7,
  enum rport_event VAR_8)
{
 FUNC_7(VAR_7->fcs, VAR_7->pwwn);
 FUNC_7(VAR_7->fcs, VAR_7->pid);
 FUNC_7(VAR_7->fcs, VAR_8);

 switch (VAR_8) {
 case 134:
  FUNC_5(VAR_7, VAR_2);
  break;

 case 136:
  FUNC_5(VAR_7, VAR_5);
  FUNC_3(VAR_7->fcs->bfa, &VAR_7->fcxp_wqe);
  FUNC_1(VAR_7);
  break;

 case 130:
  FUNC_5(VAR_7, VAR_4);
  FUNC_3(VAR_7->fcs->bfa, &VAR_7->fcxp_wqe);
  FUNC_2(VAR_7, ((void*)0));
  break;

 case 135:
 case 132:
 case 128:
 case 129:
  break;

 case 137:
  VAR_7->ns_retries = 0;
  break;

 case 133:
  FUNC_5(VAR_7, VAR_3);
  FUNC_3(VAR_7->fcs->bfa, &VAR_7->fcxp_wqe);
  FUNC_6(VAR_7->fcs->bfa, &VAR_7->timer,
    VAR_6, VAR_7,
    VAR_0);
  break;

 case 131:
  FUNC_5(VAR_7, VAR_1);
  FUNC_3(VAR_7->fcs->bfa, &VAR_7->fcxp_wqe);
  FUNC_0(VAR_7);
  break;

 default:
  FUNC_4(VAR_7->fcs, VAR_8);
 }
}
