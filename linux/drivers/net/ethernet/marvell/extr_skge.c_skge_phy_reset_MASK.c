
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skge_port {int port; int netdev; struct skge_hw* hw; } ;
struct skge_hw {int phy_lock; struct net_device** dev; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct skge_hw*,int) ;
 int FUNC_1 (struct skge_hw*,int) ;
 scalar_t__ FUNC_2 (struct skge_hw*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct skge_hw*,int) ;
 int FUNC_9 (struct skge_hw*,int) ;

__attribute__((used)) static void FUNC_10(struct skge_port *VAR_0)
{
 struct skge_hw *VAR_1 = VAR_0->hw;
 int VAR_2 = VAR_0->port;
 struct net_device *VAR_3 = VAR_1->dev[VAR_2];

 FUNC_4(VAR_0->netdev);
 FUNC_3(VAR_0->netdev);

 FUNC_6(&VAR_1->phy_lock);
 if (FUNC_2(VAR_1)) {
  FUNC_1(VAR_1, VAR_2);
  FUNC_0(VAR_1, VAR_2);
 } else {
  FUNC_9(VAR_1, VAR_2);
  FUNC_8(VAR_1, VAR_2);
 }
 FUNC_7(&VAR_1->phy_lock);

 FUNC_5(VAR_3);
}
