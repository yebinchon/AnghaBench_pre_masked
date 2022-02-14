
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_tun_entropy {int enabled; scalar_t__ num_disabling_entries; scalar_t__ num_enabling_entries; int lock; struct mlx5_core_dev* mdev; } ;
struct mlx5_port_tun_entropy_flags {int calc_enabled; scalar_t__ calc_supported; } ;
struct mlx5_core_dev {int dummy; } ;


 int FUNC_0 (struct mlx5_core_dev*,struct mlx5_port_tun_entropy_flags*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct mlx5_tun_entropy *VAR_0,
    struct mlx5_core_dev *VAR_1)
{
 struct mlx5_port_tun_entropy_flags VAR_2;

 VAR_0->mdev = VAR_1;
 FUNC_1(&VAR_0->lock);
 FUNC_0(VAR_1, &VAR_2);
 VAR_0->num_enabling_entries = 0;
 VAR_0->num_disabling_entries = 0;
 VAR_0->enabled = VAR_2.calc_supported ?
          VAR_2.calc_enabled : 1;
}
