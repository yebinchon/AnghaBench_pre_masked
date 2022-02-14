
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct atl1e_tx_ring {int next_to_use; } ;
struct atl1e_tpd_desc {int dummy; } ;
struct atl1e_adapter {int hw; struct atl1e_tx_ring tx_ring; } ;


 int FUNC_0 (int *,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct atl1e_adapter *VAR_1, u16 VAR_2,
      struct atl1e_tpd_desc *VAR_3)
{
 struct atl1e_tx_ring *VAR_4 = &VAR_1->tx_ring;




 FUNC_1();
 FUNC_0(&VAR_1->hw, VAR_0, VAR_4->next_to_use);
}
