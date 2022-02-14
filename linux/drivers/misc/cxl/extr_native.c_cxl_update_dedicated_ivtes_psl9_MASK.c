
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * range; int * offset; } ;
struct cxl_context {TYPE_1__ irqs; TYPE_2__* elem; } ;
struct TYPE_4__ {void** ivte_ranges; void** ivte_offsets; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;

void FUNC_1(struct cxl_context *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  VAR_1->elem->ivte_offsets[VAR_2] = FUNC_0(VAR_1->irqs.offset[VAR_2]);
  VAR_1->elem->ivte_ranges[VAR_2] = FUNC_0(VAR_1->irqs.range[VAR_2]);
 }
}
