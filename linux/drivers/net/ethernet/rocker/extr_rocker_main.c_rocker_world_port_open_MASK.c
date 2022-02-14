
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rocker_world_ops {int (* port_open ) (struct rocker_port*) ;} ;
struct rocker_port {TYPE_1__* rocker; } ;
struct TYPE_2__ {struct rocker_world_ops* wops; } ;


 int FUNC_0 (struct rocker_port*) ;

__attribute__((used)) static int FUNC_1(struct rocker_port *VAR_0)
{
 struct rocker_world_ops *VAR_1 = VAR_0->rocker->wops;

 if (!VAR_1->port_open)
  return 0;
 return VAR_1->port_open(VAR_0);
}
