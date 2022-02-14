
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5e_priv {int dummy; } ;
struct TYPE_2__ {int (* get_num_stats ) (struct mlx5e_priv*) ;} ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mlx5e_priv*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (struct mlx5e_priv*) ;

int FUNC_2(struct mlx5e_priv *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7 = 0;

 switch (VAR_5) {
 case 129:
  for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
   VAR_7 += VAR_3[VAR_6].get_num_stats(VAR_4);
  return VAR_7;
 case 130:
  return VAR_1;
 case 128:
  return FUNC_0(VAR_4);

 default:
  return -VAR_0;
 }
}
