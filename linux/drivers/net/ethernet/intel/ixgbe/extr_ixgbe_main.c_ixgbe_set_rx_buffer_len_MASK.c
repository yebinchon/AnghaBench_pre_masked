
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int mtu; } ;
struct ixgbe_ring {int state; } ;
struct ixgbe_hw {int dummy; } ;
struct ixgbe_adapter {int flags; int num_rx_queues; int flags2; struct ixgbe_ring** rx_ring; struct net_device* netdev; struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*,int ,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct ixgbe_ring*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct ixgbe_ring*) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct ixgbe_adapter *VAR_16)
{
 struct ixgbe_hw *VAR_17 = &VAR_16->hw;
 struct net_device *VAR_18 = VAR_16->netdev;
 int VAR_19 = VAR_18->mtu + VAR_2 + VAR_0;
 struct ixgbe_ring *VAR_20;
 int VAR_21;
 u32 VAR_22, VAR_23;
 if (VAR_19 < (VAR_1 + VAR_0))
  VAR_19 = (VAR_1 + VAR_0);

 VAR_22 = FUNC_0(VAR_17, VAR_10);
 if (VAR_19 != (VAR_22 >> VAR_12)) {
  VAR_22 &= ~VAR_11;
  VAR_22 |= VAR_19 << VAR_12;

  FUNC_1(VAR_17, VAR_10, VAR_22);
 }

 VAR_23 = FUNC_0(VAR_17, VAR_8);

 VAR_23 |= VAR_9;
 FUNC_1(VAR_17, VAR_8, VAR_23);





 for (VAR_21 = 0; VAR_21 < VAR_16->num_rx_queues; VAR_21++) {
  VAR_20 = VAR_16->rx_ring[VAR_21];

  FUNC_3(VAR_20);
  FUNC_2(VAR_13, &VAR_20->state);
  FUNC_2(VAR_14, &VAR_20->state);

  if (VAR_16->flags2 & VAR_5)
   FUNC_5(VAR_20);

  if (FUNC_6(VAR_15, &VAR_20->state))
   FUNC_4(VAR_13, &VAR_20->state);

  if (VAR_16->flags2 & VAR_6)
   continue;

  FUNC_4(VAR_14, &VAR_20->state);


  if (VAR_16->flags2 & VAR_5)
   FUNC_4(VAR_13, &VAR_20->state);

  if (VAR_3 ||
      (VAR_19 > (VAR_1 + VAR_0)))
   FUNC_4(VAR_13, &VAR_20->state);

 }
}
