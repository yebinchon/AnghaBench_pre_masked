
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmxnet3_rx_buf_info {int page; } ;
struct sk_buff {int truesize; int data_len; } ;
struct Vmxnet3_RxCompDesc {int len; } ;
typedef int skb_frag_t ;
struct TYPE_2__ {int nr_frags; int * frags; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 TYPE_1__* FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static void
FUNC_5(struct sk_buff *VAR_2, struct Vmxnet3_RxCompDesc *VAR_3,
      struct vmxnet3_rx_buf_info *VAR_4)
{
 skb_frag_t *VAR_5 = FUNC_4(VAR_2)->frags + FUNC_4(VAR_2)->nr_frags;

 FUNC_0(FUNC_4(VAR_2)->nr_frags >= VAR_0);

 FUNC_1(VAR_5, VAR_4->page);
 FUNC_2(VAR_5, 0);
 FUNC_3(VAR_5, VAR_3->len);
 VAR_2->data_len += VAR_3->len;
 VAR_2->truesize += VAR_1;
 FUNC_4(VAR_2)->nr_frags++;
}
