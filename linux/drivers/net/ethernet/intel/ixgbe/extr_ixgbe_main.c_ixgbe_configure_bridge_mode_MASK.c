
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int (* set_source_address_pruning ) (struct ixgbe_hw*,int,unsigned int) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
struct ixgbe_adapter {unsigned int num_vfs; unsigned int num_rx_pools; int bridge_mode; struct ixgbe_hw hw; } ;
typedef int __u16 ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ixgbe_hw*,int ,int ) ;
 int VAR_5 ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (struct ixgbe_hw*,int,unsigned int) ;
 int FUNC_4 (struct ixgbe_hw*,int,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct ixgbe_adapter *VAR_6,
           __u16 VAR_7)
{
 struct ixgbe_hw *VAR_8 = &VAR_6->hw;
 unsigned int VAR_9, VAR_10;
 u32 VAR_11;

 switch (VAR_7) {
 case 128:

  FUNC_1(&VAR_6->hw, VAR_1, 0);





  VAR_11 = FUNC_0(VAR_8, VAR_3);
  VAR_11 |= VAR_4;
  FUNC_1(VAR_8, VAR_3, VAR_11);




  VAR_10 = VAR_6->num_vfs + VAR_6->num_rx_pools;
  for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
   if (VAR_8->mac.ops.set_source_address_pruning)
    VAR_8->mac.ops.set_source_address_pruning(VAR_8,
               1,
               VAR_9);
  }
  break;
 case 129:

  FUNC_1(&VAR_6->hw, VAR_1,
    VAR_2);




  VAR_11 = FUNC_0(VAR_8, VAR_3);
  if (!VAR_6->num_vfs)
   VAR_11 &= ~VAR_4;
  FUNC_1(VAR_8, VAR_3, VAR_11);




  VAR_10 = VAR_6->num_vfs + VAR_6->num_rx_pools;
  for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
   if (VAR_8->mac.ops.set_source_address_pruning)
    VAR_8->mac.ops.set_source_address_pruning(VAR_8,
               0,
               VAR_9);
  }
  break;
 default:
  return -VAR_0;
 }

 VAR_6->bridge_mode = VAR_7;

 FUNC_2(VAR_5, "enabling bridge mode: %s\n",
        VAR_7 == 128 ? "VEPA" : "VEB");

 return 0;
}
