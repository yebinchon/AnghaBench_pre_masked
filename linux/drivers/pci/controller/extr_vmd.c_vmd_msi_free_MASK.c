
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmd_irq {TYPE_1__* irq; } ;
struct msi_domain_info {int dummy; } ;
struct irq_domain {int dummy; } ;
struct TYPE_2__ {int count; int srcu; } ;


 struct vmd_irq* FUNC_0 (unsigned int) ;
 int FUNC_1 (struct vmd_irq*) ;
 int VAR_0 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct irq_domain *VAR_1,
   struct msi_domain_info *VAR_2, unsigned int VAR_3)
{
 struct vmd_irq *VAR_4 = FUNC_0(VAR_3);
 unsigned long VAR_5;

 FUNC_4(&VAR_4->irq->srcu);


 FUNC_2(&VAR_0, VAR_5);
 VAR_4->irq->count--;
 FUNC_3(&VAR_0, VAR_5);

 FUNC_1(VAR_4);
}
