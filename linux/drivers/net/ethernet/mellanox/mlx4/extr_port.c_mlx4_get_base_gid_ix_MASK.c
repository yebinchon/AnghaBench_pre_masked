
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx4_slaves_pport {int slaves; } ;
struct TYPE_3__ {scalar_t__ num_ports; } ;
struct mlx4_dev {TYPE_2__* persist; TYPE_1__ caps; } ;
struct mlx4_active_ports {int ports; } ;
struct TYPE_4__ {scalar_t__ num_vfs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 struct mlx4_active_ports FUNC_3 (struct mlx4_dev*,int) ;
 struct mlx4_slaves_pport FUNC_4 (struct mlx4_dev*,int) ;
 struct mlx4_slaves_pport FUNC_5 (struct mlx4_dev*,struct mlx4_active_ports*) ;
 int FUNC_6 (unsigned int,int ) ;

int FUNC_7(struct mlx4_dev *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;
 unsigned VAR_6;
 int VAR_7 = VAR_3;
 int VAR_8;

 struct mlx4_slaves_pport VAR_9;
 struct mlx4_active_ports VAR_10;
 unsigned VAR_11;

 if (VAR_3 == 0)
  return 0;

 VAR_9 = FUNC_4(VAR_2, VAR_4);
 VAR_10 = FUNC_3(VAR_2, VAR_3);
 VAR_11 = FUNC_2(VAR_10.ports, VAR_2->caps.num_ports) +
  FUNC_0(VAR_10.ports, VAR_2->caps.num_ports) + 1;

 for (VAR_6 = 1; VAR_6 < VAR_11; VAR_6++) {
  struct mlx4_active_ports VAR_12;
  struct mlx4_slaves_pport VAR_13;
  FUNC_1(VAR_12.ports, VAR_2->caps.num_ports);
  FUNC_6(VAR_6 - 1, VAR_12.ports);
  if (VAR_6 == VAR_4)
   continue;
  VAR_13 = FUNC_5(
        VAR_2, &VAR_12);
  VAR_7 -= FUNC_0(VAR_13.slaves,
        VAR_2->persist->num_vfs + 1);
 }
 VAR_5 = VAR_0 - VAR_1;
 VAR_8 = FUNC_0(VAR_9.slaves, VAR_2->persist->num_vfs + 1) - 1;
 if (VAR_7 <= VAR_5 % VAR_8)
  return VAR_1 + ((VAR_5 / VAR_8) + 1) * (VAR_7 - 1);

 return VAR_1 + (VAR_5 % VAR_8) +
  ((VAR_5 / VAR_8) * (VAR_7 - 1));
}
