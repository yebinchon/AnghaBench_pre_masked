
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct igb_rx_buffer {int pagecnt_bias; int page_offset; int dma; int page; } ;
struct igb_ring {size_t next_to_clean; int dev; struct igb_rx_buffer* rx_buffer_info; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,unsigned int const,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static struct igb_rx_buffer *FUNC_2(struct igb_ring *VAR_1,
            const unsigned int VAR_2)
{
 struct igb_rx_buffer *VAR_3;

 VAR_3 = &VAR_1->rx_buffer_info[VAR_1->next_to_clean];
 FUNC_1(VAR_3->page);


 FUNC_0(VAR_1->dev,
          VAR_3->dma,
          VAR_3->page_offset,
          VAR_2,
          VAR_0);

 VAR_3->pagecnt_bias--;

 return VAR_3;
}
