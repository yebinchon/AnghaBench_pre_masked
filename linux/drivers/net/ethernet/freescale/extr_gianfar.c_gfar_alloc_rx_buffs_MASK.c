
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxbd8 {int dummy; } ;
struct gfar_rx_buff {scalar_t__ page_offset; scalar_t__ dma; int page; } ;
struct gfar_priv_rx_q {int next_to_use; int rx_ring_size; int next_to_alloc; struct gfar_rx_buff* rx_buff; struct rxbd8* rx_bd_base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct gfar_priv_rx_q*,struct rxbd8*,scalar_t__) ;
 int FUNC_1 (struct gfar_priv_rx_q*,struct gfar_rx_buff*) ;
 int FUNC_2 (struct gfar_priv_rx_q*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct gfar_priv_rx_q *VAR_1,
    int VAR_2)
{
 struct rxbd8 *VAR_3;
 struct gfar_rx_buff *VAR_4;
 int VAR_5;

 VAR_5 = VAR_1->next_to_use;
 VAR_3 = &VAR_1->rx_bd_base[VAR_5];
 VAR_4 = &VAR_1->rx_buff[VAR_5];

 while (VAR_2--) {

  if (FUNC_3(!VAR_4->page)) {
   if (FUNC_3(!FUNC_1(VAR_1, VAR_4))) {
    FUNC_2(VAR_1);
    break;
   }
  }


  FUNC_0(VAR_1, VAR_3,
    VAR_4->dma + VAR_4->page_offset + VAR_0);


  VAR_3++;
  VAR_4++;

  if (FUNC_3(++VAR_5 == VAR_1->rx_ring_size)) {
   VAR_5 = 0;
   VAR_3 = VAR_1->rx_bd_base;
   VAR_4 = VAR_1->rx_buff;
  }
 }

 VAR_1->next_to_use = VAR_5;
 VAR_1->next_to_alloc = VAR_5;
}
