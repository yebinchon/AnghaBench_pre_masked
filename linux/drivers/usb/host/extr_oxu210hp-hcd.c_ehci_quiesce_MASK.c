
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct oxu_hcd {TYPE_1__* regs; } ;
struct TYPE_4__ {void* state; } ;
struct TYPE_3__ {int status; int command; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (void*) ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct oxu_hcd*,int *,int,int,int) ;
 TYPE_2__* FUNC_3 (struct oxu_hcd*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,int *) ;

__attribute__((used)) static void FUNC_6(struct oxu_hcd *VAR_6)
{
 u32 VAR_7;






 VAR_7 = FUNC_4(&VAR_6->regs->command) << 10;
 VAR_7 &= VAR_4 | VAR_5;
 if (FUNC_2(VAR_6, &VAR_6->regs->status, VAR_4 | VAR_5,
    VAR_7, 16 * 125) != 0) {
  FUNC_3(VAR_6)->state = VAR_3;
  return;
 }


 VAR_7 = FUNC_4(&VAR_6->regs->command);
 VAR_7 &= ~(VAR_0 | VAR_1 | VAR_2);
 FUNC_5(VAR_7, &VAR_6->regs->command);


 if (FUNC_2(VAR_6, &VAR_6->regs->status, VAR_4 | VAR_5,
    0, 16 * 125) != 0) {
  FUNC_3(VAR_6)->state = VAR_3;
  return;
 }
}
