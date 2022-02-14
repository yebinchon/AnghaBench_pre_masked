
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_platform_irq {int hwirq; int masked; struct eventfd_ctx* trigger; int name; } ;
struct vfio_platform_device {int name; struct vfio_platform_irq* irqs; } ;
struct eventfd_ctx {int dummy; } ;
typedef int irq_handler_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct eventfd_ctx*) ;
 int FUNC_1 (struct eventfd_ctx*) ;
 int FUNC_2 (int ) ;
 struct eventfd_ctx* FUNC_3 (int) ;
 int FUNC_4 (struct eventfd_ctx*) ;
 int FUNC_5 (int ,struct vfio_platform_irq*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,char*,int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int ,int ,struct vfio_platform_irq*) ;

__attribute__((used)) static int FUNC_11(struct vfio_platform_device *VAR_3, int VAR_4,
       int VAR_5, irq_handler_t VAR_6)
{
 struct vfio_platform_irq *VAR_7 = &VAR_3->irqs[VAR_4];
 struct eventfd_ctx *VAR_8;
 int VAR_9;

 if (VAR_7->trigger) {
  FUNC_6(VAR_7->hwirq, VAR_2);
  FUNC_5(VAR_7->hwirq, VAR_7);
  FUNC_9(VAR_7->name);
  FUNC_4(VAR_7->trigger);
  VAR_7->trigger = ((void*)0);
 }

 if (VAR_5 < 0)
  return 0;

 VAR_7->name = FUNC_8(VAR_1, "vfio-irq[%d](%s)",
      VAR_7->hwirq, VAR_3->name);
 if (!VAR_7->name)
  return -VAR_0;

 VAR_8 = FUNC_3(VAR_5);
 if (FUNC_0(VAR_8)) {
  FUNC_9(VAR_7->name);
  return FUNC_1(VAR_8);
 }

 VAR_7->trigger = VAR_8;

 FUNC_7(VAR_7->hwirq, VAR_2);
 VAR_9 = FUNC_10(VAR_7->hwirq, VAR_6, 0, VAR_7->name, VAR_7);
 if (VAR_9) {
  FUNC_9(VAR_7->name);
  FUNC_4(VAR_8);
  VAR_7->trigger = ((void*)0);
  return VAR_9;
 }

 if (!VAR_7->masked)
  FUNC_2(VAR_7->hwirq);

 return 0;
}
