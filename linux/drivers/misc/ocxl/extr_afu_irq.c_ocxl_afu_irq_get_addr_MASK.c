
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ocxl_context {int irq_lock; int irq_idr; } ;
struct afu_irq {int trigger_page; } ;


 struct afu_irq* FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

u64 FUNC_3(struct ocxl_context *VAR_0, int VAR_1)
{
 struct afu_irq *VAR_2;
 u64 VAR_3 = 0;

 FUNC_1(&VAR_0->irq_lock);
 VAR_2 = FUNC_0(&VAR_0->irq_idr, VAR_1);
 if (VAR_2)
  VAR_3 = VAR_2->trigger_page;
 FUNC_2(&VAR_0->irq_lock);
 return VAR_3;
}
