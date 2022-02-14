
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fotg210_hcd {TYPE_1__* regs; } ;
struct TYPE_2__ {int frame_index; } ;


 int FUNC_0 (struct fotg210_hcd*,int *) ;

__attribute__((used)) static inline unsigned FUNC_1(struct fotg210_hcd *VAR_0)
{
 return FUNC_0(VAR_0, &VAR_0->regs->frame_index);
}
