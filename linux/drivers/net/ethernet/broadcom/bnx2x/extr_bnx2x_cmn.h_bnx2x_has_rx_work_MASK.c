
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eth_fast_path_rx_cqe {int dummy; } ;
union eth_rx_cqe {struct eth_fast_path_rx_cqe fast_path_cqe; } ;
typedef size_t u16 ;
struct bnx2x_fastpath {union eth_rx_cqe* rx_comp_ring; int rx_comp_cons; } ;


 int FUNC_0 (struct eth_fast_path_rx_cqe*) ;
 size_t FUNC_1 (int ) ;

__attribute__((used)) static inline int FUNC_2(struct bnx2x_fastpath *VAR_0)
{
 u16 VAR_1;
 union eth_rx_cqe *VAR_2;
 struct eth_fast_path_rx_cqe *VAR_3;

 VAR_1 = FUNC_1(VAR_0->rx_comp_cons);
 VAR_2 = &VAR_0->rx_comp_ring[VAR_1];
 VAR_3 = &VAR_2->fast_path_cqe;
 return FUNC_0(VAR_3);
}
