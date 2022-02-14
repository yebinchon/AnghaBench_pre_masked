
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct bfad_s {int dummy; } ;
struct bfa_fcport_s {TYPE_1__* bfa; int pwwn; } ;
typedef enum bfa_fcport_sm_event { ____Placeholder_bfa_fcport_sm_event } bfa_fcport_sm_event ;
struct TYPE_4__ {int plog; scalar_t__ bfad; } ;


 int VAR_0 ;






 int FUNC_0 (int ,struct bfad_s*,int ,char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct bfa_fcport_s*,int ) ;
 int FUNC_3 (struct bfa_fcport_s*) ;
 int FUNC_4 (struct bfa_fcport_s*,int ,int ) ;
 int FUNC_5 (struct bfa_fcport_s*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_6 (int ,int ,int ,int ,char*) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (struct bfa_fcport_s*,int ) ;
 int FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (char*,int ) ;

__attribute__((used)) static void
FUNC_11(struct bfa_fcport_s *VAR_18,
 enum bfa_fcport_sm_event VAR_19)
{
 char VAR_20[VAR_8];
 struct bfad_s *VAR_21 = (struct bfad_s *)VAR_18->bfa->bfad;

 FUNC_9(VAR_18->bfa, VAR_19);

 switch (VAR_19) {
 case 132:



  break;

 case 133:
  if (FUNC_5(VAR_18))
   FUNC_8(VAR_18, VAR_11);
  else
   FUNC_8(VAR_18,
      VAR_12);

  FUNC_3(VAR_18);
  FUNC_4(VAR_18, VAR_7, VAR_0);
  FUNC_6(VAR_18->bfa->plog, VAR_3,
    VAR_1, 0, "Port Disable");
  FUNC_10(VAR_20, VAR_18->pwwn);
  FUNC_0(VAR_10, VAR_21, VAR_17,
   "Base port offline: WWN = %s\n", VAR_20);
  FUNC_2(VAR_18, VAR_6);
  FUNC_0(VAR_10, VAR_21, VAR_17,
   "Base port disabled: WWN = %s\n", VAR_20);
  FUNC_2(VAR_18, VAR_4);
  break;

 case 129:
  FUNC_8(VAR_18, VAR_15);
  FUNC_3(VAR_18);
  FUNC_4(VAR_18, VAR_7, VAR_0);
  FUNC_6(VAR_18->bfa->plog, VAR_3,
    VAR_2, 0, "Port Linkdown");
  FUNC_10(VAR_20, VAR_18->pwwn);
  if (FUNC_1(VAR_18->bfa)) {
   FUNC_0(VAR_10, VAR_21, VAR_17,
    "Base port offline: WWN = %s\n", VAR_20);
   FUNC_2(VAR_18, VAR_6);
  } else {
   FUNC_0(VAR_9, VAR_21, VAR_17,
    "Base port (WWN = %s) "
    "lost fabric connectivity\n", VAR_20);
   FUNC_2(VAR_18, VAR_5);
  }
  break;

 case 128:
  FUNC_8(VAR_18, VAR_16);
  FUNC_3(VAR_18);
  FUNC_10(VAR_20, VAR_18->pwwn);
  if (FUNC_1(VAR_18->bfa)) {
   FUNC_0(VAR_10, VAR_21, VAR_17,
    "Base port offline: WWN = %s\n", VAR_20);
   FUNC_2(VAR_18, VAR_6);
  } else {
   FUNC_0(VAR_9, VAR_21, VAR_17,
    "Base port (WWN = %s) "
    "lost fabric connectivity\n", VAR_20);
   FUNC_2(VAR_18, VAR_5);
  }
  break;

 case 130:
  FUNC_8(VAR_18, VAR_14);
  FUNC_3(VAR_18);
  FUNC_4(VAR_18, VAR_7, VAR_0);
  FUNC_10(VAR_20, VAR_18->pwwn);
  if (FUNC_1(VAR_18->bfa)) {
   FUNC_0(VAR_10, VAR_21, VAR_17,
    "Base port offline: WWN = %s\n", VAR_20);
   FUNC_2(VAR_18, VAR_6);
  } else {
   FUNC_0(VAR_9, VAR_21, VAR_17,
    "Base port (WWN = %s) "
    "lost fabric connectivity\n", VAR_20);
   FUNC_2(VAR_18, VAR_5);
  }
  break;

 case 131:
  FUNC_3(VAR_18);
  FUNC_2(VAR_18, VAR_5);
  FUNC_8(VAR_18, VAR_13);
  break;

 default:
  FUNC_7(VAR_18->bfa, VAR_19);
 }
}
