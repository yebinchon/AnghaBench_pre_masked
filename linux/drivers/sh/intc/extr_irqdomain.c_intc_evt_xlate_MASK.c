
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_domain {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 unsigned long FUNC_1 (int const) ;

__attribute__((used)) static int FUNC_2(struct irq_domain *VAR_2, struct device_node *VAR_3,
     const u32 *VAR_4, unsigned int VAR_5,
     unsigned long *VAR_6, unsigned int *VAR_7)
{
 if (FUNC_0(VAR_5 < 1))
  return -VAR_0;

 *VAR_6 = FUNC_1(VAR_4[0]);
 *VAR_7 = VAR_1;

 return 0;
}
