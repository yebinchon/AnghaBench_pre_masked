
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct vfio_platform_irq {int flags; int hwirq; } ;
struct vfio_platform_device {struct vfio_platform_irq* irqs; } ;
typedef int (* irq_handler_t ) (int ,struct vfio_platform_irq*) ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct vfio_platform_irq*) ;
 int FUNC_1 (int ,struct vfio_platform_irq*) ;
 int FUNC_2 (struct vfio_platform_device*,unsigned int,int,int (*) (int ,struct vfio_platform_irq*)) ;

__attribute__((used)) static int FUNC_3(struct vfio_platform_device *VAR_5,
      unsigned VAR_6, unsigned VAR_7,
      unsigned VAR_8, uint32_t VAR_9,
      void *VAR_10)
{
 struct vfio_platform_irq *VAR_11 = &VAR_5->irqs[VAR_6];
 irq_handler_t VAR_12;

 if (VAR_5->irqs[VAR_6].flags & VAR_1)
  VAR_12 = FUNC_0;
 else
  VAR_12 = FUNC_1;

 if (!VAR_8 && (VAR_9 & VAR_4))
  return FUNC_2(VAR_5, VAR_6, -1, VAR_12);

 if (VAR_7 != 0 || VAR_8 != 1)
  return -VAR_0;

 if (VAR_9 & VAR_3) {
  int32_t VAR_13 = *(int32_t *)VAR_10;

  return FUNC_2(VAR_5, VAR_6, VAR_13, VAR_12);
 }

 if (VAR_9 & VAR_4) {
  VAR_12(VAR_11->hwirq, VAR_11);

 } else if (VAR_9 & VAR_2) {
  uint8_t VAR_14 = *(uint8_t *)VAR_10;

  if (VAR_14)
   VAR_12(VAR_11->hwirq, VAR_11);
 }

 return 0;
}
