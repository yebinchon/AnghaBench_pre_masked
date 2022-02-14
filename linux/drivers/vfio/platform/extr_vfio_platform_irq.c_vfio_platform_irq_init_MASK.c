
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vfio_platform_irq {int dummy; } ;
struct vfio_platform_device {int (* get_irq ) (struct vfio_platform_device*,int) ;int num_irqs; TYPE_1__* irqs; } ;
struct TYPE_3__ {int flags; int count; int hwirq; int masked; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int,int,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct vfio_platform_device*,int) ;
 int FUNC_5 (struct vfio_platform_device*,int) ;

int FUNC_6(struct vfio_platform_device *VAR_7)
{
 int VAR_8 = 0, VAR_9;

 while (VAR_7->get_irq(VAR_7, VAR_8) >= 0)
  VAR_8++;

 VAR_7->irqs = FUNC_1(VAR_8, sizeof(struct vfio_platform_irq), VAR_2);
 if (!VAR_7->irqs)
  return -VAR_1;

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  int VAR_10 = VAR_7->get_irq(VAR_7, VAR_9);

  if (VAR_10 < 0)
   goto err;

  FUNC_3(&VAR_7->irqs[VAR_9].lock);

  VAR_7->irqs[VAR_9].flags = VAR_5;

  if (FUNC_0(VAR_10) & VAR_3)
   VAR_7->irqs[VAR_9].flags |= VAR_6
      | VAR_4;

  VAR_7->irqs[VAR_9].count = 1;
  VAR_7->irqs[VAR_9].hwirq = VAR_10;
  VAR_7->irqs[VAR_9].masked = 0;
 }

 VAR_7->num_irqs = VAR_8;

 return 0;
err:
 FUNC_2(VAR_7->irqs);
 return -VAR_0;
}
