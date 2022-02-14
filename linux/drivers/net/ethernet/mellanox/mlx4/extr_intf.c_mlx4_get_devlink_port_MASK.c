
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct devlink_port {int dummy; } ;
struct mlx4_port_info {struct devlink_port devlink_port; } ;
struct mlx4_dev {int dummy; } ;
struct TYPE_2__ {struct mlx4_port_info* port; } ;


 TYPE_1__* FUNC_0 (struct mlx4_dev*) ;

struct devlink_port *FUNC_1(struct mlx4_dev *VAR_0, int VAR_1)
{
 struct mlx4_port_info *VAR_2 = &FUNC_0(VAR_0)->port[VAR_1];

 return &VAR_2->devlink_port;
}
