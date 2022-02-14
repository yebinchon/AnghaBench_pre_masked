
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fence_refcount; int markwq; } ;
struct scif_endpt {TYPE_1__ rma_info; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct scif_endpt *VAR_1 = (struct scif_endpt *)VAR_0;

 FUNC_1(&VAR_1->rma_info.markwq);
 FUNC_0(&VAR_1->rma_info.fence_refcount);
}
