
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct slim_msg_txn {int dummy; } ;
struct TYPE_2__ {int head; int n; int tail; void* base; int sl_sz; int lock; } ;
struct qcom_slim_ctrl {TYPE_1__ tx; struct completion** wr_comp; int dev; } ;
struct completion {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void *FUNC_3(struct qcom_slim_ctrl *VAR_0,
         struct slim_msg_txn *VAR_1,
         struct completion *VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;

 FUNC_1(&VAR_0->tx.lock, VAR_3);
 if (((VAR_0->tx.head + 1) % VAR_0->tx.n) == VAR_0->tx.tail) {
  FUNC_2(&VAR_0->tx.lock, VAR_3);
  FUNC_0(VAR_0->dev, "controller TX buf unavailable");
  return ((void*)0);
 }
 VAR_4 = VAR_0->tx.tail;
 VAR_0->wr_comp[VAR_4] = VAR_2;
 VAR_0->tx.tail = (VAR_0->tx.tail + 1) % VAR_0->tx.n;

 FUNC_2(&VAR_0->tx.lock, VAR_3);

 return VAR_0->tx.base + (VAR_4 * VAR_0->tx.sl_sz);
}
