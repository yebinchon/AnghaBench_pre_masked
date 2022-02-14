
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* range; scalar_t__* offset; } ;
struct cxl_context {TYPE_1__ irqs; } ;
typedef scalar_t__ irq_hw_number_t ;
typedef int __u16 ;


 int VAR_0 ;

__attribute__((used)) static irq_hw_number_t FUNC_0(struct cxl_context *VAR_1, int VAR_2)
{
 __u16 VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3 = VAR_1->irqs.range[VAR_4];
  if (VAR_2 < VAR_3) {
   return VAR_1->irqs.offset[VAR_4] + VAR_2;
  }
  VAR_2 -= VAR_3;
 }
 return 0;
}
