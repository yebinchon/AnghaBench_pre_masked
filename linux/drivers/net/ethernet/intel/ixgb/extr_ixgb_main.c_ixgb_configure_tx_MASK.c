
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct ixgb_tx_desc {int dummy; } ;
struct ixgb_hw {int dummy; } ;
struct TYPE_2__ {int dma; int count; } ;
struct ixgb_adapter {int tx_int_delay; int tx_cmd_type; scalar_t__ tx_int_delay_enable; struct ixgb_hw hw; TYPE_1__ tx_ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ixgb_hw*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static void
FUNC_1(struct ixgb_adapter *VAR_12)
{
 u64 VAR_13 = VAR_12->tx_ring.dma;
 u32 VAR_14 = VAR_12->tx_ring.count * sizeof(struct ixgb_tx_desc);
 u32 VAR_15;
 struct ixgb_hw *VAR_16 = &VAR_12->hw;





 FUNC_0(VAR_16, VAR_7, (VAR_13 & 0x00000000ffffffffULL));
 FUNC_0(VAR_16, VAR_6, (VAR_13 >> 32));

 FUNC_0(VAR_16, VAR_9, VAR_14);



 FUNC_0(VAR_16, VAR_8, 0);
 FUNC_0(VAR_16, VAR_10, 0);





 FUNC_0(VAR_16, VAR_11, VAR_12->tx_int_delay);



 VAR_15 = VAR_0 | VAR_2 | VAR_1;
 FUNC_0(VAR_16, VAR_5, VAR_15);


 VAR_12->tx_cmd_type =
  VAR_4 |
  (VAR_12->tx_int_delay_enable ? VAR_3 : 0);
}
