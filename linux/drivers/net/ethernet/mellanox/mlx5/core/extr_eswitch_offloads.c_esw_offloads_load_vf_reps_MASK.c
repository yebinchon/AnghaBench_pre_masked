
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct mlx5_eswitch {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mlx5_eswitch*,int,scalar_t__) ;
 int FUNC_1 (struct mlx5_eswitch*,int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct mlx5_eswitch *VAR_1, int VAR_2)
{
 u8 VAR_3 = 0;
 int VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
  if (VAR_4)
   goto err_reps;
 }

 return VAR_4;

err_reps:
 while (VAR_3-- > 0)
  FUNC_1(VAR_1, VAR_2, VAR_3);
 return VAR_4;
}
