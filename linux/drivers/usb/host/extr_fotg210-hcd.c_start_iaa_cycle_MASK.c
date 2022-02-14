
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fotg210_hcd {scalar_t__ rh_state; int command; TYPE_1__* regs; int * async_unlink; int * async_iaa; scalar_t__ async_unlinking; } ;
struct TYPE_2__ {int command; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct fotg210_hcd*) ;
 int FUNC_1 (struct fotg210_hcd*,int ,int) ;
 int FUNC_2 (struct fotg210_hcd*,int *) ;
 int FUNC_3 (struct fotg210_hcd*,int,int *) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(struct fotg210_hcd *VAR_3, bool VAR_4)
{




 if (VAR_3->async_iaa || VAR_3->async_unlinking)
  return;


 VAR_3->async_iaa = VAR_3->async_unlink;
 VAR_3->async_unlink = ((void*)0);


 if (FUNC_5(VAR_3->rh_state < VAR_2)) {
  if (!VAR_4)
   FUNC_0(VAR_3);


 } else if (FUNC_4(VAR_3->rh_state == VAR_2)) {

  FUNC_6();

  FUNC_3(VAR_3, VAR_3->command | VAR_0,
    &VAR_3->regs->command);
  FUNC_2(VAR_3, &VAR_3->regs->command);
  FUNC_1(VAR_3, VAR_1,
    1);
 }
}
