
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rx_ring {scalar_t__ num_rfd; int num_ready_recv; int recv_list; } ;
struct rfd {int list_node; int * skb; } ;
struct et131x_adapter {struct rx_ring rx_ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct rfd* FUNC_0 (int,int) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(struct et131x_adapter *VAR_3)
{
 struct rfd *VAR_4;
 u32 VAR_5;
 struct rx_ring *VAR_6 = &VAR_3->rx_ring;


 for (VAR_5 = 0; VAR_5 < VAR_6->num_rfd; VAR_5++) {
  VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_1 | VAR_2);
  if (!VAR_4)
   return -VAR_0;

  VAR_4->skb = ((void*)0);


  FUNC_1(&VAR_4->list_node, &VAR_6->recv_list);


  VAR_6->num_ready_recv++;
 }

 return 0;
}
