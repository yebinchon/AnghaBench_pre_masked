
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t4_lro_mgr {int lro_session_cnt; int lro_pkts; int lroq; } ;
struct sk_buff {int dummy; } ;
struct cxgbit_sock {int * lro_skb; } ;
struct cxgbit_lro_cb {struct cxgbit_sock* csk; } ;


 int FUNC_0 (struct sk_buff*,int *) ;
 int FUNC_1 (struct cxgbit_sock*) ;
 int FUNC_2 (struct cxgbit_sock*,struct sk_buff*) ;
 struct cxgbit_lro_cb* FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_4(struct t4_lro_mgr *VAR_0, struct sk_buff *VAR_1)
{
 struct cxgbit_lro_cb *VAR_2 = FUNC_3(VAR_1);
 struct cxgbit_sock *VAR_3 = VAR_2->csk;

 VAR_3->lro_skb = ((void*)0);

 FUNC_0(VAR_1, &VAR_0->lroq);
 FUNC_2(VAR_3, VAR_1);

 FUNC_1(VAR_3);

 VAR_0->lro_pkts++;
 VAR_0->lro_session_cnt--;
}
