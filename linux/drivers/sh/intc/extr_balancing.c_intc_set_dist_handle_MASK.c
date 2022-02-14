
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intc_desc_int {int dummy; } ;
struct TYPE_2__ {int mask_regs; } ;
struct intc_desc {TYPE_1__ hw; } ;
typedef int intc_enum ;


 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct intc_desc*,struct intc_desc_int*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(unsigned int VAR_2, struct intc_desc *VAR_3,
     struct intc_desc_int *VAR_4, intc_enum VAR_5)
{
 unsigned long VAR_6;




 if (!VAR_3->hw.mask_regs)
  return;

 FUNC_1(&VAR_1, VAR_6);
 VAR_0[VAR_2] = FUNC_0(VAR_3, VAR_4, VAR_5);
 FUNC_2(&VAR_1, VAR_6);
}
