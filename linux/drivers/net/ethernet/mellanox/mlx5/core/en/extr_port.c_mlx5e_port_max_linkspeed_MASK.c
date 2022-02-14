
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5e_port_eth_proto {int cap; } ;
struct mlx5_core_dev {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct mlx5_core_dev*,int ) ;
 int FUNC_2 (int,int const) ;
 int FUNC_3 (struct mlx5_core_dev*,int,int,struct mlx5e_port_eth_proto*) ;
 int FUNC_4 (struct mlx5_core_dev*,int const**,int*,int) ;
 int VAR_0 ;

int FUNC_5(struct mlx5_core_dev *VAR_1, u32 *VAR_2)
{
 struct mlx5e_port_eth_proto VAR_3;
 u32 VAR_4 = 0;
 const u32 *VAR_5;
 u32 VAR_6;
 bool VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_7 = FUNC_1(VAR_1, VAR_0);
 VAR_8 = FUNC_3(VAR_1, 1, VAR_7, &VAR_3);
 if (VAR_8)
  return VAR_8;

 FUNC_4(VAR_1, &VAR_5, &VAR_6, 0);
 for (VAR_9 = 0; VAR_9 < VAR_6; ++VAR_9)
  if (VAR_3.cap & FUNC_0(VAR_9))
   VAR_4 = FUNC_2(VAR_4, VAR_5[VAR_9]);

 *VAR_2 = VAR_4;
 return 0;
}
