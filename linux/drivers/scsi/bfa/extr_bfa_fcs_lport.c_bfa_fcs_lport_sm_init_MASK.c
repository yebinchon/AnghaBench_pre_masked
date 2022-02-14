
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int pwwn; } ;
struct bfa_fcs_lport_s {int fcs; TYPE_1__* fabric; int vport; TYPE_2__ port_cfg; } ;
typedef enum bfa_fcs_lport_event { ____Placeholder_bfa_fcs_lport_event } bfa_fcs_lport_event ;
struct TYPE_3__ {int stop_wc; } ;






 int FUNC_0 (struct bfa_fcs_lport_s*) ;
 int FUNC_1 (struct bfa_fcs_lport_s*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct bfa_fcs_lport_s*,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct bfa_fcs_lport_s *VAR_2,
   enum bfa_fcs_lport_event VAR_3)
{
 FUNC_5(VAR_2->fcs, VAR_2->port_cfg.pwwn);
 FUNC_5(VAR_2->fcs, VAR_3);

 switch (VAR_3) {
 case 129:
  FUNC_4(VAR_2, VAR_0);
  FUNC_1(VAR_2);
  break;

 case 131:
  FUNC_4(VAR_2, VAR_1);
  FUNC_0(VAR_2);
  break;

 case 128:

  if (VAR_2->vport)
   FUNC_2(VAR_2->vport);
  else
   FUNC_6(&(VAR_2->fabric->stop_wc));
  break;

 case 130:
  break;

 default:
  FUNC_3(VAR_2->fcs, VAR_3);
 }
}
