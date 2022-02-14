
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fab_no_npiv; } ;
struct bfa_fcs_vport_s {int lport; TYPE_1__ vport_stats; } ;
typedef enum bfa_fcs_vport_event { ____Placeholder_bfa_fcs_vport_event } bfa_fcs_vport_event ;






 int FUNC_0 (struct bfa_fcs_vport_s*) ;
 int FUNC_1 (struct bfa_fcs_vport_s*) ;
 int FUNC_2 (struct bfa_fcs_vport_s*) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct bfa_fcs_vport_s*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (struct bfa_fcs_vport_s*,int ) ;
 int FUNC_9 (int ,int) ;

__attribute__((used)) static void
FUNC_10(struct bfa_fcs_vport_s *VAR_4,
   enum bfa_fcs_vport_event VAR_5)
{
 FUNC_9(FUNC_1(VAR_4), FUNC_2(VAR_4));
 FUNC_9(FUNC_1(VAR_4), VAR_5);

 switch (VAR_5) {
 case 128:
  if (FUNC_6(FUNC_0(VAR_4),
     VAR_0)
      && FUNC_3(FUNC_0(VAR_4))) {
   FUNC_8(VAR_4, VAR_2);
   FUNC_5(VAR_4);
  } else {




   VAR_4->vport_stats.fab_no_npiv++;
   FUNC_8(VAR_4, VAR_3);
  }
  break;

 case 131:
  FUNC_8(VAR_4, VAR_1);
  FUNC_4(&VAR_4->lport);
  break;

 case 129:
 case 130:




  break;

 default:
  FUNC_7(FUNC_1(VAR_4), VAR_5);
 }
}
