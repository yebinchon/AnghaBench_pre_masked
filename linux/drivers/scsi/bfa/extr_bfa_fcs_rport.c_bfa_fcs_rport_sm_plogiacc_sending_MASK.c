
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bfa_fcs_rport_s {int pwwn; int pid; TYPE_1__* fcs; int timer; int fcxp_wqe; int ns_retries; } ;
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
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (struct bfa_fcs_rport_s*,int ) ;
 int FUNC_6 (int ,int *,int ,struct bfa_fcs_rport_s*,int ) ;
 int FUNC_7 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_8(struct bfa_fcs_rport_s *VAR_6,
  enum rport_event VAR_7)
{
 FUNC_7(VAR_6->fcs, VAR_6->pwwn);
 FUNC_7(VAR_6->fcs, VAR_6->pid);
 FUNC_7(VAR_6->fcs, VAR_7);

 switch (VAR_7) {
 case 133:
  FUNC_5(VAR_6, VAR_1);
  FUNC_0(VAR_6);
  break;

 case 135:
  FUNC_5(VAR_6, VAR_4);
  FUNC_3(VAR_6->fcs->bfa, &VAR_6->fcxp_wqe);
  FUNC_1(VAR_6);
  break;

 case 129:
 case 130:
 case 134:



  break;

 case 128:
  FUNC_5(VAR_6, VAR_3);
  FUNC_3(VAR_6->fcs->bfa, &VAR_6->fcxp_wqe);
  FUNC_6(VAR_6->fcs->bfa, &VAR_6->timer,
    VAR_5, VAR_6,
    VAR_0);
  break;

 case 136:
  FUNC_3(VAR_6->fcs->bfa, &VAR_6->fcxp_wqe);
  FUNC_5(VAR_6, VAR_2);
  VAR_6->ns_retries = 0;
  FUNC_2(VAR_6, ((void*)0));
  break;

 case 131:
  VAR_6->pid = 0;
  FUNC_5(VAR_6, VAR_3);
  FUNC_3(VAR_6->fcs->bfa, &VAR_6->fcxp_wqe);
  FUNC_6(VAR_6->fcs->bfa, &VAR_6->timer,
    VAR_5, VAR_6,
    VAR_0);
  break;

 case 132:



  break;

 default:
  FUNC_4(VAR_6->fcs, VAR_7);
 }
}
