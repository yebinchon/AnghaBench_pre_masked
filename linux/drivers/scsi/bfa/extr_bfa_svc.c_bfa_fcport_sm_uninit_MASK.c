
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_fcport_s {int use_flash_cfg; int bfa; } ;
typedef enum bfa_fcport_sm_event { ____Placeholder_bfa_fcport_sm_event } bfa_fcport_sm_event ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (struct bfa_fcport_s*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct bfa_fcport_s*,int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void
FUNC_4(struct bfa_fcport_s *VAR_6,
   enum bfa_fcport_sm_event VAR_7)
{
 FUNC_3(VAR_6->bfa, VAR_7);

 switch (VAR_7) {
 case 128:



  VAR_6->use_flash_cfg = VAR_1;

  if (FUNC_0(VAR_6)) {
   FUNC_3(VAR_6->bfa, VAR_1);
   FUNC_2(VAR_6, VAR_3);
  } else {
   FUNC_3(VAR_6->bfa, VAR_0);
   FUNC_2(VAR_6,
     VAR_4);
  }
  break;

 case 130:





  break;

 case 131:




  FUNC_2(VAR_6, VAR_2);
  break;

 case 129:
  FUNC_2(VAR_6, VAR_5);
  break;

 default:
  FUNC_1(VAR_6->bfa, VAR_7);
 }
}
