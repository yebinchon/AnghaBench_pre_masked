
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cxl_context {TYPE_1__* afu; } ;
typedef int irq_hw_number_t ;
typedef int irq_handler_t ;
struct TYPE_2__ {int adapter; } ;


 int VAR_0 ;
 int FUNC_0 (struct cxl_context*,int) ;
 int FUNC_1 (int ,int ,int ,void*,char*) ;

int FUNC_2(struct cxl_context *VAR_1, int VAR_2,
      irq_handler_t VAR_3, void *VAR_4, char *VAR_5)
{
 irq_hw_number_t VAR_6;




 VAR_6 = FUNC_0(VAR_1, VAR_2);
 if (!VAR_6)
  return -VAR_0;

 return FUNC_1(VAR_1->afu->adapter, VAR_6, VAR_3, VAR_4, VAR_5);
}
