
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct ice_rx_buf {scalar_t__ page_offset; int * page; int pagecnt_bias; int dma; int * skb; } ;
struct ice_ring {size_t count; int size; scalar_t__ next_to_use; scalar_t__ next_to_clean; scalar_t__ next_to_alloc; struct ice_rx_buf* desc; struct ice_rx_buf* rx_buf; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct device*,int ,scalar_t__,int ,int ) ;
 int FUNC_3 (struct device*,int ,int ,int ,int ) ;
 int FUNC_4 (struct ice_rx_buf*,int ,int) ;

void FUNC_5(struct ice_ring *VAR_4)
{
 struct device *VAR_5 = VAR_4->dev;
 u16 VAR_6;


 if (!VAR_4->rx_buf)
  return;


 for (VAR_6 = 0; VAR_6 < VAR_4->count; VAR_6++) {
  struct ice_rx_buf *VAR_7 = &VAR_4->rx_buf[VAR_6];

  if (VAR_7->skb) {
   FUNC_1(VAR_7->skb);
   VAR_7->skb = ((void*)0);
  }
  if (!VAR_7->page)
   continue;




  FUNC_2(VAR_5, VAR_7->dma,
           VAR_7->page_offset,
           VAR_1, VAR_0);


  FUNC_3(VAR_5, VAR_7->dma, VAR_3,
         VAR_0, VAR_2);
  FUNC_0(VAR_7->page, VAR_7->pagecnt_bias);

  VAR_7->page = ((void*)0);
  VAR_7->page_offset = 0;
 }

 FUNC_4(VAR_4->rx_buf, 0, sizeof(*VAR_4->rx_buf) * VAR_4->count);


 FUNC_4(VAR_4->desc, 0, VAR_4->size);

 VAR_4->next_to_alloc = 0;
 VAR_4->next_to_clean = 0;
 VAR_4->next_to_use = 0;
}
