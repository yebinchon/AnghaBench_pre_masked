
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct cxgbit_sock {struct sk_buff* lro_hskb; } ;
struct cxgbit_lro_pdu_cb {int flags; int complete; } ;
struct cxgbit_lro_cb {int pdu_idx; int complete; } ;


 int VAR_0 ;
 int FUNC_0 (struct cxgbit_sock*) ;
 int FUNC_1 (struct cxgbit_sock*,struct sk_buff*,int) ;
 int FUNC_2 (struct cxgbit_sock*,struct sk_buff*,int) ;
 struct cxgbit_lro_cb* FUNC_3 (struct sk_buff*) ;
 struct cxgbit_lro_pdu_cb* FUNC_4 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_5(struct cxgbit_sock *VAR_1, struct sk_buff *VAR_2)
{
 struct cxgbit_lro_cb *VAR_3 = FUNC_3(VAR_2);
 struct cxgbit_lro_pdu_cb *VAR_4 = FUNC_4(VAR_2, 0);
 u8 VAR_5 = 0, VAR_6 = 0;
 int VAR_7 = 0;

 if (!VAR_4->complete) {
  FUNC_1(VAR_1, VAR_2, 0);

  if (VAR_4->flags & VAR_0) {
   struct sk_buff *VAR_8 = VAR_1->lro_hskb;

   VAR_7 = FUNC_2(VAR_1, VAR_8, 0);

   FUNC_0(VAR_1);

   if (VAR_7 < 0)
    goto out;
  }

  VAR_5 = 1;
 }

 if (VAR_3->pdu_idx)
  VAR_6 = VAR_3->pdu_idx - 1;

 for (; VAR_5 <= VAR_6; VAR_5++) {
  VAR_7 = FUNC_2(VAR_1, VAR_2, VAR_5);
  if (VAR_7 < 0)
   goto out;
 }

 if ((!VAR_3->complete) && VAR_3->pdu_idx)
  FUNC_1(VAR_1, VAR_2, VAR_3->pdu_idx);

out:
 return VAR_7;
}
