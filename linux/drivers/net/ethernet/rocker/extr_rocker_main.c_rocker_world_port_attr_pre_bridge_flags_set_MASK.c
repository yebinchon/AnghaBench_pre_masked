
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct switchdev_trans {int dummy; } ;
struct rocker_world_ops {int port_attr_bridge_flags_set; } ;
struct rocker_port {TYPE_1__* rocker; } ;
struct TYPE_2__ {struct rocker_world_ops* wops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rocker_port*,unsigned long*) ;

__attribute__((used)) static int
FUNC_1(struct rocker_port *VAR_2,
         unsigned long VAR_3,
         struct switchdev_trans *VAR_4)
{
 struct rocker_world_ops *VAR_5 = VAR_2->rocker->wops;
 unsigned long VAR_6;
 int VAR_7;

 if (!VAR_5->port_attr_bridge_flags_set)
  return -VAR_1;

 VAR_7 = FUNC_0(VAR_2,
             &VAR_6);
 if (VAR_7)
  return VAR_7;

 if (VAR_3 & ~VAR_6)
  return -VAR_0;

 return 0;
}
