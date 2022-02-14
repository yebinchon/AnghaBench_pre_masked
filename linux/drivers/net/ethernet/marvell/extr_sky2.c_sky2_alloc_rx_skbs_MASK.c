
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sky2_port {unsigned int rx_pending; int rx_data_size; struct rx_ring_info* rx_ring; struct sky2_hw* hw; } ;
struct sky2_hw {int pdev; } ;
struct rx_ring_info {int * skb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct sky2_port*) ;
 int * FUNC_2 (struct sky2_port*,int ) ;
 scalar_t__ FUNC_3 (int ,struct rx_ring_info*,int ) ;

__attribute__((used)) static int FUNC_4(struct sky2_port *VAR_2)
{
 struct sky2_hw *VAR_3 = VAR_2->hw;
 unsigned VAR_4;

 VAR_2->rx_data_size = FUNC_1(VAR_2);


 for (VAR_4 = 0; VAR_4 < VAR_2->rx_pending; VAR_4++) {
  struct rx_ring_info *VAR_5 = VAR_2->rx_ring + VAR_4;

  VAR_5->skb = FUNC_2(VAR_2, VAR_1);
  if (!VAR_5->skb)
   return -VAR_0;

  if (FUNC_3(VAR_3->pdev, VAR_5, VAR_2->rx_data_size)) {
   FUNC_0(VAR_5->skb);
   VAR_5->skb = ((void*)0);
   return -VAR_0;
  }
 }
 return 0;
}
