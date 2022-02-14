
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_info {int dummy; } ;
struct TYPE_2__ {int (* setup ) (struct irq_info*) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct irq_info*) ;

__attribute__((used)) static inline int FUNC_1(struct irq_info *VAR_1)
{
 if (VAR_0->setup)
  return VAR_0->setup(VAR_1);
 return 0;
}
