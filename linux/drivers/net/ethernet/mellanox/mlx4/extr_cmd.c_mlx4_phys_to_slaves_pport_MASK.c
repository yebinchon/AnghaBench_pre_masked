
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx4_slaves_pport {int slaves; } ;
struct TYPE_3__ {int num_ports; } ;
struct mlx4_dev {TYPE_2__* persist; TYPE_1__ caps; } ;
struct mlx4_active_ports {int ports; } ;
struct TYPE_4__ {int num_vfs; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 struct mlx4_active_ports FUNC_1 (struct mlx4_dev*,unsigned int) ;
 int FUNC_2 (unsigned int,int ) ;
 scalar_t__ FUNC_3 (int,int ) ;

struct mlx4_slaves_pport FUNC_4(struct mlx4_dev *VAR_1,
         int VAR_2)
{
 unsigned VAR_3;
 struct mlx4_slaves_pport VAR_4;

 FUNC_0(VAR_4.slaves, VAR_0);

 if (VAR_2 <= 0 || VAR_2 > VAR_1->caps.num_ports)
  return VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_1->persist->num_vfs + 1; VAR_3++) {
  struct mlx4_active_ports VAR_5 =
   FUNC_1(VAR_1, VAR_3);
  if (FUNC_3(VAR_2 - 1, VAR_5.ports))
   FUNC_2(VAR_3, VAR_4.slaves);
 }

 return VAR_4;
}
