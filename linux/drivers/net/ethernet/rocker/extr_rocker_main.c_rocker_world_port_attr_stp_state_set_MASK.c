
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct switchdev_trans {int dummy; } ;
struct rocker_world_ops {int (* port_attr_stp_state_set ) (struct rocker_port*,int ) ;} ;
struct rocker_port {TYPE_1__* rocker; } ;
struct TYPE_2__ {struct rocker_world_ops* wops; } ;


 int VAR_0 ;
 int FUNC_0 (struct rocker_port*,int ) ;
 scalar_t__ FUNC_1 (struct switchdev_trans*) ;

__attribute__((used)) static int FUNC_2(struct rocker_port *VAR_1,
      u8 VAR_2,
      struct switchdev_trans *VAR_3)
{
 struct rocker_world_ops *VAR_4 = VAR_1->rocker->wops;

 if (!VAR_4->port_attr_stp_state_set)
  return -VAR_0;

 if (FUNC_1(VAR_3))
  return 0;

 return VAR_4->port_attr_stp_state_set(VAR_1, VAR_2);
}
