
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cxl {TYPE_1__* guest; } ;
struct TYPE_2__ {int irq_alloc_lock; } ;


 int FUNC_0 (struct cxl*,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct cxl *VAR_0, int VAR_1)
{
 FUNC_1(&VAR_0->guest->irq_alloc_lock);
 FUNC_0(VAR_0, VAR_1, 1);
 FUNC_2(&VAR_0->guest->irq_alloc_lock);
}
