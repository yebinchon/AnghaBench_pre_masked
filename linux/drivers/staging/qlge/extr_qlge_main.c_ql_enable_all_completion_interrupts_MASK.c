
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ql_adapter {int intr_count; TYPE_1__* intr_context; int flags; } ;
struct TYPE_2__ {int irq_cnt; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct ql_adapter*,int) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct ql_adapter *VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_1->intr_count; VAR_2++) {




  if (FUNC_3(!FUNC_2(VAR_0, &VAR_1->flags) ||
   VAR_2 == 0))
   FUNC_0(&VAR_1->intr_context[VAR_2].irq_cnt, 1);
  FUNC_1(VAR_1, VAR_2);
 }

}
