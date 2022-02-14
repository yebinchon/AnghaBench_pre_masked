
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct ixgb_rx_desc {int dummy; } ;
struct ixgb_hw {int dummy; } ;
struct TYPE_2__ {int dma; int count; } ;
struct ixgb_adapter {int rx_int_delay; scalar_t__ rx_csum; struct ixgb_hw hw; TYPE_1__ rx_ring; } ;


 int VAR_0 ;
 int FUNC_0 (struct ixgb_hw*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct ixgb_hw*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_2(struct ixgb_adapter *VAR_11)
{
 u64 VAR_12 = VAR_11->rx_ring.dma;
 u32 VAR_13 = VAR_11->rx_ring.count * sizeof(struct ixgb_rx_desc);
 struct ixgb_hw *VAR_14 = &VAR_11->hw;
 u32 VAR_15;
 u32 VAR_16;



 VAR_15 = FUNC_0(VAR_14, VAR_2);
 FUNC_1(VAR_14, VAR_2, VAR_15 & ~VAR_0);



 FUNC_1(VAR_14, VAR_8, VAR_11->rx_int_delay);



 FUNC_1(VAR_14, VAR_4, (VAR_12 & 0x00000000ffffffffULL));
 FUNC_1(VAR_14, VAR_3, (VAR_12 >> 32));

 FUNC_1(VAR_14, VAR_6, VAR_13);


 FUNC_1(VAR_14, VAR_5, 0);
 FUNC_1(VAR_14, VAR_7, 0);






 FUNC_1(VAR_14, VAR_10, 0);


 if (VAR_11->rx_csum) {
  VAR_16 = FUNC_0(VAR_14, VAR_9);
  VAR_16 |= VAR_1;
  FUNC_1(VAR_14, VAR_9, VAR_16);
 }



 FUNC_1(VAR_14, VAR_2, VAR_15);
}
