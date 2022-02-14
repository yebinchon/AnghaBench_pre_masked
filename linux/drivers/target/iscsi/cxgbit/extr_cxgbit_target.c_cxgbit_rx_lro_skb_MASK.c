
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct cxgbit_sock {int rx_credits; int rcv_win; int rcv_nxt; int tid; } ;
struct cxgbit_lro_pdu_cb {int flags; int seq; } ;
struct cxgbit_lro_cb {scalar_t__ pdu_totallen; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct cxgbit_sock*,struct sk_buff*) ;
 int FUNC_2 (struct cxgbit_sock*) ;
 struct cxgbit_lro_cb* FUNC_3 (struct sk_buff*) ;
 struct cxgbit_lro_pdu_cb* FUNC_4 (struct sk_buff*,int ) ;
 int FUNC_5 (char*,struct cxgbit_sock*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct cxgbit_sock *VAR_1, struct sk_buff *VAR_2)
{
 struct cxgbit_lro_cb *VAR_3 = FUNC_3(VAR_2);
 struct cxgbit_lro_pdu_cb *VAR_4 = FUNC_4(VAR_2, 0);
 int VAR_5 = -1;

 if ((VAR_4->flags & VAR_0) &&
     (VAR_4->seq != VAR_1->rcv_nxt)) {
  FUNC_5("csk 0x%p, tid 0x%x, seq 0x%x != 0x%x.\n",
   VAR_1, VAR_1->tid, VAR_4->seq, VAR_1->rcv_nxt);
  FUNC_0(VAR_2);
  return VAR_5;
 }

 VAR_1->rcv_nxt += VAR_3->pdu_totallen;

 VAR_5 = FUNC_1(VAR_1, VAR_2);

 VAR_1->rx_credits += VAR_3->pdu_totallen;

 if (VAR_1->rx_credits >= (VAR_1->rcv_win / 4))
  FUNC_2(VAR_1);

 return VAR_5;
}
