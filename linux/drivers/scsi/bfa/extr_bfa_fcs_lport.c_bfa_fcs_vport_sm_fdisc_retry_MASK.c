
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fdisc_retries; } ;
struct bfa_fcs_vport_s {int fdisc_retries; TYPE_1__ vport_stats; int timer; int lport; } ;
typedef enum bfa_fcs_vport_event { ____Placeholder_bfa_fcs_vport_event } bfa_fcs_vport_event ;





 int FUNC_0 (struct bfa_fcs_vport_s*) ;
 int FUNC_1 (struct bfa_fcs_vport_s*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct bfa_fcs_vport_s*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct bfa_fcs_vport_s*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static void
FUNC_8(struct bfa_fcs_vport_s *VAR_3,
        enum bfa_fcs_vport_event VAR_4)
{
 FUNC_7(FUNC_0(VAR_3), FUNC_1(VAR_3));
 FUNC_7(FUNC_0(VAR_3), VAR_4);

 switch (VAR_4) {
 case 130:
  FUNC_5(VAR_3, VAR_0);
  FUNC_6(&VAR_3->timer);
  FUNC_2(&VAR_3->lport);
  break;

 case 129:
  FUNC_5(VAR_3, VAR_2);
  FUNC_6(&VAR_3->timer);
  break;

 case 128:
  FUNC_5(VAR_3, VAR_1);
  VAR_3->vport_stats.fdisc_retries++;
  VAR_3->fdisc_retries++;
  FUNC_3(VAR_3);
  break;

 default:
  FUNC_4(FUNC_0(VAR_3), VAR_4);
 }
}
