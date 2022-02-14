
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct gfar_rx_buff {int page_offset; int dma; } ;
struct gfar_priv_rx_q {size_t next_to_alloc; size_t rx_ring_size; int dev; struct gfar_rx_buff* rx_buff; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct gfar_priv_rx_q *VAR_2,
          struct gfar_rx_buff *VAR_3)
{
 struct gfar_rx_buff *VAR_4;
 u16 VAR_5 = VAR_2->next_to_alloc;

 VAR_4 = &VAR_2->rx_buff[VAR_5];


 VAR_5++;
 VAR_2->next_to_alloc = (VAR_5 < VAR_2->rx_ring_size) ? VAR_5 : 0;


 *VAR_4 = *VAR_3;


 FUNC_0(VAR_2->dev, VAR_3->dma,
      VAR_3->page_offset,
      VAR_1, VAR_0);
}
