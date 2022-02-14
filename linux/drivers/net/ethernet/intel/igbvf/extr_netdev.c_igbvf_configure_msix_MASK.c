
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct igbvf_ring {scalar_t__ itr_register; int itr_val; int eims_value; } ;
struct e1000_hw {scalar_t__ hw_addr; } ;
struct igbvf_adapter {int eims_other; int eims_enable_mask; struct igbvf_ring* rx_ring; struct igbvf_ring* tx_ring; struct e1000_hw hw; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct igbvf_adapter*,int ,int ,int ) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct igbvf_adapter *VAR_3)
{
 u32 VAR_4;
 struct e1000_hw *VAR_5 = &VAR_3->hw;
 struct igbvf_ring *VAR_6 = VAR_3->tx_ring;
 struct igbvf_ring *VAR_7 = VAR_3->rx_ring;
 int VAR_8 = 0;

 VAR_3->eims_enable_mask = 0;

 FUNC_4(VAR_3, VAR_1, 0, VAR_8++);
 VAR_3->eims_enable_mask |= VAR_6->eims_value;
 FUNC_5(VAR_6->itr_val, VAR_5->hw_addr + VAR_6->itr_register);
 FUNC_4(VAR_3, 0, VAR_1, VAR_8++);
 VAR_3->eims_enable_mask |= VAR_7->eims_value;
 FUNC_5(VAR_7->itr_val, VAR_5->hw_addr + VAR_7->itr_register);



 VAR_4 = (VAR_8++ | VAR_0);

 FUNC_3(VAR_2, VAR_4);

 VAR_3->eims_enable_mask = FUNC_1(VAR_8 - 1, 0);
 VAR_3->eims_other = FUNC_0(VAR_8 - 1);
 FUNC_2();
}
