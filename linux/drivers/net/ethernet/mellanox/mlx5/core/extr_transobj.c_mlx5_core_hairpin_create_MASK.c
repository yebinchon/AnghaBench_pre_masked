
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5_hairpin_params {int num_channels; } ;
struct mlx5_hairpin {int num_channels; void* rqn; void* sqn; struct mlx5_core_dev* peer_mdev; struct mlx5_core_dev* func_mdev; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 struct mlx5_hairpin* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct mlx5_hairpin*) ;
 struct mlx5_hairpin* FUNC_2 (int,int ) ;
 int FUNC_3 (struct mlx5_hairpin*,struct mlx5_hairpin_params*) ;
 int FUNC_4 (struct mlx5_hairpin*) ;
 int FUNC_5 (struct mlx5_hairpin*) ;

struct mlx5_hairpin *
FUNC_6(struct mlx5_core_dev *VAR_2,
    struct mlx5_core_dev *VAR_3,
    struct mlx5_hairpin_params *VAR_4)
{
 struct mlx5_hairpin *VAR_5;
 int VAR_6, VAR_7;

 VAR_6 = sizeof(*VAR_5) + VAR_4->num_channels * 2 * sizeof(u32);
 VAR_5 = FUNC_2(VAR_6, VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 VAR_5->func_mdev = VAR_2;
 VAR_5->peer_mdev = VAR_3;
 VAR_5->num_channels = VAR_4->num_channels;

 VAR_5->rqn = (void *)VAR_5 + sizeof(*VAR_5);
 VAR_5->sqn = VAR_5->rqn + VAR_4->num_channels;


 VAR_7 = FUNC_3(VAR_5, VAR_4);
 if (VAR_7)
  goto err_create_queues;

 VAR_7 = FUNC_5(VAR_5);
 if (VAR_7)
  goto err_pair_queues;

 return VAR_5;

err_pair_queues:
 FUNC_4(VAR_5);
err_create_queues:
 FUNC_1(VAR_5);
 return FUNC_0(VAR_7);
}
