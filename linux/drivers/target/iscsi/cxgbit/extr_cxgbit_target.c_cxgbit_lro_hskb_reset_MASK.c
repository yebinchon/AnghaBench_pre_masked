
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct skb_shared_info {size_t nr_frags; int * frags; } ;
struct sk_buff {scalar_t__ len; int truesize; scalar_t__ data_len; int data; } ;
struct cxgbit_sock {struct sk_buff* lro_hskb; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 struct skb_shared_info* FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_4(struct cxgbit_sock *VAR_1)
{
 struct sk_buff *VAR_2 = VAR_1->lro_hskb;
 struct skb_shared_info *VAR_3 = FUNC_3(VAR_2);
 u8 VAR_4;

 FUNC_0(VAR_2->data, 0, VAR_0);
 for (VAR_4 = 0; VAR_4 < VAR_3->nr_frags; VAR_4++)
  FUNC_1(FUNC_2(&VAR_3->frags[VAR_4]));
 VAR_3->nr_frags = 0;
 VAR_2->data_len = 0;
 VAR_2->truesize -= VAR_2->len;
 VAR_2->len = 0;
}
