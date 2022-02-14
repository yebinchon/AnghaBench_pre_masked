
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int vlan; } ;
struct TYPE_8__ {TYPE_3__ upper; } ;
union ixgbe_adv_rx_desc {TYPE_4__ wb; } ;
typedef int u32 ;
typedef int u16 ;
struct sk_buff {int protocol; scalar_t__ len; } ;
struct net_device {int features; } ;
struct ixgbe_ring {int queue_index; TYPE_2__* q_vector; struct net_device* netdev; } ;
struct TYPE_6__ {TYPE_1__* adapter; } ;
struct TYPE_5__ {int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*,int ,int ) ;
 int FUNC_1 (struct sk_buff*,struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ixgbe_ring*,union ixgbe_adv_rx_desc*,struct sk_buff*) ;
 int FUNC_4 (struct ixgbe_ring*,union ixgbe_adv_rx_desc*,struct sk_buff*) ;
 int FUNC_5 (struct ixgbe_ring*,union ixgbe_adv_rx_desc*,struct sk_buff*) ;
 int FUNC_6 (struct ixgbe_ring*,union ixgbe_adv_rx_desc*,struct sk_buff*) ;
 scalar_t__ FUNC_7 (union ixgbe_adv_rx_desc*,int ) ;
 int FUNC_8 (struct ixgbe_ring*,struct sk_buff*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,scalar_t__,int,int) ;
 int FUNC_11 (struct net_device*) ;
 scalar_t__ FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_14 (int) ;

void FUNC_15(struct ixgbe_ring *VAR_6,
         union ixgbe_adv_rx_desc *VAR_7,
         struct sk_buff *VAR_8)
{
 struct net_device *VAR_9 = VAR_6->netdev;
 u32 VAR_10 = VAR_6->q_vector->adapter->flags;

 FUNC_8(VAR_6, VAR_8);

 FUNC_6(VAR_6, VAR_7, VAR_8);

 FUNC_5(VAR_6, VAR_7, VAR_8);

 if (FUNC_14(VAR_10 & VAR_2))
  FUNC_4(VAR_6, VAR_7, VAR_8);

 if ((VAR_9->features & VAR_5) &&
     FUNC_7(VAR_7, VAR_4)) {
  u16 VAR_11 = FUNC_9(VAR_7->wb.upper.vlan);
  FUNC_0(VAR_8, FUNC_2(VAR_1), VAR_11);
 }

 if (FUNC_7(VAR_7, VAR_3))
  FUNC_3(VAR_6, VAR_7, VAR_8);


 if (FUNC_12(VAR_9))
  FUNC_13(VAR_8, VAR_6->queue_index);
 else
  FUNC_10(FUNC_11(VAR_9), VAR_8->len + VAR_0, 1,
     0);

 VAR_8->protocol = FUNC_1(VAR_8, VAR_9);
}
