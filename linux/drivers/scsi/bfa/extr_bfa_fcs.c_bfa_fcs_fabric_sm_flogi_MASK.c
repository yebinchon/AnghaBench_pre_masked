
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pwwn; } ;
struct TYPE_6__ {TYPE_1__ port_cfg; } ;
struct bfa_fcs_fabric_s {TYPE_3__* fcs; int lps; int bb_credit; int fab_type; int delay_timer; int is_auth; int auth_reqd; TYPE_2__ bport; } ;
typedef enum bfa_fcs_fabric_event { ____Placeholder_bfa_fcs_fabric_event } bfa_fcs_fabric_event ;
struct TYPE_7__ {int bfa; } ;


 int VAR_0 ;
 int VAR_1 ;






 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (struct bfa_fcs_fabric_s*) ;
 int FUNC_2 (struct bfa_fcs_fabric_s*) ;
 int FUNC_3 (struct bfa_fcs_fabric_s*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct bfa_fcs_fabric_s*,int ) ;
 int FUNC_7 (int ,int *,int ,struct bfa_fcs_fabric_s*,int ) ;
 int FUNC_8 (TYPE_3__*,int) ;

__attribute__((used)) static void
FUNC_9(struct bfa_fcs_fabric_s *VAR_12,
   enum bfa_fcs_fabric_event VAR_13)
{
 FUNC_8(VAR_12->fcs, VAR_12->bport.port_cfg.pwwn);
 FUNC_8(VAR_12->fcs, VAR_13);

 switch (VAR_13) {
 case 133:

  FUNC_0(VAR_12->fcs->bfa,
        VAR_12->bb_credit);
  VAR_12->fab_type = VAR_2;

  if (VAR_12->auth_reqd && VAR_12->is_auth) {
   FUNC_6(VAR_12, VAR_5);
   FUNC_8(VAR_12->fcs, VAR_13);
  } else {
   FUNC_6(VAR_12, VAR_11);
   FUNC_2(VAR_12);
  }
  break;

 case 128:
  FUNC_6(VAR_12, VAR_7);
  FUNC_7(VAR_12->fcs->bfa, &VAR_12->delay_timer,
    VAR_4, VAR_12,
    VAR_1);
  break;

 case 130:
  FUNC_6(VAR_12, VAR_9);
  FUNC_5(VAR_12->lps, VAR_3);
  FUNC_3(VAR_12);
  break;

 case 129:
  VAR_12->fab_type = VAR_0;
  FUNC_0(VAR_12->fcs->bfa,
        VAR_12->bb_credit);
  FUNC_2(VAR_12);
  FUNC_6(VAR_12, VAR_10);
  break;

 case 131:
  FUNC_6(VAR_12, VAR_8);
  FUNC_5(VAR_12->lps, VAR_3);
  break;

 case 132:
  FUNC_6(VAR_12, VAR_6);
  FUNC_5(VAR_12->lps, VAR_3);
  FUNC_1(VAR_12);
  break;

 default:
  FUNC_4(VAR_12->fcs, VAR_13);
 }
}
