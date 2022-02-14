
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct bfa_fcs_lport_ns_s {TYPE_3__* port; int fcxp; int timer; } ;
typedef enum vport_ns_event { ____Placeholder_vport_ns_event } vport_ns_event ;
struct TYPE_8__ {int ns_retries; } ;
struct TYPE_7__ {int pwwn; } ;
struct TYPE_9__ {int fcs; TYPE_2__ stats; TYPE_1__ port_cfg; } ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*) ;



 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (struct bfa_fcs_lport_ns_s*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (struct bfa_fcs_lport_ns_s*,int ) ;
 int FUNC_9 (int ,int *,int ,struct bfa_fcs_lport_ns_s*,int ) ;
 int FUNC_10 (int ,int) ;

__attribute__((used)) static void
FUNC_11(struct bfa_fcs_lport_ns_s *VAR_6,
   enum vport_ns_event VAR_7)
{
 FUNC_10(VAR_6->port->fcs, VAR_6->port->port_cfg.pwwn);
 FUNC_10(VAR_6->port->fcs, VAR_7);

 switch (VAR_7) {
 case 128:






  if (FUNC_2(VAR_6->port->fcs)) {
   FUNC_4(VAR_6->port);
   FUNC_8(VAR_6, VAR_2);
   return;
  }





  if (FUNC_1(VAR_6->port)) {
   FUNC_8(VAR_6,
    VAR_4);
   FUNC_5(VAR_6, ((void*)0));
  }



  FUNC_3(VAR_6->port);
  break;

 case 129:



  FUNC_8(VAR_6, VAR_3);
  VAR_6->port->stats.ns_retries++;
  FUNC_9(FUNC_0(VAR_6->port),
        &VAR_6->timer, VAR_5, VAR_6,
        VAR_0);
  break;

 case 130:
  FUNC_8(VAR_6, VAR_1);
  FUNC_6(VAR_6->fcxp);
  break;

 default:
  FUNC_7(VAR_6->port->fcs, VAR_7);
 }
}
