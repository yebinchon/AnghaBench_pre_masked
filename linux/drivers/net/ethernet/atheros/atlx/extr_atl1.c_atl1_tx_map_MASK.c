
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u16 ;
struct tx_packet_desc {int word3; } ;
struct sk_buff {size_t len; size_t data; scalar_t__ data_len; } ;
struct page {int dummy; } ;
struct atl1_tpd_ring {size_t count; struct atl1_buffer* buffer_info; int next_to_use; } ;
struct atl1_buffer {size_t length; struct sk_buff* skb; void* dma; } ;
struct atl1_adapter {TYPE_2__* pdev; struct atl1_tpd_ring tpd_ring; } ;
typedef int skb_frag_t ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {unsigned int nr_frags; int * frags; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_1 (int *) ;
 unsigned long FUNC_2 (size_t) ;
 void* FUNC_3 (TYPE_2__*,struct page*,unsigned long,size_t,int ) ;
 void* FUNC_4 (int *,int const*,size_t,size_t,int ) ;
 size_t FUNC_5 (int const*) ;
 TYPE_1__* FUNC_6 (struct sk_buff*) ;
 size_t FUNC_7 (struct sk_buff*) ;
 size_t FUNC_8 (struct sk_buff*) ;
 struct page* FUNC_9 (size_t) ;

__attribute__((used)) static void FUNC_10(struct atl1_adapter *VAR_5, struct sk_buff *VAR_6,
 struct tx_packet_desc *VAR_7)
{
 struct atl1_tpd_ring *VAR_8 = &VAR_5->tpd_ring;
 struct atl1_buffer *VAR_9;
 u16 VAR_10 = VAR_6->len;
 struct page *VAR_11;
 unsigned long VAR_12;
 unsigned int VAR_13;
 unsigned int VAR_14;
 int VAR_15;
 u16 VAR_16;
 u16 VAR_17;
 u8 VAR_18;

 VAR_10 -= VAR_6->data_len;
 VAR_13 = FUNC_6(VAR_6)->nr_frags;
 VAR_16 = FUNC_1(&VAR_8->next_to_use);
 VAR_9 = &VAR_8->buffer_info[VAR_16];
 FUNC_0(VAR_9->skb);

 VAR_9->skb = ((void*)0);

 VAR_15 = (VAR_7->word3 >> VAR_4) & VAR_3;
 if (VAR_15) {

  VAR_18 = FUNC_7(VAR_6) + FUNC_8(VAR_6);
  VAR_9->length = VAR_18;
  VAR_11 = FUNC_9(VAR_6->data);
  VAR_12 = FUNC_2(VAR_6->data);
  VAR_9->dma = FUNC_3(VAR_5->pdev, VAR_11,
      VAR_12, VAR_18,
      VAR_2);

  if (++VAR_16 == VAR_8->count)
   VAR_16 = 0;

  if (VAR_10 > VAR_18) {
   int VAR_19, VAR_20;

   VAR_17 = VAR_10 - VAR_18;
   VAR_20 = (VAR_17 + VAR_0 - 1) /
    VAR_0;
   for (VAR_19 = 0; VAR_19 < VAR_20; VAR_19++) {
    VAR_9 =
        &VAR_8->buffer_info[VAR_16];
    VAR_9->skb = ((void*)0);
    VAR_9->length =
        (VAR_0 >=
         VAR_17) ? VAR_0 : VAR_17;
    VAR_17 -= VAR_9->length;
    VAR_11 = FUNC_9(VAR_6->data +
     (VAR_18 + VAR_19 * VAR_0));
    VAR_12 = FUNC_2(VAR_6->data +
     (VAR_18 + VAR_19 * VAR_0));
    VAR_9->dma = FUNC_3(VAR_5->pdev,
     VAR_11, VAR_12, VAR_9->length,
     VAR_2);
    if (++VAR_16 == VAR_8->count)
     VAR_16 = 0;
   }
  }
 } else {

  VAR_9->length = VAR_10;
  VAR_11 = FUNC_9(VAR_6->data);
  VAR_12 = FUNC_2(VAR_6->data);
  VAR_9->dma = FUNC_3(VAR_5->pdev, VAR_11,
   VAR_12, VAR_10, VAR_2);
  if (++VAR_16 == VAR_8->count)
   VAR_16 = 0;
 }

 for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {
  const skb_frag_t *VAR_21 = &FUNC_6(VAR_6)->frags[VAR_14];
  u16 VAR_22, VAR_23;

  VAR_10 = FUNC_5(VAR_21);

  VAR_23 = (VAR_10 + VAR_0 - 1) /
   VAR_0;
  for (VAR_22 = 0; VAR_22 < VAR_23; VAR_22++) {
   VAR_9 = &VAR_8->buffer_info[VAR_16];
   FUNC_0(VAR_9->skb);

   VAR_9->skb = ((void*)0);
   VAR_9->length = (VAR_10 > VAR_0) ?
    VAR_0 : VAR_10;
   VAR_10 -= VAR_9->length;
   VAR_9->dma = FUNC_4(&VAR_5->pdev->dev,
    VAR_21, VAR_22 * VAR_0,
    VAR_9->length, VAR_1);

   if (++VAR_16 == VAR_8->count)
    VAR_16 = 0;
  }
 }


 VAR_9->skb = VAR_6;
}
