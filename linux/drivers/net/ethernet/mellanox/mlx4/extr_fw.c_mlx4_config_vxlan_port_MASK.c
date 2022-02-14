
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_dev {int dummy; } ;
struct mlx4_config_dev {int vxlan_udp_dport; int update_flags; } ;
typedef int config_dev ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mlx4_config_dev*,int ,int) ;
 int FUNC_2 (struct mlx4_dev*,struct mlx4_config_dev*) ;

int FUNC_3(struct mlx4_dev *VAR_1, __be16 VAR_2)
{
 struct mlx4_config_dev VAR_3;

 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.update_flags = FUNC_0(VAR_0);
 VAR_3.vxlan_udp_dport = VAR_2;

 return FUNC_2(VAR_1, &VAR_3);
}
