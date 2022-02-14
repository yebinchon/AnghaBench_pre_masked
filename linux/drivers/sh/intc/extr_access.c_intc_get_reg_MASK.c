
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intc_desc_int {unsigned int nr_reg; unsigned long* reg; } ;


 int FUNC_0 () ;
 unsigned long FUNC_1 (struct intc_desc_int*,unsigned long) ;

unsigned int FUNC_2(struct intc_desc_int *VAR_0, unsigned long VAR_1)
{
 unsigned int VAR_2;

 VAR_1 = FUNC_1(VAR_0, VAR_1);

 for (VAR_2 = 0; VAR_2 < VAR_0->nr_reg; VAR_2++) {
  if (VAR_0->reg[VAR_2] == VAR_1)
   return VAR_2;
 }

 FUNC_0();
 return 0;
}
