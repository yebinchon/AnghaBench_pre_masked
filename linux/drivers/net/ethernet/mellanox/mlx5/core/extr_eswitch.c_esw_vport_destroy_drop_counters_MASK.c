
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int drop_counter; } ;
struct TYPE_3__ {int drop_counter; } ;
struct mlx5_vport {TYPE_2__ egress; TYPE_1__ ingress; struct mlx5_core_dev* dev; } ;
struct mlx5_core_dev {int dummy; } ;


 int FUNC_0 (struct mlx5_core_dev*,int ) ;

__attribute__((used)) static void FUNC_1(struct mlx5_vport *VAR_0)
{
 struct mlx5_core_dev *VAR_1 = VAR_0->dev;

 if (VAR_0->ingress.drop_counter)
  FUNC_0(VAR_1, VAR_0->ingress.drop_counter);
 if (VAR_0->egress.drop_counter)
  FUNC_0(VAR_1, VAR_0->egress.drop_counter);
}
