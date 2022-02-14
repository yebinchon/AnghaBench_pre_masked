
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocelot_port {int chip_port; struct ocelot* ocelot; } ;
struct ocelot {int bridge_mask; struct net_device* hw_bridge_dev; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct ocelot_port *VAR_1,
       struct net_device *VAR_2)
{
 struct ocelot *VAR_3 = VAR_1->ocelot;

 if (!VAR_3->bridge_mask) {
  VAR_3->hw_bridge_dev = VAR_2;
 } else {
  if (VAR_3->hw_bridge_dev != VAR_2)


   return -VAR_0;
 }

 VAR_3->bridge_mask |= FUNC_0(VAR_1->chip_port);

 return 0;
}
