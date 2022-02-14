
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pwwn; } ;
struct TYPE_4__ {TYPE_1__ port_cfg; } ;
struct bfa_fcs_fabric_s {int fcs; int delay_timer; TYPE_2__ bport; } ;
typedef enum bfa_fcs_fabric_event { ____Placeholder_bfa_fcs_fabric_event } bfa_fcs_fabric_event ;





 int FUNC_0 (struct bfa_fcs_fabric_s*) ;
 int FUNC_1 (struct bfa_fcs_fabric_s*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct bfa_fcs_fabric_s*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static void
FUNC_6(struct bfa_fcs_fabric_s *VAR_3,
         enum bfa_fcs_fabric_event VAR_4)
{
 FUNC_5(VAR_3->fcs, VAR_3->bport.port_cfg.pwwn);
 FUNC_5(VAR_3->fcs, VAR_4);

 switch (VAR_4) {
 case 130:
  FUNC_3(VAR_3, VAR_1);
  FUNC_1(VAR_3);
  break;

 case 128:
  FUNC_3(VAR_3, VAR_2);
  FUNC_4(&VAR_3->delay_timer);
  break;

 case 129:
  FUNC_3(VAR_3, VAR_0);
  FUNC_4(&VAR_3->delay_timer);
  FUNC_0(VAR_3);
  break;

 default:
  FUNC_2(VAR_3->fcs, VAR_4);
 }
}
