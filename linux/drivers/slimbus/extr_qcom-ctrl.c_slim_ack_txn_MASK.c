
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int head; int n; int lock; } ;
struct qcom_slim_ctrl {struct completion** wr_comp; TYPE_1__ tx; } ;
struct completion {int dummy; } ;


 int FUNC_0 (struct completion*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct qcom_slim_ctrl *VAR_0, int VAR_1)
{
 struct completion *VAR_2;
 unsigned long VAR_3;
 int VAR_4;

 FUNC_1(&VAR_0->tx.lock, VAR_3);
 VAR_4 = VAR_0->tx.head;
 VAR_0->tx.head = (VAR_0->tx.head + 1) % VAR_0->tx.n;
 FUNC_2(&VAR_0->tx.lock, VAR_3);

 VAR_2 = VAR_0->wr_comp[VAR_4];
 VAR_0->wr_comp[VAR_4] = ((void*)0);

 FUNC_0(VAR_2);
}
