
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocxl_context {int irq_lock; int irq_idr; } ;
struct afu_irq {int id; } ;


 int VAR_0 ;
 int FUNC_0 (struct afu_irq*,struct ocxl_context*) ;
 struct afu_irq* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct ocxl_context *VAR_1, int VAR_2)
{
 struct afu_irq *VAR_3;

 FUNC_3(&VAR_1->irq_lock);

 VAR_3 = FUNC_1(&VAR_1->irq_idr, VAR_2);
 if (!VAR_3) {
  FUNC_4(&VAR_1->irq_lock);
  return -VAR_0;
 }
 FUNC_2(&VAR_1->irq_idr, VAR_3->id);
 FUNC_0(VAR_3, VAR_1);
 FUNC_4(&VAR_1->irq_lock);
 return 0;
}
