
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skge_rx_desc {scalar_t__ control; } ;
struct skge_ring {struct skge_element* start; } ;
struct skge_port {struct skge_ring rx_ring; struct skge_hw* hw; } ;
struct skge_hw {int pdev; } ;
struct skge_element {int * skb; struct skge_rx_desc* desc; struct skge_element* next; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct skge_element*,int ) ;
 int FUNC_2 (struct skge_element*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct skge_port *VAR_3)
{
 struct skge_hw *VAR_4 = VAR_3->hw;
 struct skge_ring *VAR_5 = &VAR_3->rx_ring;
 struct skge_element *VAR_6;

 VAR_6 = VAR_5->start;
 do {
  struct skge_rx_desc *VAR_7 = VAR_6->desc;
  VAR_7->control = 0;
  if (VAR_6->skb) {
   FUNC_3(VAR_4->pdev,
      FUNC_1(VAR_6, VAR_1),
      FUNC_2(VAR_6, VAR_2),
      VAR_0);
   FUNC_0(VAR_6->skb);
   VAR_6->skb = ((void*)0);
  }
 } while ((VAR_6 = VAR_6->next) != VAR_5->start);
}
