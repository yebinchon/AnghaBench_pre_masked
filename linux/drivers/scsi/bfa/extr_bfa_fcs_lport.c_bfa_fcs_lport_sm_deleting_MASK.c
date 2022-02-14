
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pwwn; } ;
struct bfa_fcs_lport_s {int fcs; int num_rports; TYPE_1__ port_cfg; } ;
typedef enum bfa_fcs_lport_event { ____Placeholder_bfa_fcs_lport_event } bfa_fcs_lport_event ;



 int FUNC_0 (struct bfa_fcs_lport_s*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct bfa_fcs_lport_s*,int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void
FUNC_4(
 struct bfa_fcs_lport_s *VAR_1,
 enum bfa_fcs_lport_event VAR_2)
{
 FUNC_3(VAR_1->fcs, VAR_1->port_cfg.pwwn);
 FUNC_3(VAR_1->fcs, VAR_2);

 switch (VAR_2) {
 case 128:
  if (VAR_1->num_rports == 0) {
   FUNC_2(VAR_1, VAR_0);
   FUNC_0(VAR_1);
  }
  break;

 default:
  FUNC_1(VAR_1->fcs, VAR_2);
 }
}
