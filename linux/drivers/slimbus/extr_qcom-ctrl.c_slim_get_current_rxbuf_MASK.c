
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tail; int head; int sl_sz; int n; int lock; scalar_t__ base; } ;
struct qcom_slim_ctrl {TYPE_1__ rx; } ;


 int VAR_0 ;
 int FUNC_0 (void*,scalar_t__,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct qcom_slim_ctrl *VAR_1, void *VAR_2)
{
 unsigned long VAR_3;

 FUNC_1(&VAR_1->rx.lock, VAR_3);
 if (VAR_1->rx.tail == VAR_1->rx.head) {
  FUNC_2(&VAR_1->rx.lock, VAR_3);
  return -VAR_0;
 }
 FUNC_0(VAR_2, VAR_1->rx.base + (VAR_1->rx.head * VAR_1->rx.sl_sz),
    VAR_1->rx.sl_sz);

 VAR_1->rx.head = (VAR_1->rx.head + 1) % VAR_1->rx.n;
 FUNC_2(&VAR_1->rx.lock, VAR_3);

 return 0;
}
