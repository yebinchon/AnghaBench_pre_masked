
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_3__ {int lock; } ;
struct cxgbit_sock {int waitq; TYPE_1__ rxq; } ;


 int FUNC_0 (TYPE_1__*,struct sk_buff*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct cxgbit_sock *VAR_0, struct sk_buff *VAR_1)
{
 bool VAR_2 = 0;

 FUNC_2(&VAR_0->rxq.lock);
 FUNC_0(&VAR_0->rxq, VAR_1);
 if (FUNC_1(&VAR_0->rxq) == 1)
  VAR_2 = 1;
 FUNC_3(&VAR_0->rxq.lock);

 if (VAR_2)
  FUNC_4(&VAR_0->waitq);
}
