
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sih_agent {scalar_t__ irq_base; int edge_change; } ;
struct irq_data {scalar_t__ irq; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 struct sih_agent* FUNC_1 (struct irq_data*) ;
 unsigned int FUNC_2 (struct irq_data*) ;

__attribute__((used)) static int FUNC_3(struct irq_data *VAR_3, unsigned VAR_4)
{
 struct sih_agent *VAR_5 = FUNC_1(VAR_3);

 if (VAR_4 & ~(VAR_1 | VAR_2))
  return -VAR_0;

 if (FUNC_2(VAR_3) != VAR_4)
  VAR_5->edge_change |= FUNC_0(VAR_3->irq - VAR_5->irq_base);

 return 0;
}
