
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {scalar_t__ hwirq; } ;
struct iproc_msi {int dummy; } ;
struct cpumask {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cpumask const*) ;
 scalar_t__ FUNC_1 (struct iproc_msi*,scalar_t__) ;
 int FUNC_2 (struct iproc_msi*,scalar_t__) ;
 struct iproc_msi* FUNC_3 (struct irq_data*) ;

__attribute__((used)) static int FUNC_4(struct irq_data *VAR_2,
          const struct cpumask *VAR_3, bool VAR_4)
{
 struct iproc_msi *VAR_5 = FUNC_3(VAR_2);
 int VAR_6 = FUNC_0(VAR_3);
 int VAR_7;

 VAR_7 = FUNC_2(VAR_5, VAR_2->hwirq);
 if (VAR_7 == VAR_6)
  return VAR_1;


 VAR_2->hwirq = FUNC_1(VAR_5, VAR_2->hwirq) + VAR_6;

 return VAR_0;
}
