
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxl_context {int dummy; } ;
typedef int irq_hw_number_t ;


 int FUNC_0 (struct cxl_context*,int) ;
 int FUNC_1 (unsigned int,void*) ;
 unsigned int FUNC_2 (int *,int ) ;

void FUNC_3(struct cxl_context *VAR_0, int VAR_1, void *VAR_2)
{
 irq_hw_number_t VAR_3;
 unsigned int VAR_4;

 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (!VAR_3)
  return;

 VAR_4 = FUNC_2(((void*)0), VAR_3);
 if (VAR_4)
  FUNC_1(VAR_4, VAR_2);
}
