
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cxl {int dummy; } ;
typedef int irq_hw_number_t ;
typedef int irq_handler_t ;
struct TYPE_2__ {int (* alloc_one_irq ) (struct cxl*) ;int (* release_one_irq ) (struct cxl*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct cxl*,int,int ,void*,char const*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct cxl*) ;
 int FUNC_2 (struct cxl*,int) ;

int FUNC_3(struct cxl *VAR_2,
   irq_handler_t VAR_3,
   void *VAR_4,
   irq_hw_number_t *VAR_5,
   unsigned int *VAR_6,
   const char *VAR_7)
{
 int VAR_8, VAR_9;

 if ((VAR_8 = VAR_1->alloc_one_irq(VAR_2)) < 0)
  return VAR_8;

 if (!(VAR_9 = FUNC_0(VAR_2, VAR_8, VAR_3, VAR_4, VAR_7)))
  goto err;

 *VAR_5 = VAR_8;
 *VAR_6 = VAR_9;

 return 0;

err:
 VAR_1->release_one_irq(VAR_2, VAR_8);
 return -VAR_0;
}
