
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fotg210_hcd {TYPE_1__* regs; } ;
struct TYPE_2__ {int otgcsr; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static inline unsigned int
FUNC_1(struct fotg210_hcd *VAR_1, unsigned int VAR_2)
{
 return (FUNC_0(&VAR_1->regs->otgcsr)
  & VAR_0) >> 22;
}
