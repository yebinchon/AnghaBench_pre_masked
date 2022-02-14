
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct qede_rx_queue {int hw_rxq_prod_addr; int rx_comp_ring; int rx_bd_ring; } ;
struct qede_dev {int dummy; } ;
struct eth_rx_prod_data {void* cqe_prod; void* bd_prod; int member_0; } ;
typedef int rx_prods ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;

void FUNC_4(struct qede_dev *VAR_0, struct qede_rx_queue *VAR_1)
{
 u16 VAR_2 = FUNC_2(&VAR_1->rx_bd_ring);
 u16 VAR_3 = FUNC_2(&VAR_1->rx_comp_ring);
 struct eth_rx_prod_data VAR_4 = {0};


 VAR_4.bd_prod = FUNC_0(VAR_2);
 VAR_4.cqe_prod = FUNC_0(VAR_3);





 FUNC_3();

 FUNC_1(VAR_1->hw_rxq_prod_addr, sizeof(VAR_4),
   (u32 *)&VAR_4);
}
