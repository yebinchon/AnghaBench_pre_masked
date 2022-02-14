
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bfa_fcport_s {TYPE_1__* bfa; } ;
typedef enum bfa_fcport_sm_event { ____Placeholder_bfa_fcport_sm_event } bfa_fcport_sm_event ;
struct TYPE_3__ {int plog; } ;


 int VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bfa_fcport_s*,int ) ;
 int FUNC_1 (struct bfa_fcport_s*) ;
 int FUNC_2 (struct bfa_fcport_s*,int ,int ) ;
 int FUNC_3 (struct bfa_fcport_s*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ,int ,int ,int ,char*) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (struct bfa_fcport_s*,int ) ;
 int FUNC_7 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_8(struct bfa_fcport_s *VAR_9,
       enum bfa_fcport_sm_event VAR_10)
{
 FUNC_7(VAR_9->bfa, VAR_10);

 switch (VAR_10) {
 case 132:
 case 131:
 case 129:



  break;

 case 133:
  if (FUNC_3(VAR_9))
   FUNC_6(VAR_9, VAR_5);
  else
   FUNC_6(VAR_9, VAR_6);

  FUNC_1(VAR_9);
  FUNC_2(VAR_9, VAR_4, VAR_0);
  FUNC_4(VAR_9->bfa->plog, VAR_2,
        VAR_1, 0, "Port Disable");
  FUNC_0(VAR_9, VAR_3);
  break;

 case 128:
  FUNC_6(VAR_9, VAR_8);
  break;

 case 130:
  FUNC_1(VAR_9);
  FUNC_2(VAR_9, VAR_4, VAR_0);
  FUNC_6(VAR_9, VAR_7);
  break;

 default:
  FUNC_5(VAR_9->bfa, VAR_10);
 }
}
