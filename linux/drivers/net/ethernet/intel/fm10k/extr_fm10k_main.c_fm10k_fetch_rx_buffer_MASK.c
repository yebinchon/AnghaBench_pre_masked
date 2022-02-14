
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int length; } ;
union fm10k_rx_desc {TYPE_1__ w; } ;
typedef int u8 ;
struct sk_buff {struct page* data; } ;
struct page {int dummy; } ;
struct fm10k_rx_buffer {int page_offset; struct page* page; int dma; } ;
struct TYPE_6__ {int alloc_failed; } ;
struct fm10k_ring {size_t next_to_clean; int dev; TYPE_3__ rx_stats; TYPE_2__* q_vector; struct fm10k_rx_buffer* rx_buffer; } ;
struct TYPE_5__ {int napi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int,unsigned int,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct fm10k_rx_buffer*,unsigned int,union fm10k_rx_desc*,struct sk_buff*) ;
 int FUNC_3 (struct fm10k_ring*,struct fm10k_rx_buffer*) ;
 unsigned int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;
 struct sk_buff* FUNC_6 (int *,int ) ;
 void* FUNC_7 (struct page*) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (struct page*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_11(struct fm10k_ring *VAR_4,
          union fm10k_rx_desc *VAR_5,
          struct sk_buff *VAR_6)
{
 unsigned int VAR_7 = FUNC_4(VAR_5->w.length);
 struct fm10k_rx_buffer *VAR_8;
 struct page *VAR_9;

 VAR_8 = &VAR_4->rx_buffer[VAR_4->next_to_clean];
 VAR_9 = VAR_8->page;
 FUNC_9(VAR_9);

 if (FUNC_5(!VAR_6)) {
  void *VAR_10 = FUNC_7(VAR_9) +
      VAR_8->page_offset;


  FUNC_8(VAR_10);

  FUNC_8((void *)((u8 *)VAR_10 + VAR_2));



  VAR_6 = FUNC_6(&VAR_4->q_vector->napi,
         VAR_1);
  if (FUNC_10(!VAR_6)) {
   VAR_4->rx_stats.alloc_failed++;
   return ((void*)0);
  }





  FUNC_9(VAR_6->data);
 }


 FUNC_0(VAR_4->dev,
          VAR_8->dma,
          VAR_8->page_offset,
          VAR_7,
          VAR_0);


 if (FUNC_2(VAR_8, VAR_7, VAR_5, VAR_6)) {

  FUNC_3(VAR_4, VAR_8);
 } else {

  FUNC_1(VAR_4->dev, VAR_8->dma,
          VAR_3, VAR_0);
 }


 VAR_8->page = ((void*)0);

 return VAR_6;
}
