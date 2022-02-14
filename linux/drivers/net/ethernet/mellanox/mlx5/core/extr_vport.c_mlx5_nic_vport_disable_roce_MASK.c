
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ roce_en; } ;
struct mlx5_core_dev {TYPE_1__ roce; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_core_dev*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct mlx5_core_dev *VAR_2)
{
 int VAR_3 = 0;

 FUNC_1(&VAR_1);
 if (VAR_2->roce.roce_en) {
  VAR_2->roce.roce_en--;
  if (VAR_2->roce.roce_en == 0)
   VAR_3 = FUNC_0(VAR_2, VAR_0);

  if (VAR_3)
   VAR_2->roce.roce_en++;
 }
 FUNC_2(&VAR_1);
 return VAR_3;
}
