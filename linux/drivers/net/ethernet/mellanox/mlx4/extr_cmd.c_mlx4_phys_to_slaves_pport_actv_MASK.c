
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx4_slaves_pport {int slaves; } ;
struct TYPE_4__ {int num_ports; } ;
struct mlx4_dev {TYPE_2__ caps; TYPE_1__* persist; } ;
struct mlx4_active_ports {int ports; } ;
struct TYPE_3__ {int num_vfs; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 struct mlx4_active_ports FUNC_2 (struct mlx4_dev*,unsigned int) ;
 int FUNC_3 (unsigned int,int ) ;

struct mlx4_slaves_pport FUNC_4(
  struct mlx4_dev *VAR_1,
  const struct mlx4_active_ports *VAR_2)
{
 unsigned VAR_3;
 struct mlx4_slaves_pport VAR_4;

 FUNC_1(VAR_4.slaves, VAR_0);

 for (VAR_3 = 0; VAR_3 < VAR_1->persist->num_vfs + 1; VAR_3++) {
  struct mlx4_active_ports VAR_5 =
   FUNC_2(VAR_1, VAR_3);
  if (FUNC_0(VAR_2->ports, VAR_5.ports,
     VAR_1->caps.num_ports))
   FUNC_3(VAR_3, VAR_4.slaves);
 }

 return VAR_4;
}
