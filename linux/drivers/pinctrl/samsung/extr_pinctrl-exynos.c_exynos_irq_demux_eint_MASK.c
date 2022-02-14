
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {int dummy; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct irq_domain*,unsigned int) ;

__attribute__((used)) static inline void FUNC_3(unsigned long VAR_0,
      struct irq_domain *VAR_1)
{
 unsigned int VAR_2;

 while (VAR_0) {
  VAR_2 = FUNC_0(VAR_0) - 1;
  FUNC_1(FUNC_2(VAR_1, VAR_2));
  VAR_0 &= ~(1 << VAR_2);
 }
}
