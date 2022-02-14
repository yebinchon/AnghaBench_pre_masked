
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cxl_irq_ranges {int* offset; int* range; } ;
struct cxl {TYPE_1__* guest; } ;
struct TYPE_2__ {int irq_alloc_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct cxl*,int,int*) ;
 int FUNC_1 (struct cxl*,int,int) ;
 int FUNC_2 (struct cxl_irq_ranges*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct cxl_irq_ranges *VAR_2,
    struct cxl *VAR_3, unsigned int VAR_4)
{
 int VAR_5, VAR_6, VAR_7;

 FUNC_2(VAR_2, 0, sizeof(struct cxl_irq_ranges));

 FUNC_3(&VAR_3->guest->irq_alloc_lock);
 for (VAR_5 = 0; VAR_5 < VAR_0 && VAR_4; VAR_5++) {
  VAR_6 = VAR_4;
  while (VAR_6) {
   if (FUNC_0(VAR_3, VAR_6, &VAR_7) == 0)
    break;
   VAR_6 /= 2;
  }
  if (!VAR_6)
   goto error;
  VAR_2->offset[VAR_5] = VAR_7;
  VAR_2->range[VAR_5] = VAR_6;
  VAR_4 -= VAR_6;
 }
 if (VAR_4)
  goto error;
 FUNC_4(&VAR_3->guest->irq_alloc_lock);
 return 0;

error:
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  FUNC_1(VAR_3, VAR_2->offset[VAR_5], VAR_2->range[VAR_5]);
 FUNC_4(&VAR_3->guest->irq_alloc_lock);
 return -VAR_1;
}
