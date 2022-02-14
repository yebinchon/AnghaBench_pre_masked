
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bfa_fcs_lport_ns_s {TYPE_3__* port; int fcxp; int timer; int num_rnnid_retries; int num_rsnn_nn_retries; } ;
typedef enum vport_ns_event { ____Placeholder_vport_ns_event } vport_ns_event ;
struct TYPE_5__ {int ns_retries; } ;
struct TYPE_4__ {int pwwn; } ;
struct TYPE_6__ {int fcs; TYPE_2__ stats; TYPE_1__ port_cfg; } ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;



 int FUNC_1 (struct bfa_fcs_lport_ns_s*,int *) ;
 int FUNC_2 (struct bfa_fcs_lport_ns_s*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct bfa_fcs_lport_ns_s*,int ) ;
 int FUNC_6 (int ,int *,int ,struct bfa_fcs_lport_ns_s*,int ) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static void
FUNC_8(struct bfa_fcs_lport_ns_s *VAR_7,
    enum vport_ns_event VAR_8)
{
 FUNC_7(VAR_7->port->fcs, VAR_7->port->port_cfg.pwwn);
 FUNC_7(VAR_7->port->fcs, VAR_8);

 switch (VAR_8) {
 case 128:
  FUNC_5(VAR_7, VAR_4);
  VAR_7->num_rnnid_retries = 0;
  VAR_7->num_rsnn_nn_retries = 0;
  FUNC_1(VAR_7, ((void*)0));
  break;

 case 129:
  if (VAR_7->num_rnnid_retries < VAR_0) {
   FUNC_5(VAR_7, VAR_3);
   VAR_7->port->stats.ns_retries++;
   VAR_7->num_rnnid_retries++;
   FUNC_6(FUNC_0(VAR_7->port),
    &VAR_7->timer, VAR_6, VAR_7,
    VAR_1);
  } else {
   FUNC_5(VAR_7,
    VAR_5);
   FUNC_2(VAR_7, ((void*)0));
  }
  break;

 case 130:
  FUNC_3(VAR_7->fcxp);
  FUNC_5(VAR_7, VAR_2);
  break;

 default:
  FUNC_4(VAR_7->port->fcs, VAR_8);
 }
}
