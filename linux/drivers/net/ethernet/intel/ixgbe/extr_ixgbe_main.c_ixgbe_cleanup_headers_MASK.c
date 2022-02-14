
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ixgbe_adv_rx_desc {int dummy; } ixgbe_adv_rx_desc ;
struct sk_buff {int dummy; } ;
struct net_device {int features; } ;
struct ixgbe_ring {struct net_device* netdev; } ;


 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct ixgbe_ring*,struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct ixgbe_ring*,union ixgbe_adv_rx_desc*) ;
 scalar_t__ FUNC_5 (union ixgbe_adv_rx_desc*,int ) ;
 int FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (int) ;

bool FUNC_8(struct ixgbe_ring *VAR_2,
      union ixgbe_adv_rx_desc *VAR_3,
      struct sk_buff *VAR_4)
{
 struct net_device *VAR_5 = VAR_2->netdev;


 if (FUNC_0(VAR_4))
  return 1;




 if (!VAR_5 ||
     (FUNC_7(FUNC_5(VAR_3,
      VAR_0) &&
      !(VAR_5->features & VAR_1)))) {
  FUNC_1(VAR_4);
  return 1;
 }


 if (!FUNC_6(VAR_4))
  FUNC_3(VAR_2, VAR_4);
 if (FUNC_2(VAR_4))
  return 1;

 return 0;
}
