
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct timer_list {int dummy; } ;
struct skge_port {int port; int link_timer; struct skge_hw* hw; struct net_device* netdev; } ;
struct skge_hw {int phy_lock; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct skge_port* FUNC_0 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (scalar_t__) ;
 struct skge_port* VAR_8 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct skge_hw*,int,int ) ;
 int FUNC_8 (struct skge_hw*,int,int ,int) ;

__attribute__((used)) static void FUNC_9(struct timer_list *VAR_9)
{
 struct skge_port *VAR_10 = FUNC_0(VAR_10, VAR_9, VAR_7);
 struct net_device *VAR_11 = VAR_10->netdev;
 struct skge_hw *VAR_12 = VAR_10->hw;
 int VAR_13 = VAR_10->port;
 int VAR_14;
 unsigned long VAR_15;

 if (!FUNC_2(VAR_11))
  return;

 FUNC_4(&VAR_12->phy_lock, VAR_15);





 for (VAR_14 = 0; VAR_14 < 3; VAR_14++) {
  if (FUNC_7(VAR_12, VAR_13, VAR_2) & VAR_1)
   goto link_down;
 }


 if (FUNC_6(VAR_11)) {
  u16 VAR_16 = FUNC_7(VAR_12, VAR_13, VAR_3);
  VAR_16 &= ~VAR_5;
  FUNC_8(VAR_12, VAR_13, VAR_3, VAR_16);
  FUNC_7(VAR_12, VAR_13, VAR_4);
 } else {
link_down:
  FUNC_1(&VAR_10->link_timer,
     FUNC_3(VAR_6 + VAR_0));
 }
 FUNC_5(&VAR_12->phy_lock, VAR_15);
}
