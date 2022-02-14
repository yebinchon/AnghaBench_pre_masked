
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rocker_world_ops {int (* port_attr_bridge_flags_support_get ) (struct rocker_port const*,unsigned long*) ;} ;
struct rocker_port {TYPE_1__* rocker; } ;
struct TYPE_2__ {struct rocker_world_ops* wops; } ;


 int VAR_0 ;
 int FUNC_0 (struct rocker_port const*,unsigned long*) ;

__attribute__((used)) static int
FUNC_1(const struct rocker_port *
      VAR_1,
      unsigned long *
      VAR_2)
{
 struct rocker_world_ops *VAR_3 = VAR_1->rocker->wops;

 if (!VAR_3->port_attr_bridge_flags_support_get)
  return -VAR_0;
 return VAR_3->port_attr_bridge_flags_support_get(VAR_1,
       VAR_2);
}
