
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_platform_device {int num_irqs; int irqs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct vfio_platform_device*,int,int,int *) ;

void FUNC_2(struct vfio_platform_device *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_irqs; VAR_1++)
  FUNC_1(VAR_0, VAR_1, -1, ((void*)0));

 VAR_0->num_irqs = 0;
 FUNC_0(VAR_0->irqs);
}
