
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ixgbe_adv_rx_desc {int dummy; } ixgbe_adv_rx_desc ;
struct sk_buff {int dummy; } ;
struct net_device {int features; } ;
struct ixgbevf_ring {struct net_device* netdev; } ;


 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (union ixgbe_adv_rx_desc*,int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static bool FUNC_5(struct ixgbevf_ring *VAR_2,
        union ixgbe_adv_rx_desc *VAR_3,
        struct sk_buff *VAR_4)
{

 if (FUNC_0(VAR_4))
  return 1;


 if (FUNC_4(FUNC_3(VAR_3,
       VAR_0))) {
  struct net_device *VAR_5 = VAR_2->netdev;

  if (!(VAR_5->features & VAR_1)) {
   FUNC_1(VAR_4);
   return 1;
  }
 }


 if (FUNC_2(VAR_4))
  return 1;

 return 0;
}
