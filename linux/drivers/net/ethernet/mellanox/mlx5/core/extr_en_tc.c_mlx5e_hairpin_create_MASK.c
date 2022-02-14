
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_priv {int netdev; struct mlx5_core_dev* mdev; } ;
struct mlx5e_hairpin {int num_channels; struct mlx5_hairpin* pair; struct mlx5e_priv* func_priv; struct mlx5_core_dev* func_mdev; } ;
struct mlx5_hairpin_params {int num_channels; } ;
struct mlx5_hairpin {int dummy; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 struct mlx5e_hairpin* FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct mlx5_hairpin*) ;
 int FUNC_2 (struct mlx5_hairpin*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mlx5e_hairpin*) ;
 struct mlx5e_hairpin* FUNC_5 (int,int ) ;
 struct mlx5_hairpin* FUNC_6 (struct mlx5_core_dev*,struct mlx5_core_dev*,struct mlx5_hairpin_params*) ;
 int FUNC_7 (struct mlx5_hairpin*) ;
 int FUNC_8 (struct mlx5e_hairpin*) ;
 int FUNC_9 (struct mlx5e_hairpin*) ;
 struct mlx5_core_dev* FUNC_10 (int ,int) ;
 int FUNC_11 (struct mlx5e_hairpin*) ;

__attribute__((used)) static struct mlx5e_hairpin *
FUNC_12(struct mlx5e_priv *VAR_2, struct mlx5_hairpin_params *VAR_3,
       int VAR_4)
{
 struct mlx5_core_dev *VAR_5, *VAR_6;
 struct mlx5e_hairpin *VAR_7;
 struct mlx5_hairpin *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_5(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 VAR_5 = VAR_2->mdev;
 VAR_6 = FUNC_10(FUNC_3(VAR_2->netdev), VAR_4);

 VAR_8 = FUNC_6(VAR_5, VAR_6, VAR_3);
 if (FUNC_1(VAR_8)) {
  VAR_9 = FUNC_2(VAR_8);
  goto create_pair_err;
 }
 VAR_7->pair = VAR_8;
 VAR_7->func_mdev = VAR_5;
 VAR_7->func_priv = VAR_2;
 VAR_7->num_channels = VAR_3->num_channels;

 VAR_9 = FUNC_8(VAR_7);
 if (VAR_9)
  goto create_transport_err;

 if (VAR_7->num_channels > 1) {
  VAR_9 = FUNC_11(VAR_7);
  if (VAR_9)
   goto rss_init_err;
 }

 return VAR_7;

rss_init_err:
 FUNC_9(VAR_7);
create_transport_err:
 FUNC_7(VAR_7->pair);
create_pair_err:
 FUNC_4(VAR_7);
 return FUNC_0(VAR_9);
}
