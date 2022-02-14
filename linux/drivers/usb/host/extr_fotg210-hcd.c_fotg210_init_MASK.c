
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct fotg210_hcd {TYPE_1__* regs; } ;
struct TYPE_2__ {int otgcsr; int gmir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static void FUNC_2(struct fotg210_hcd *VAR_5)
{
 u32 VAR_6;

 FUNC_1(VAR_1 | VAR_2 | VAR_0,
   &VAR_5->regs->gmir);

 VAR_6 = FUNC_0(&VAR_5->regs->otgcsr);
 VAR_6 &= ~VAR_3;
 VAR_6 |= VAR_4;
 FUNC_1(VAR_6, &VAR_5->regs->otgcsr);
}
