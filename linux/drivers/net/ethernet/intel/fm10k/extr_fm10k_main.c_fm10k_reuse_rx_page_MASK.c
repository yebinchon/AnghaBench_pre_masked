
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct fm10k_rx_buffer {int page_offset; int dma; } ;
struct fm10k_ring {size_t next_to_alloc; size_t count; int dev; struct fm10k_rx_buffer* rx_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct fm10k_ring *VAR_2,
    struct fm10k_rx_buffer *VAR_3)
{
 struct fm10k_rx_buffer *VAR_4;
 u16 VAR_5 = VAR_2->next_to_alloc;

 VAR_4 = &VAR_2->rx_buffer[VAR_5];


 VAR_5++;
 VAR_2->next_to_alloc = (VAR_5 < VAR_2->count) ? VAR_5 : 0;


 *VAR_4 = *VAR_3;


 FUNC_0(VAR_2->dev, VAR_3->dma,
      VAR_3->page_offset,
      VAR_1,
      VAR_0);
}
