
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct cxgbit_sock {int lro_hskb; int skbq; int ppodq; int backlogq; int rxq; int txq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct sk_buff* FUNC_2 (struct cxgbit_sock*) ;
 int FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_4(struct cxgbit_sock *VAR_0)
{
 struct sk_buff *VAR_1;

 FUNC_1(&VAR_0->txq);
 FUNC_1(&VAR_0->rxq);
 FUNC_1(&VAR_0->backlogq);
 FUNC_1(&VAR_0->ppodq);
 FUNC_1(&VAR_0->skbq);

 while ((VAR_1 = FUNC_2(VAR_0)))
  FUNC_3(VAR_1);

 FUNC_0(VAR_0->lro_hskb);
}
