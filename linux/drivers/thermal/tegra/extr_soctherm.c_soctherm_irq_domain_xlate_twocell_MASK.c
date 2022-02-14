
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_domain {int dummy; } ;
struct device_node {int dummy; } ;
typedef int irq_hw_number_t ;


 int VAR_0 ;
 int const VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct irq_domain *VAR_2,
 struct device_node *VAR_3, const u32 *VAR_4, unsigned int VAR_5,
 irq_hw_number_t *VAR_6, unsigned int *VAR_7)
{
 if (FUNC_0(VAR_5 < 2))
  return -VAR_0;





 *VAR_6 = VAR_4[0] - 1;
 *VAR_7 = VAR_4[1] & VAR_1;
 return 0;
}
