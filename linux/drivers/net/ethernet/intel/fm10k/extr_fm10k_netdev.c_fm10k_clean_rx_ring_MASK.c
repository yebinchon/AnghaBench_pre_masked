
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct fm10k_rx_buffer {int * page; int dma; } ;
struct fm10k_ring {size_t count; unsigned long size; scalar_t__ next_to_use; scalar_t__ next_to_clean; scalar_t__ next_to_alloc; struct fm10k_rx_buffer* desc; struct fm10k_rx_buffer* rx_buffer; int dev; int * skb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (struct fm10k_rx_buffer*,int ,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct fm10k_ring *VAR_2)
{
 unsigned long VAR_3;
 u16 VAR_4;

 if (!VAR_2->rx_buffer)
  return;

 FUNC_1(VAR_2->skb);
 VAR_2->skb = ((void*)0);


 for (VAR_4 = 0; VAR_4 < VAR_2->count; VAR_4++) {
  struct fm10k_rx_buffer *VAR_5 = &VAR_2->rx_buffer[VAR_4];

  if (!VAR_5->page)
   continue;

  FUNC_2(VAR_2->dev, VAR_5->dma,
          VAR_1, VAR_0);
  FUNC_0(VAR_5->page);

  VAR_5->page = ((void*)0);
 }

 VAR_3 = sizeof(struct fm10k_rx_buffer) * VAR_2->count;
 FUNC_3(VAR_2->rx_buffer, 0, VAR_3);


 FUNC_3(VAR_2->desc, 0, VAR_2->size);

 VAR_2->next_to_alloc = 0;
 VAR_2->next_to_clean = 0;
 VAR_2->next_to_use = 0;
}
