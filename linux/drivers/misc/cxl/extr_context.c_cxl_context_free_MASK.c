
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cxl_context {int rcu; TYPE_1__* afu; int pe; scalar_t__ mapping; scalar_t__ kernelapi; } ;
struct TYPE_2__ {int contexts_lock; int contexts_idr; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct cxl_context*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;

void FUNC_5(struct cxl_context *VAR_1)
{
 if (VAR_1->kernelapi && VAR_1->mapping)
  FUNC_1(VAR_1);
 FUNC_3(&VAR_1->afu->contexts_lock);
 FUNC_2(&VAR_1->afu->contexts_idr, VAR_1->pe);
 FUNC_4(&VAR_1->afu->contexts_lock);
 FUNC_0(&VAR_1->rcu, VAR_0);
}
