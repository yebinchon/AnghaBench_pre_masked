
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_info {int dummy; } ;
struct TYPE_2__ {int (* bind_to_cpu ) (struct irq_info*,unsigned int) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct irq_info*,unsigned int) ;

__attribute__((used)) static inline void FUNC_1(struct irq_info *VAR_1,
            unsigned VAR_2)
{
 VAR_0->bind_to_cpu(VAR_1, VAR_2);
}
