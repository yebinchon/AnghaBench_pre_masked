
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct irq_domain {int dummy; } ;
struct irq_data {int hwirq; } ;
struct altera_msi {int lock; int used; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *,char*,int) ;
 struct altera_msi* FUNC_2 (struct irq_data*) ;
 struct irq_data* FUNC_3 (struct irq_domain*,unsigned int) ;
 int FUNC_4 (struct altera_msi*,int ) ;
 int FUNC_5 (struct altera_msi*,int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int,int ) ;

__attribute__((used)) static void FUNC_9(struct irq_domain *VAR_1,
       unsigned int VAR_2, unsigned int VAR_3)
{
 struct irq_data *VAR_4 = FUNC_3(VAR_1, VAR_2);
 struct altera_msi *VAR_5 = FUNC_2(VAR_4);
 u32 VAR_6;

 FUNC_6(&VAR_5->lock);

 if (!FUNC_8(VAR_4->hwirq, VAR_5->used)) {
  FUNC_1(&VAR_5->pdev->dev, "trying to free unused MSI#%lu\n",
   VAR_4->hwirq);
 } else {
  FUNC_0(VAR_4->hwirq, VAR_5->used);
  VAR_6 = FUNC_4(VAR_5, VAR_0);
  VAR_6 &= ~(1 << VAR_4->hwirq);
  FUNC_5(VAR_5, VAR_6, VAR_0);
 }

 FUNC_7(&VAR_5->lock);
}
