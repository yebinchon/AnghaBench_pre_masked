
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct e1000_ring {int itr_val; int ims_val; scalar_t__ itr_register; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {scalar_t__ hw_addr; TYPE_1__ mac; } ;
struct e1000_adapter {int eiac_mask; struct e1000_ring* tx_ring; struct e1000_ring* rx_ring; struct e1000_hw hw; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct e1000_adapter *VAR_11)
{
 struct e1000_hw *VAR_12 = &VAR_11->hw;
 struct e1000_ring *VAR_13 = VAR_11->rx_ring;
 struct e1000_ring *VAR_14 = VAR_11->tx_ring;
 int VAR_15 = 0;
 u32 VAR_16, VAR_17 = 0;

 VAR_11->eiac_mask = 0;


 if (VAR_12->mac.type == VAR_10) {
  u32 VAR_18 = FUNC_3(VAR_9);

  VAR_18 |= VAR_7;
  FUNC_4(VAR_9, VAR_18);
 }


 VAR_13->ims_val = VAR_4;
 VAR_11->eiac_mask |= VAR_13->ims_val;
 if (VAR_13->itr_val)
  FUNC_5(1000000000 / (VAR_13->itr_val * 256),
         VAR_13->itr_register);
 else
  FUNC_5(1, VAR_13->itr_register);
 VAR_17 = VAR_6 | VAR_15;


 VAR_14->ims_val = VAR_5;
 VAR_15++;
 if (VAR_14->itr_val)
  FUNC_5(1000000000 / (VAR_14->itr_val * 256),
         VAR_14->itr_register);
 else
  FUNC_5(1, VAR_14->itr_register);
 VAR_11->eiac_mask |= VAR_14->ims_val;
 VAR_17 |= ((VAR_6 | VAR_15) << 8);


 VAR_15++;
 VAR_17 |= ((VAR_6 | VAR_15) << 16);
 if (VAR_13->itr_val)
  FUNC_5(1000000000 / (VAR_13->itr_val * 256),
         VAR_12->hw_addr + FUNC_1(VAR_15));
 else
  FUNC_5(1, VAR_12->hw_addr + FUNC_1(VAR_15));


 VAR_17 |= FUNC_0(31);

 FUNC_4(VAR_8, VAR_17);


 VAR_16 = FUNC_3(VAR_0) & ~VAR_2;
 VAR_16 |= VAR_3 | VAR_1;
 FUNC_4(VAR_0, VAR_16);
 FUNC_2();
}
