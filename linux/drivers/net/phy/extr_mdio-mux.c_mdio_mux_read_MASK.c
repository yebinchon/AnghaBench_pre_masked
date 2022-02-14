
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mii_bus {struct mdio_mux_child_bus* priv; } ;
struct mdio_mux_parent_bus {int (* switch_fn ) (int ,int ,int ) ;TYPE_1__* mii_bus; int current_child; int switch_data; } ;
struct mdio_mux_child_bus {int bus_number; struct mdio_mux_parent_bus* parent; } ;
struct TYPE_2__ {int (* read ) (TYPE_1__*,int,int) ;int mdio_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int,int) ;

__attribute__((used)) static int FUNC_4(struct mii_bus *VAR_1, int VAR_2, int VAR_3)
{
 struct mdio_mux_child_bus *VAR_4 = VAR_1->priv;
 struct mdio_mux_parent_bus *VAR_5 = VAR_4->parent;
 int VAR_6;

 FUNC_0(&VAR_5->mii_bus->mdio_lock, VAR_0);
 VAR_6 = VAR_5->switch_fn(VAR_5->current_child, VAR_4->bus_number, VAR_5->switch_data);
 if (VAR_6)
  goto out;

 VAR_5->current_child = VAR_4->bus_number;

 VAR_6 = VAR_5->mii_bus->read(VAR_5->mii_bus, VAR_2, VAR_3);
out:
 FUNC_1(&VAR_5->mii_bus->mdio_lock);

 return VAR_6;
}
