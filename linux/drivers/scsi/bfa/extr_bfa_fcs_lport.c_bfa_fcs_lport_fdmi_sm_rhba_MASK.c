
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pwwn; } ;
struct bfa_fcs_lport_s {int fcs; TYPE_1__ port_cfg; } ;
struct bfa_fcs_lport_fdmi_s {int fcxp; int retry_cnt; int timer; TYPE_2__* ms; } ;
typedef enum port_fdmi_event { ____Placeholder_port_fdmi_event } port_fdmi_event ;
struct TYPE_4__ {struct bfa_fcs_lport_s* port; } ;


 int VAR_0 ;
 int FUNC_0 (struct bfa_fcs_lport_s*) ;
 int VAR_1 ;



 int FUNC_1 (struct bfa_fcs_lport_fdmi_s*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct bfa_fcs_lport_fdmi_s*,int ) ;
 int FUNC_5 (int ,int *,int ,struct bfa_fcs_lport_fdmi_s*,int ) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static void
FUNC_7(struct bfa_fcs_lport_fdmi_s *VAR_6,
   enum port_fdmi_event VAR_7)
{
 struct bfa_fcs_lport_s *VAR_8 = VAR_6->ms->port;

 FUNC_6(VAR_8->fcs, VAR_8->port_cfg.pwwn);
 FUNC_6(VAR_8->fcs, VAR_7);

 switch (VAR_7) {
 case 129:




  if (VAR_6->retry_cnt++ < VAR_0) {
   FUNC_4(VAR_6,
     VAR_3);
   FUNC_5(FUNC_0(VAR_8),
         &VAR_6->timer,
         VAR_5, VAR_6,
         VAR_1);
  } else {



   FUNC_4(VAR_6, VAR_2);
  }
  break;

 case 128:



  FUNC_4(VAR_6, VAR_4);
  VAR_6->retry_cnt = 0;
  FUNC_1(VAR_6, ((void*)0));
  break;

 case 130:
  FUNC_2(VAR_6->fcxp);
  FUNC_4(VAR_6, VAR_2);
  break;

 default:
  FUNC_3(VAR_8->fcs, VAR_7);
 }
}
