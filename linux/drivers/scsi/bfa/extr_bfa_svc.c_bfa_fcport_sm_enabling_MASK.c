
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bfad_s {int dummy; } ;
struct bfa_fcport_s {TYPE_1__* bfa; int pwwn; int event_cbfn; } ;
typedef enum bfa_fcport_sm_event { ____Placeholder_bfa_fcport_sm_event } bfa_fcport_sm_event ;
struct TYPE_3__ {int plog; scalar_t__ bfad; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct bfad_s*,int ,char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct bfa_fcport_s*,int ) ;
 int FUNC_3 (struct bfa_fcport_s*) ;
 int FUNC_4 (struct bfa_fcport_s*,int ,int ) ;
 int FUNC_5 (struct bfa_fcport_s*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_6 (struct bfa_fcport_s*) ;
 int VAR_15 ;
 int FUNC_7 (int ,int ,int ,int ,char*) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (struct bfa_fcport_s*,int ) ;
 int FUNC_10 (TYPE_1__*,int) ;
 int FUNC_11 (char*,int ) ;

__attribute__((used)) static void
FUNC_12(struct bfa_fcport_s *VAR_16,
      enum bfa_fcport_sm_event VAR_17)
{
 char VAR_18[VAR_6];
 struct bfad_s *VAR_19 = (struct bfad_s *)VAR_16->bfa->bfad;
 FUNC_10(VAR_16->bfa, VAR_17);

 switch (VAR_17) {
 case 132:
 case 130:
  FUNC_9(VAR_16, VAR_12);
  break;

 case 129:
  FUNC_6(VAR_16);
  FUNC_9(VAR_16, VAR_13);

  FUNC_1(!VAR_16->event_cbfn);
  FUNC_4(VAR_16, VAR_5, VAR_0);
  break;

 case 134:



  break;

 case 135:
  if (FUNC_5(VAR_16))
   FUNC_9(VAR_16, VAR_8);
  else
   FUNC_9(VAR_16,
      VAR_9);

  FUNC_7(VAR_16->bfa->plog, VAR_2,
    VAR_1, 0, "Port Disable");
  FUNC_11(VAR_18, VAR_16->pwwn);
  FUNC_0(VAR_7, VAR_19, VAR_15,
   "Base port disabled: WWN = %s\n", VAR_18);
  FUNC_2(VAR_16, VAR_3);
  break;

 case 128:
  FUNC_9(VAR_16, VAR_14);
  break;

 case 131:
  FUNC_9(VAR_16, VAR_11);
  break;

 case 133:
  FUNC_3(VAR_16);
  FUNC_2(VAR_16, VAR_4);
  FUNC_9(VAR_16, VAR_10);
  break;

 default:
  FUNC_8(VAR_16->bfa, VAR_17);
 }
}
