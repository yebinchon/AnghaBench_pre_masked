
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocxl_context {TYPE_1__* afu; int irq_idr; int pasid; } ;
struct TYPE_2__ {int contexts_lock; int contexts_idr; int pasid_count; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct ocxl_context*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ocxl_context*) ;
 int FUNC_6 (TYPE_1__*) ;

void FUNC_7(struct ocxl_context *VAR_0)
{
 FUNC_3(&VAR_0->afu->contexts_lock);
 VAR_0->afu->pasid_count--;
 FUNC_1(&VAR_0->afu->contexts_idr, VAR_0->pasid);
 FUNC_4(&VAR_0->afu->contexts_lock);

 FUNC_5(VAR_0);
 FUNC_0(&VAR_0->irq_idr);

 FUNC_6(VAR_0->afu);
 FUNC_2(VAR_0);
}
