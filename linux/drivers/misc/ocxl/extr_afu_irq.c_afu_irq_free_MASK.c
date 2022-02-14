
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ocxl_context {TYPE_2__* afu; scalar_t__ mapping; int pasid; } ;
struct afu_irq {int hw_irq; int private; int (* free_private ) (int ) ;int id; } ;
struct TYPE_4__ {TYPE_1__* fn; } ;
struct TYPE_3__ {int link; } ;


 int VAR_0 ;
 int FUNC_0 (struct afu_irq*) ;
 int FUNC_1 (struct ocxl_context*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct afu_irq*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (scalar_t__,int ,int,int) ;

__attribute__((used)) static void FUNC_7(struct afu_irq *VAR_1, struct ocxl_context *VAR_2)
{
 FUNC_5(VAR_2->pasid, VAR_1->id);
 if (VAR_2->mapping)
  FUNC_6(VAR_2->mapping,
    FUNC_1(VAR_2, VAR_1->id),
    1 << VAR_0, 1);
 FUNC_3(VAR_1);
 if (VAR_1->free_private)
  VAR_1->free_private(VAR_1->private);
 FUNC_2(VAR_2->afu->fn->link, VAR_1->hw_irq);
 FUNC_0(VAR_1);
}
