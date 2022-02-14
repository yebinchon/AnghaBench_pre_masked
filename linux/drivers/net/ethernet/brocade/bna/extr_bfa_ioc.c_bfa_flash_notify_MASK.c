
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_flash {int op_busy; int status; int cbarg; int (* cbfn ) (int ,int ) ;} ;
typedef enum bfa_ioc_event { ____Placeholder_bfa_ioc_event } bfa_ioc_event ;




 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_1, enum bfa_ioc_event VAR_2)
{
 struct bfa_flash *VAR_3 = VAR_1;

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
