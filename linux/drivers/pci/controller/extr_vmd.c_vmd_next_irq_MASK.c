
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmd_irq_list {scalar_t__ count; } ;
struct vmd_dev {int msix_count; struct vmd_irq_list* irqs; } ;
struct msi_desc {int dummy; } ;
struct TYPE_2__ {int class; } ;



 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct msi_desc*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static struct vmd_irq_list *FUNC_3(struct vmd_dev *VAR_1, struct msi_desc *VAR_2)
{
 int VAR_3, VAR_4 = 1;
 unsigned long VAR_5;

 if (VAR_1->msix_count == 1)
  return &VAR_1->irqs[0];





 switch (FUNC_0(VAR_2)->class) {
 case 128:
  break;
 default:
  return &VAR_1->irqs[0];
 }

 FUNC_1(&VAR_0, VAR_5);
 for (VAR_3 = 1; VAR_3 < VAR_1->msix_count; VAR_3++)
  if (VAR_1->irqs[VAR_3].count < VAR_1->irqs[VAR_4].count)
   VAR_4 = VAR_3;
 VAR_1->irqs[VAR_4].count++;
 FUNC_2(&VAR_0, VAR_5);

 return &VAR_1->irqs[VAR_4];
}
