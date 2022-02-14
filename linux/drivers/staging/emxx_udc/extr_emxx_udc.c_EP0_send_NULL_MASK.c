
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nbu2ss_udc {TYPE_1__* p_regs; } ;
struct TYPE_2__ {int EP0_CONTROL; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2(struct nbu2ss_udc *VAR_4, bool VAR_5)
{
 u32 VAR_6;

 VAR_6 = FUNC_0(&VAR_4->p_regs->EP0_CONTROL);
 VAR_6 &= ~(u32)VAR_1;

 if (VAR_5)
  VAR_6 |= (VAR_2 | VAR_3 | VAR_0);
 else
  VAR_6 |= (VAR_2 | VAR_0);

 FUNC_1(&VAR_4->p_regs->EP0_CONTROL, VAR_6);

 return 0;
}
