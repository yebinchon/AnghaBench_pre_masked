
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pwwn; } ;
struct TYPE_6__ {TYPE_1__ port_cfg; } ;
struct bfa_fcs_fabric_s {TYPE_3__* fcs; TYPE_2__ bport; } ;
typedef enum bfa_fcs_fabric_event { ____Placeholder_bfa_fcs_fabric_event } bfa_fcs_fabric_event ;
struct TYPE_7__ {int wc; } ;





 int FUNC_0 (struct bfa_fcs_fabric_s*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (struct bfa_fcs_fabric_s*,int ) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct bfa_fcs_fabric_s *VAR_1,
      enum bfa_fcs_fabric_event VAR_2)
{
 FUNC_3(VAR_1->fcs, VAR_1->bport.port_cfg.pwwn);
 FUNC_3(VAR_1->fcs, VAR_2);

 switch (VAR_2) {
 case 130:
  FUNC_2(VAR_1, VAR_0);
  FUNC_4(&VAR_1->fcs->wc);
  break;

 case 128:
  break;

 case 129:
  FUNC_0(VAR_1);
  break;

 default:
  FUNC_1(VAR_1->fcs, VAR_2);
 }
}
