
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skge_port {int dummy; } ;
struct skge_hw {int ports; scalar_t__ phy_type; int hw_lock; int intr_mask; int phy_lock; struct net_device** dev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct skge_port*) ;
 int FUNC_1 (struct skge_hw*) ;
 struct skge_port* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct skge_hw*,int ) ;
 int FUNC_5 (struct skge_hw*,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct skge_port*) ;

__attribute__((used)) static void FUNC_11(unsigned long VAR_3)
{
 struct skge_hw *VAR_4 = (struct skge_hw *) VAR_3;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4->ports; VAR_5++) {
  struct net_device *VAR_6 = VAR_4->dev[VAR_5];

  if (FUNC_3(VAR_6)) {
   struct skge_port *VAR_7 = FUNC_2(VAR_6);

   FUNC_6(&VAR_4->phy_lock);
   if (!FUNC_1(VAR_4))
    FUNC_10(VAR_7);
   else if (VAR_4->phy_type == VAR_2)
    FUNC_0(VAR_7);
   FUNC_8(&VAR_4->phy_lock);
  }
 }

 FUNC_7(&VAR_4->hw_lock);
 VAR_4->intr_mask |= VAR_1;
 FUNC_5(VAR_4, VAR_0, VAR_4->intr_mask);
 FUNC_4(VAR_4, VAR_0);
 FUNC_9(&VAR_4->hw_lock);
}
