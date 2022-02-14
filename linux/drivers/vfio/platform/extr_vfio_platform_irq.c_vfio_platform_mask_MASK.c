
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_platform_irq {int masked; int lock; int hwirq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct vfio_platform_irq *VAR_0)
{
 unsigned long VAR_1;

 FUNC_1(&VAR_0->lock, VAR_1);

 if (!VAR_0->masked) {
  FUNC_0(VAR_0->hwirq);
  VAR_0->masked = 1;
 }

 FUNC_2(&VAR_0->lock, VAR_1);
}
