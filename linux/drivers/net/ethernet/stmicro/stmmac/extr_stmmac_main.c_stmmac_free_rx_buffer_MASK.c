
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct stmmac_rx_queue {int page_pool; struct stmmac_rx_buffer* buf_pool; } ;
struct stmmac_rx_buffer {int * sec_page; int * page; } ;
struct stmmac_priv {struct stmmac_rx_queue* rx_queue; } ;


 int FUNC_0 (int ,int *,int) ;

__attribute__((used)) static void FUNC_1(struct stmmac_priv *VAR_0, u32 VAR_1, int VAR_2)
{
 struct stmmac_rx_queue *VAR_3 = &VAR_0->rx_queue[VAR_1];
 struct stmmac_rx_buffer *VAR_4 = &VAR_3->buf_pool[VAR_2];

 if (VAR_4->page)
  FUNC_0(VAR_3->page_pool, VAR_4->page, 0);
 VAR_4->page = ((void*)0);

 if (VAR_4->sec_page)
  FUNC_0(VAR_3->page_pool, VAR_4->sec_page, 0);
 VAR_4->sec_page = ((void*)0);
}
