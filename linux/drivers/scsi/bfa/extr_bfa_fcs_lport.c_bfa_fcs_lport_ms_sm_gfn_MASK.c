
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bfa_fcs_lport_ms_s {TYPE_3__* port; int fcxp; int retry_cnt; int timer; } ;
typedef enum port_ms_event { ____Placeholder_port_ms_event } port_ms_event ;
struct TYPE_5__ {int ms_retries; } ;
struct TYPE_4__ {int pwwn; } ;
struct TYPE_6__ {int fcs; TYPE_2__ stats; TYPE_1__ port_cfg; } ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct bfa_fcs_lport_ms_s*,int ) ;
 int FUNC_4 (int ,int *,int ,struct bfa_fcs_lport_ms_s*,int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static void
FUNC_6(struct bfa_fcs_lport_ms_s *VAR_6,
   enum port_ms_event VAR_7)
{
 FUNC_5(VAR_6->port->fcs, VAR_6->port->port_cfg.pwwn);
 FUNC_5(VAR_6->port->fcs, VAR_7);

 switch (VAR_7) {
 case 129:



  if (VAR_6->retry_cnt++ < VAR_0) {
   FUNC_3(VAR_6, VAR_2);
   VAR_6->port->stats.ms_retries++;
   FUNC_4(FUNC_0(VAR_6->port),
    &VAR_6->timer, VAR_5, VAR_6,
    VAR_1);
  } else {
   FUNC_3(VAR_6, VAR_4);
   VAR_6->retry_cnt = 0;
  }
  break;

 case 128:
  FUNC_3(VAR_6, VAR_4);
  break;

 case 130:
  FUNC_3(VAR_6, VAR_3);
  FUNC_1(VAR_6->fcxp);
  break;

 default:
  FUNC_2(VAR_6->port->fcs, VAR_7);
 }
}
