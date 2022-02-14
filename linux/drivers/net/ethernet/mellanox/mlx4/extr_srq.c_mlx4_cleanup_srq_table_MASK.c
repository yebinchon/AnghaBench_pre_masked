
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx4_dev {int dummy; } ;
struct TYPE_3__ {int bitmap; } ;
struct TYPE_4__ {TYPE_1__ srq_table; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct mlx4_dev*) ;
 TYPE_2__* FUNC_2 (struct mlx4_dev*) ;

void FUNC_3(struct mlx4_dev *VAR_0)
{
 if (FUNC_1(VAR_0))
  return;
 FUNC_0(&FUNC_2(VAR_0)->srq_table.bitmap);
}
