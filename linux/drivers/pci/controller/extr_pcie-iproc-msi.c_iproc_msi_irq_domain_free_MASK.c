
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {int dummy; } ;
struct irq_data {int hwirq; } ;
struct iproc_msi {int bitmap_lock; int nr_cpus; int bitmap; } ;


 int FUNC_0 (int ,unsigned int,int ) ;
 unsigned int FUNC_1 (struct iproc_msi*,int ) ;
 struct iproc_msi* FUNC_2 (struct irq_data*) ;
 int FUNC_3 (struct irq_domain*,unsigned int,unsigned int) ;
 struct irq_data* FUNC_4 (struct irq_domain*,unsigned int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct irq_domain *VAR_0,
          unsigned int VAR_1, unsigned int VAR_2)
{
 struct irq_data *VAR_3 = FUNC_4(VAR_0, VAR_1);
 struct iproc_msi *VAR_4 = FUNC_2(VAR_3);
 unsigned int VAR_5;

 FUNC_5(&VAR_4->bitmap_lock);

 VAR_5 = FUNC_1(VAR_4, VAR_3->hwirq);
 FUNC_0(VAR_4->bitmap, VAR_5, VAR_4->nr_cpus);

 FUNC_6(&VAR_4->bitmap_lock);

 FUNC_3(VAR_0, VAR_1, VAR_2);
}
