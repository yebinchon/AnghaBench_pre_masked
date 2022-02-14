
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct oxu_hcd {TYPE_1__* regs; } ;
struct TYPE_2__ {int status; int command; int intr_enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct oxu_hcd*,int *,int,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *) ;

__attribute__((used)) static int FUNC_3(struct oxu_hcd *VAR_2)
{
 u32 VAR_3 = FUNC_1(&VAR_2->regs->status);


 FUNC_2(0, &VAR_2->regs->intr_enable);

 if ((VAR_3 & VAR_1) != 0)
  return 0;

 VAR_3 = FUNC_1(&VAR_2->regs->command);
 VAR_3 &= ~VAR_0;
 FUNC_2(VAR_3, &VAR_2->regs->command);
 return FUNC_0(VAR_2, &VAR_2->regs->status,
     VAR_1, VAR_1, 16 * 125);
}
