
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int orig_dev; } ;
struct switchdev_obj_port_vlan {TYPE_2__ obj; } ;
struct rocker_world_ops {int (* port_obj_vlan_del ) (struct rocker_port*,struct switchdev_obj_port_vlan const*) ;} ;
struct rocker_port {TYPE_1__* rocker; } ;
struct TYPE_3__ {struct rocker_world_ops* wops; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct rocker_port*,struct switchdev_obj_port_vlan const*) ;

__attribute__((used)) static int
FUNC_2(struct rocker_port *VAR_1,
          const struct switchdev_obj_port_vlan *VAR_2)
{
 struct rocker_world_ops *VAR_3 = VAR_1->rocker->wops;

 if (FUNC_0(VAR_2->obj.orig_dev))
  return -VAR_0;

 if (!VAR_3->port_obj_vlan_del)
  return -VAR_0;
 return VAR_3->port_obj_vlan_del(VAR_1, VAR_2);
}
