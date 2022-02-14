
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct ixgbe_ring {int state; } ;
struct ixgbe_adapter {struct ixgbe_ring** tx_ring; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,struct ixgbe_adapter*,struct ixgbe_ring*) ;
 struct ixgbe_adapter* FUNC_1 (struct net_device*) ;
 size_t FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static netdev_tx_t FUNC_6(struct sk_buff *VAR_3,
          struct net_device *VAR_4,
          struct ixgbe_ring *VAR_5)
{
 struct ixgbe_adapter *VAR_6 = FUNC_1(VAR_4);
 struct ixgbe_ring *VAR_7;





 if (FUNC_3(VAR_3, 17))
  return VAR_1;

 VAR_7 = VAR_5 ? VAR_5 : VAR_6->tx_ring[FUNC_2(VAR_3)];
 if (FUNC_5(FUNC_4(VAR_2, &VAR_7->state)))
  return VAR_0;

 return FUNC_0(VAR_3, VAR_6, VAR_7);
}
