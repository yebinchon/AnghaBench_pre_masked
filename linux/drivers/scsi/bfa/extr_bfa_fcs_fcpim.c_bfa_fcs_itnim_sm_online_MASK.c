
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bfad_s {int dummy; } ;
struct bfa_fcs_itnim_s {TYPE_2__* fcs; TYPE_1__* rport; int bfa_itnim; int itnim_drv; } ;
typedef enum bfa_fcs_itnim_event { ____Placeholder_bfa_fcs_itnim_event } bfa_fcs_itnim_event ;
struct TYPE_5__ {scalar_t__ bfad; } ;
struct TYPE_4__ {int pwwn; int port; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct bfad_s*,int ,char*,char*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bfa_fcs_itnim_s*,int ) ;
 int FUNC_3 (struct bfa_fcs_itnim_s*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_8 ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (struct bfa_fcs_itnim_s*,int ) ;
 int FUNC_9 (TYPE_2__*,int) ;
 int FUNC_10 (char*,int) ;

__attribute__((used)) static void
FUNC_11(struct bfa_fcs_itnim_s *VAR_9,
   enum bfa_fcs_itnim_event VAR_10)
{
 struct bfad_s *VAR_11 = (struct bfad_s *)VAR_9->fcs->bfad;
 char VAR_12[VAR_2];
 char VAR_13[VAR_2];

 FUNC_9(VAR_9->fcs, VAR_9->rport->pwwn);
 FUNC_9(VAR_9->fcs, VAR_10);

 switch (VAR_10) {
 case 128:
  FUNC_8(VAR_9, VAR_6);
  FUNC_1(VAR_9->itnim_drv);
  FUNC_6(VAR_9->bfa_itnim);
  FUNC_10(VAR_12, FUNC_4(VAR_9->rport->port));
  FUNC_10(VAR_13, VAR_9->rport->pwwn);
  if (FUNC_5(VAR_9->rport->port) == VAR_3) {
   FUNC_0(VAR_4, VAR_11, VAR_8,
   "Target (WWN = %s) connectivity lost for "
   "initiator (WWN = %s)\n", VAR_13, VAR_12);
   FUNC_2(VAR_9, VAR_0);
  } else {
   FUNC_0(VAR_5, VAR_11, VAR_8,
   "Target (WWN = %s) offlined by initiator (WWN = %s)\n",
   VAR_13, VAR_12);
   FUNC_2(VAR_9, VAR_1);
  }
  break;

 case 129:
  FUNC_8(VAR_9, VAR_7);
  FUNC_3(VAR_9);
  break;

 default:
  FUNC_7(VAR_9->fcs, VAR_10);
 }
}
