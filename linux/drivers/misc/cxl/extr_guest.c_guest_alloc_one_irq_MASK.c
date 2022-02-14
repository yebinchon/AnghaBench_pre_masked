
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cxl {TYPE_1__* guest; } ;
struct TYPE_2__ {int irq_alloc_lock; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct cxl*,int,int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct cxl *VAR_1)
{
 int VAR_2;

 FUNC_1(&VAR_1->guest->irq_alloc_lock);
 if (FUNC_0(VAR_1, 1, &VAR_2))
  VAR_2 = -VAR_0;
 FUNC_2(&VAR_1->guest->irq_alloc_lock);
 return VAR_2;
}
