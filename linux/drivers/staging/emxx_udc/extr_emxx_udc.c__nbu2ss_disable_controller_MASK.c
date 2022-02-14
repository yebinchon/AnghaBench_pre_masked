
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nbu2ss_udc {int udc_enabled; TYPE_1__* p_regs; } ;
struct TYPE_2__ {int EPCTR; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct nbu2ss_udc*) ;

__attribute__((used)) static void FUNC_2(struct nbu2ss_udc *VAR_2)
{
 if (VAR_2->udc_enabled) {
  VAR_2->udc_enabled = 0;
  FUNC_1(VAR_2);
  FUNC_0(&VAR_2->p_regs->EPCTR, (VAR_0 | VAR_1));
 }
}
