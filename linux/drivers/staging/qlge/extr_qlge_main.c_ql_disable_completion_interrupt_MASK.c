
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ql_adapter {int hw_lock; struct intr_context* intr_context; int flags; } ;
struct intr_context {int irq_cnt; int intr_dis_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct ql_adapter*,int ) ;
 int FUNC_4 (struct ql_adapter*,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static u32 FUNC_8(struct ql_adapter *VAR_3, u32 VAR_4)
{
 u32 VAR_5 = 0;
 struct intr_context *VAR_6;




 if (FUNC_2(FUNC_7(VAR_1, &VAR_3->flags) && VAR_4))
  return 0;

 VAR_6 = VAR_3->intr_context + VAR_4;
 FUNC_5(&VAR_3->hw_lock);
 if (!FUNC_1(&VAR_6->irq_cnt)) {
  FUNC_4(VAR_3, VAR_0,
  VAR_6->intr_dis_mask);
  VAR_5 = FUNC_3(VAR_3, VAR_2);
 }
 FUNC_0(&VAR_6->irq_cnt);
 FUNC_6(&VAR_3->hw_lock);
 return VAR_5;
}
