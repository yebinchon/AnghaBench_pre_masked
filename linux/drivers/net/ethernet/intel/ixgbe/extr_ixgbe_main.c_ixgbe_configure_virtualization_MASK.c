
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_5__ {int (* set_vmdq ) (struct ixgbe_hw*,int ,int) ;} ;
struct TYPE_6__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
struct ixgbe_adapter {int flags; scalar_t__ bridge_mode; int num_vfs; TYPE_4__* vfinfo; int netdev; TYPE_3__* ring_feature; int flags2; int num_rx_pools; struct ixgbe_hw hw; } ;
struct TYPE_8__ {int rss_query_enabled; int spoofchk_enabled; } ;
struct TYPE_7__ {int mask; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct ixgbe_hw*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_9 ;
 int FUNC_4 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (struct ixgbe_hw*,int ,int) ;
 size_t VAR_15 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int,int ) ;
 int FUNC_8 (int ,int,int ) ;
 int FUNC_9 (struct ixgbe_hw*,int ,int) ;

__attribute__((used)) static void FUNC_10(struct ixgbe_adapter *VAR_16)
{
 struct ixgbe_hw *VAR_17 = &VAR_16->hw;
 u16 VAR_18 = VAR_16->num_rx_pools;
 u32 VAR_19, VAR_20, VAR_21;
 u32 VAR_22, VAR_23;
 int VAR_24;

 if (!(VAR_16->flags & VAR_2))
  return;

 VAR_23 = FUNC_1(VAR_17, VAR_11);
 VAR_23 |= VAR_9;
 VAR_23 &= ~VAR_12;
 VAR_23 |= FUNC_6(0) << VAR_13;
 VAR_23 |= VAR_14;
 FUNC_5(VAR_17, VAR_11, VAR_23);




 VAR_21 = VAR_10;
 while (VAR_18--)
  FUNC_5(VAR_17, FUNC_4(FUNC_6(VAR_18)), VAR_21);

 VAR_20 = FUNC_6(0) % 32;
 VAR_19 = (FUNC_6(0) >= 32) ? 1 : 0;


 FUNC_5(VAR_17, FUNC_2(VAR_19), FUNC_0(31, VAR_20));
 FUNC_5(VAR_17, FUNC_2(VAR_19 ^ 1), VAR_19 - 1);
 FUNC_5(VAR_17, FUNC_3(VAR_19), FUNC_0(31, VAR_20));
 FUNC_5(VAR_17, FUNC_3(VAR_19 ^ 1), VAR_19 - 1);
 if (VAR_16->bridge_mode == VAR_0)
  FUNC_5(VAR_17, VAR_7, VAR_8);


 VAR_17->mac.ops.set_vmdq(VAR_17, 0, FUNC_6(0));


 VAR_16->flags2 &= ~VAR_1;





 switch (VAR_16->ring_feature[VAR_15].mask) {
 case 128:
  VAR_22 = VAR_4;
  break;
 case 129:
  VAR_22 = VAR_5;
  break;
 default:
  VAR_22 = VAR_6;
  break;
 }

 FUNC_5(VAR_17, VAR_3, VAR_22);

 for (VAR_24 = 0; VAR_24 < VAR_16->num_vfs; VAR_24++) {

  FUNC_8(VAR_16->netdev, VAR_24,
       VAR_16->vfinfo[VAR_24].spoofchk_enabled);


  FUNC_7(VAR_16->netdev, VAR_24,
       VAR_16->vfinfo[VAR_24].rss_query_enabled);
 }
}
