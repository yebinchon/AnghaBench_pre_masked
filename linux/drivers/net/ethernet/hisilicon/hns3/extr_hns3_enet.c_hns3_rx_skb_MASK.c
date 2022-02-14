
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct hns3_enet_ring {TYPE_1__* tqp_vector; } ;
struct TYPE_2__ {int napi; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_3(struct hns3_enet_ring *VAR_0, struct sk_buff *VAR_1)
{
 if (FUNC_2(VAR_1))
  FUNC_0(&VAR_0->tqp_vector->napi, 0);

 FUNC_1(&VAR_0->tqp_vector->napi, VAR_1);
}
