
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_flash_s {int op_busy; int status; int cbarg; int (* cbfn ) (int ,int ) ;} ;
typedef enum bfa_ioc_event_e { ____Placeholder_bfa_ioc_event_e } bfa_ioc_event_e ;




 int VAR_0 ;
 int FUNC_0 (struct bfa_flash_s*,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_1, enum bfa_ioc_event_e VAR_2)
{
 struct bfa_flash_s *VAR_3 = VAR_1;

 FUNC_0(VAR_3, VAR_2);
 switch (VAR_2) {
 case 129:
 case 128:
  if (VAR_3->op_busy) {
   VAR_3->status = VAR_0;
   VAR_3->cbfn(VAR_3->cbarg, VAR_3->status);
   VAR_3->op_busy = 0;
  }
  break;

 default:
  break;
 }
}
