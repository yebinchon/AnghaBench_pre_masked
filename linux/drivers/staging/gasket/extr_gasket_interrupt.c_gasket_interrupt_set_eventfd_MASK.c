
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gasket_interrupt_data {int num_interrupts; struct eventfd_ctx** eventfd_ctxs; } ;
struct eventfd_ctx {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct eventfd_ctx*) ;
 int FUNC_1 (struct eventfd_ctx*) ;
 struct eventfd_ctx* FUNC_2 (int) ;

int FUNC_3(struct gasket_interrupt_data *VAR_1,
     int VAR_2, int VAR_3)
{
 struct eventfd_ctx *VAR_4 = FUNC_2(VAR_3);

 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 if (VAR_2 < 0 || VAR_2 >= VAR_1->num_interrupts)
  return -VAR_0;

 VAR_1->eventfd_ctxs[VAR_2] = VAR_4;
 return 0;
}
