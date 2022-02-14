
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;
struct intc_handle_int {int handle; } ;
struct intc_desc_int {int nr_prio; int prio; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct irq_data*,int ) ;
 struct intc_desc_int* FUNC_3 (unsigned int) ;
 struct intc_handle_int* FUNC_4 (int ,int ,unsigned int) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (unsigned int,unsigned int) ;
 struct irq_data* FUNC_7 (unsigned int) ;

int FUNC_8(unsigned int VAR_2, unsigned int VAR_3)
{
 struct intc_desc_int *VAR_4 = FUNC_3(VAR_2);
 struct irq_data *VAR_5 = FUNC_7(VAR_2);
 struct intc_handle_int *VAR_6;

 if (!FUNC_5(VAR_2) || VAR_3 <= 1)
  return -VAR_0;

 VAR_6 = FUNC_4(VAR_4->prio, VAR_4->nr_prio, VAR_2);
 if (VAR_6) {
  if (VAR_3 >= (1 << FUNC_1(VAR_6->handle)))
   return -VAR_0;

  FUNC_6(VAR_2, VAR_3);






  if (FUNC_0(VAR_6->handle) != VAR_1)
   FUNC_2(VAR_5, VAR_6->handle);
 }
 return 0;
}
