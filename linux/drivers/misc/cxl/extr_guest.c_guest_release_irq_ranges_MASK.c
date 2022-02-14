
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cxl_irq_ranges {int * range; int * offset; } ;
struct cxl {TYPE_1__* guest; } ;
struct TYPE_2__ {int irq_alloc_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct cxl*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct cxl_irq_ranges *VAR_1,
    struct cxl *VAR_2)
{
 int VAR_3;

 FUNC_1(&VAR_2->guest->irq_alloc_lock);
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_0(VAR_2, VAR_1->offset[VAR_3], VAR_1->range[VAR_3]);
 FUNC_2(&VAR_2->guest->irq_alloc_lock);
}
