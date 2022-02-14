
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tx_zerocopy_sent; int tx_frag_overflow; } ;
struct xenvif_queue {int inflight_packets; TYPE_1__ stats; } ;
struct ubuf_info {int (* callback ) (struct ubuf_info*,int) ;} ;
struct sk_buff {int truesize; unsigned int data_len; unsigned int len; } ;
struct page {int dummy; } ;
typedef int skb_frag_t ;
struct TYPE_4__ {int nr_frags; int frags; struct ubuf_info* destructor_arg; struct sk_buff* frag_list; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_2 (int *,struct page*) ;
 struct page* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *,int) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct sk_buff*,unsigned int,int ,unsigned int) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,unsigned int) ;
 int FUNC_12 (struct sk_buff*,int) ;
 unsigned int FUNC_13 (struct sk_buff*) ;
 TYPE_2__* FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (struct ubuf_info*,int) ;
 int FUNC_16 (struct xenvif_queue*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_17(struct xenvif_queue *VAR_4, struct sk_buff *VAR_5)
{
 unsigned int VAR_6 = FUNC_13(VAR_5);
 skb_frag_t VAR_7[VAR_2];
 int VAR_8, VAR_9;
 struct ubuf_info *VAR_10;
 struct sk_buff *VAR_11 = FUNC_14(VAR_5)->frag_list;

 VAR_4->stats.tx_zerocopy_sent += 2;
 VAR_4->stats.tx_frag_overflow++;

 FUNC_16(VAR_4, VAR_11);

 VAR_5->truesize -= VAR_5->data_len;
 VAR_5->len += VAR_11->len;
 VAR_5->data_len += VAR_11->len;


 for (VAR_8 = 0; VAR_6 < VAR_5->len; VAR_8++) {
  struct page *VAR_12;
  unsigned int VAR_13;

  FUNC_1(VAR_8 >= VAR_2);
  VAR_12 = FUNC_3(VAR_1);
  if (!VAR_12) {
   int VAR_14;
   VAR_5->truesize += VAR_5->data_len;
   for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14++)
    FUNC_7(FUNC_10(&VAR_7[VAR_14]));
   return -VAR_0;
  }

  if (VAR_6 + VAR_3 < VAR_5->len)
   VAR_13 = VAR_3;
  else
   VAR_13 = VAR_5->len - VAR_6;
  if (FUNC_8(VAR_5, VAR_6, FUNC_6(VAR_12), VAR_13))
   FUNC_0();

  VAR_6 += VAR_13;
  FUNC_2(&VAR_7[VAR_8], VAR_12);
  FUNC_9(&VAR_7[VAR_8], 0);
  FUNC_11(&VAR_7[VAR_8], VAR_13);
 }


 for (VAR_9 = 0; VAR_9 < FUNC_14(VAR_5)->nr_frags; VAR_9++)
  FUNC_12(VAR_5, VAR_9);
 VAR_10 = FUNC_14(VAR_5)->destructor_arg;

 FUNC_4(&VAR_4->inflight_packets);
 VAR_10->callback(VAR_10, 1);
 FUNC_14(VAR_5)->destructor_arg = ((void*)0);


 FUNC_5(FUNC_14(VAR_5)->frags, VAR_7, VAR_8 * sizeof(skb_frag_t));
 FUNC_14(VAR_5)->nr_frags = VAR_8;
 VAR_5->truesize += VAR_8 * VAR_3;

 return 0;
}
