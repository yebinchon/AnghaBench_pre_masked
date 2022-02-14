
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ocxl_context {int irq_lock; int irq_idr; TYPE_2__* afu; int pasid; } ;
struct afu_irq {int id; int hw_irq; int virq; int trigger_page; } ;
struct TYPE_4__ {TYPE_1__* fn; } ;
struct TYPE_3__ {int link; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct afu_irq*,int ,int ,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct afu_irq*) ;
 struct afu_irq* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int *,int *) ;
 int FUNC_8 (struct ocxl_context*,struct afu_irq*) ;
 int FUNC_9 (int ,int,int ,int ) ;

int FUNC_10(struct ocxl_context *VAR_4, int *VAR_5)
{
 struct afu_irq *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(sizeof(struct afu_irq), VAR_2);
 if (!VAR_6)
  return -VAR_0;






 FUNC_4(&VAR_4->irq_lock);

 VAR_6->id = FUNC_0(&VAR_4->irq_idr, VAR_6, 0, VAR_3,
   VAR_2);
 if (VAR_6->id < 0) {
  VAR_7 = -VAR_1;
  goto err_unlock;
 }

 VAR_7 = FUNC_7(VAR_4->afu->fn->link, &VAR_6->hw_irq,
    &VAR_6->trigger_page);
 if (VAR_7)
  goto err_idr;

 VAR_7 = FUNC_8(VAR_4, VAR_6);
 if (VAR_7)
  goto err_alloc;

 FUNC_9(VAR_4->pasid, VAR_6->id, VAR_6->virq, VAR_6->hw_irq);
 FUNC_5(&VAR_4->irq_lock);

 *VAR_5 = VAR_6->id;

 return 0;

err_alloc:
 FUNC_6(VAR_4->afu->fn->link, VAR_6->hw_irq);
err_idr:
 FUNC_1(&VAR_4->irq_idr, VAR_6->id);
err_unlock:
 FUNC_5(&VAR_4->irq_lock);
 FUNC_2(VAR_6);
 return VAR_7;
}
