
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_platform_irq {int masked; int trigger; int lock; int hwirq; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_2, void *VAR_3)
{
 struct vfio_platform_irq *VAR_4 = VAR_3;
 unsigned long VAR_5;
 int VAR_6 = VAR_1;

 FUNC_2(&VAR_4->lock, VAR_5);

 if (!VAR_4->masked) {
  VAR_6 = VAR_0;


  FUNC_0(VAR_4->hwirq);
  VAR_4->masked = 1;
 }

 FUNC_3(&VAR_4->lock, VAR_5);

 if (VAR_6 == VAR_0)
  FUNC_1(VAR_4->trigger, 1);

 return VAR_6;
}
