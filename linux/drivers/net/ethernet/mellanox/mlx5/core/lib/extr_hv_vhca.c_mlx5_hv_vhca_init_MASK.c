
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_hv_vhca_agent {struct mlx5_hv_vhca_agent** agents; int dev; } ;
struct mlx5_hv_vhca {struct mlx5_hv_vhca** agents; int dev; } ;


 int FUNC_0 (struct mlx5_hv_vhca_agent*) ;
 size_t VAR_0 ;
 int FUNC_1 (int ,struct mlx5_hv_vhca_agent*,int ) ;
 int FUNC_2 (int ) ;
 struct mlx5_hv_vhca_agent* FUNC_3 (struct mlx5_hv_vhca_agent*) ;
 int VAR_1 ;

int FUNC_4(struct mlx5_hv_vhca *VAR_2)
{
 struct mlx5_hv_vhca_agent *VAR_3;
 int VAR_4;

 if (FUNC_0(VAR_2))
  return FUNC_0(VAR_2);

 VAR_4 = FUNC_1(VAR_2->dev, VAR_2,
       VAR_1);
 if (VAR_4)
  return VAR_4;

 VAR_3 = FUNC_3(VAR_2);
 if (FUNC_0(VAR_3)) {
  FUNC_2(VAR_2->dev);
  return FUNC_0(VAR_3);
 }

 VAR_2->agents[VAR_0] = VAR_3;

 return 0;
}
