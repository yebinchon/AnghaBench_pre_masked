
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5e_port_eth_proto {int oper; int admin; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_core_dev*,int ) ;
 int FUNC_1 (struct mlx5_core_dev*,int,int,struct mlx5e_port_eth_proto*) ;
 int FUNC_2 (struct mlx5_core_dev*,int ,int) ;
 int VAR_1 ;

int FUNC_3(struct mlx5_core_dev *VAR_2, u32 *VAR_3)
{
 struct mlx5e_port_eth_proto VAR_4;
 bool VAR_5 = 0;
 bool VAR_6;
 int VAR_7;

 VAR_6 = FUNC_0(VAR_2, VAR_1);
 VAR_7 = FUNC_1(VAR_2, 1, VAR_6, &VAR_4);
 if (VAR_7)
  goto out;
 if (VAR_6 && !VAR_4.admin) {
  VAR_5 = 1;
  VAR_7 = FUNC_1(VAR_2, 1, 0, &VAR_4);
  if (VAR_7)
   goto out;
 }
 *VAR_3 = FUNC_2(VAR_2, VAR_4.oper, VAR_5);
 if (!(*VAR_3))
  VAR_7 = -VAR_0;

out:
 return VAR_7;
}
