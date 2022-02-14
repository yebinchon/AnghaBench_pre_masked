
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff_head {int dummy; } ;
struct TYPE_3__ {int lock; } ;
struct cxgbit_sock {TYPE_1__ rxq; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,struct sk_buff_head*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static bool FUNC_4(struct cxgbit_sock *VAR_0, struct sk_buff_head *VAR_1)
{
 FUNC_2(&VAR_0->rxq.lock);
 if (FUNC_0(&VAR_0->rxq)) {
  FUNC_1(&VAR_0->rxq, VAR_1);
  FUNC_3(&VAR_0->rxq.lock);
  return 1;
 }
 FUNC_3(&VAR_0->rxq.lock);
 return 0;
}
