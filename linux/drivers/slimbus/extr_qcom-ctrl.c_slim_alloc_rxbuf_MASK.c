
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tail; int n; int head; void* base; int sl_sz; int lock; } ;
struct qcom_slim_ctrl {TYPE_1__ rx; int dev; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void *FUNC_3(struct qcom_slim_ctrl *VAR_0)
{
 unsigned long VAR_1;
 int VAR_2;

 FUNC_1(&VAR_0->rx.lock, VAR_1);
 if ((VAR_0->rx.tail + 1) % VAR_0->rx.n == VAR_0->rx.head) {
  FUNC_2(&VAR_0->rx.lock, VAR_1);
  FUNC_0(VAR_0->dev, "RX QUEUE full!");
  return ((void*)0);
 }
 VAR_2 = VAR_0->rx.tail;
 VAR_0->rx.tail = (VAR_0->rx.tail + 1) % VAR_0->rx.n;
 FUNC_2(&VAR_0->rx.lock, VAR_1);

 return VAR_0->rx.base + (VAR_2 * VAR_0->rx.sl_sz);
}
