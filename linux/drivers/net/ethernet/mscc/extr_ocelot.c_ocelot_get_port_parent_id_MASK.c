
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocelot_port {struct ocelot* ocelot; } ;
struct ocelot {int base_mac; } ;
struct netdev_phys_item_id {int id_len; int id; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int *,int *,int) ;
 struct ocelot_port* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0,
         struct netdev_phys_item_id *VAR_1)
{
 struct ocelot_port *VAR_2 = FUNC_1(VAR_0);
 struct ocelot *VAR_3 = VAR_2->ocelot;

 VAR_1->id_len = sizeof(VAR_3->base_mac);
 FUNC_0(&VAR_1->id, &VAR_3->base_mac, VAR_1->id_len);

 return 0;
}
