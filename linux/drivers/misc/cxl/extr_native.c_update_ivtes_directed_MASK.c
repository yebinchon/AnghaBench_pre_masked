
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * range; int * offset; } ;
struct cxl_context {scalar_t__ status; TYPE_2__ irqs; TYPE_1__* elem; } ;
struct TYPE_3__ {void** ivte_ranges; void** ivte_offsets; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct cxl_context*) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct cxl_context*) ;
 int FUNC_4 (struct cxl_context*) ;

__attribute__((used)) static void FUNC_5(struct cxl_context *VAR_2)
{
 bool VAR_3 = (VAR_2->status == VAR_1);
 int VAR_4;

 if (VAR_3) {
  FUNC_0(FUNC_4(VAR_2));
  FUNC_0(FUNC_3(VAR_2));
 }

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_2->elem->ivte_offsets[VAR_4] = FUNC_2(VAR_2->irqs.offset[VAR_4]);
  VAR_2->elem->ivte_ranges[VAR_4] = FUNC_2(VAR_2->irqs.range[VAR_4]);
 }
 if (VAR_3)
  FUNC_0(FUNC_1(VAR_2));
}
