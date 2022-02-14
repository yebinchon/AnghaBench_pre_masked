
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct sk_buff {scalar_t__ len; int data; } ;
struct ath10k_skb_rxcb {int paddr; int hlist; } ;
struct TYPE_2__ {int fill_cnt; int lock; } ;
struct ath10k_htt {struct ath10k* ar; TYPE_1__ rx_ring; } ;
struct ath10k {int dev; } ;


 int VAR_0 ;
 struct ath10k_skb_rxcb* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_1 (struct ath10k*,int ,int *,char*,int ,scalar_t__) ;
 struct sk_buff* FUNC_2 (struct ath10k*,int ) ;
 int FUNC_3 (int ,int ,scalar_t__,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_7(struct ath10k_htt *VAR_2,
            u64 VAR_3)
{
 struct ath10k *VAR_4 = VAR_2->ar;
 struct ath10k_skb_rxcb *VAR_5;
 struct sk_buff *VAR_6;

 FUNC_5(&VAR_2->rx_ring.lock);

 VAR_6 = FUNC_2(VAR_4, VAR_3);
 if (!VAR_6)
  return ((void*)0);

 VAR_5 = FUNC_0(VAR_6);
 FUNC_4(&VAR_5->hlist);
 VAR_2->rx_ring.fill_cnt--;

 FUNC_3(VAR_2->ar->dev, VAR_5->paddr,
    VAR_6->len + FUNC_6(VAR_6),
    VAR_1);
 FUNC_1(VAR_4, VAR_0, ((void*)0), "htt rx netbuf pop: ",
   VAR_6->data, VAR_6->len + FUNC_6(VAR_6));

 return VAR_6;
}
