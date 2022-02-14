
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mdio_mux_parent_bus {TYPE_1__* mii_bus; struct mdio_mux_child_bus* children; } ;
struct mdio_mux_child_bus {struct mdio_mux_child_bus* next; int mii_bus; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(void *VAR_0)
{
 struct mdio_mux_parent_bus *VAR_1 = VAR_0;
 struct mdio_mux_child_bus *VAR_2 = VAR_1->children;

 while (VAR_2) {
  FUNC_1(VAR_2->mii_bus);
  FUNC_0(VAR_2->mii_bus);
  VAR_2 = VAR_2->next;
 }

 FUNC_2(&VAR_1->mii_bus->dev);
}
