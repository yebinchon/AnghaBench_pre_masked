
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct switchdev_notifier_fdb_info {int addr; int vid; } ;
struct rocker_world_ops {int (* port_obj_fdb_add ) (struct rocker_port*,int ,int ) ;} ;
struct rocker_port {TYPE_1__* rocker; } ;
struct TYPE_2__ {struct rocker_world_ops* wops; } ;


 int VAR_0 ;
 int FUNC_0 (struct rocker_port*,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct rocker_port *VAR_1,
     struct switchdev_notifier_fdb_info *VAR_2)
{
 struct rocker_world_ops *VAR_3 = VAR_1->rocker->wops;

 if (!VAR_3->port_obj_fdb_add)
  return -VAR_0;

 return VAR_3->port_obj_fdb_add(VAR_1, VAR_2->vid, VAR_2->addr);
}
