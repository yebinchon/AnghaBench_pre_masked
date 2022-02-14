
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nbu2ss_udc {TYPE_1__* p_regs; } ;
struct TYPE_2__ {int SETUP_DATA1; int SETUP_DATA0; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct nbu2ss_udc *VAR_0, u32 *VAR_1)
{
 *VAR_1 = FUNC_0(&VAR_0->p_regs->SETUP_DATA0);
 VAR_1++;
 *VAR_1 = FUNC_0(&VAR_0->p_regs->SETUP_DATA1);
}
