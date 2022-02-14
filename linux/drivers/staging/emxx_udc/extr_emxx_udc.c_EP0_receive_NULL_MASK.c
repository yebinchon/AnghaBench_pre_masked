
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nbu2ss_udc {TYPE_1__* p_regs; } ;
struct TYPE_2__ {int EP0_CONTROL; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(struct nbu2ss_udc *VAR_2, bool VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_0(&VAR_2->p_regs->EP0_CONTROL);
 VAR_4 &= ~(u32)VAR_0;

 if (VAR_3)
  VAR_4 |= VAR_1;

 FUNC_1(&VAR_2->p_regs->EP0_CONTROL, VAR_4);

 return 0;
}
