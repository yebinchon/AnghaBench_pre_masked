
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxbd8 {scalar_t__ bufPtr; scalar_t__ lstatus; } ;
struct gfar_rx_buff {int * page; int dma; } ;
struct gfar_priv_rx_q {int rx_ring_size; struct gfar_rx_buff* rx_buff; int dev; int skb; struct rxbd8* rx_bd_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (struct gfar_rx_buff*) ;

__attribute__((used)) static void FUNC_4(struct gfar_priv_rx_q *VAR_2)
{
 int VAR_3;

 struct rxbd8 *VAR_4 = VAR_2->rx_bd_base;

 FUNC_1(VAR_2->skb);

 for (VAR_3 = 0; VAR_3 < VAR_2->rx_ring_size; VAR_3++) {
  struct gfar_rx_buff *VAR_5 = &VAR_2->rx_buff[VAR_3];

  VAR_4->lstatus = 0;
  VAR_4->bufPtr = 0;
  VAR_4++;

  if (!VAR_5->page)
   continue;

  FUNC_2(VAR_2->dev, VAR_5->dma,
          VAR_1, VAR_0);
  FUNC_0(VAR_5->page);

  VAR_5->page = ((void*)0);
 }

 FUNC_3(VAR_2->rx_buff);
 VAR_2->rx_buff = ((void*)0);
}
