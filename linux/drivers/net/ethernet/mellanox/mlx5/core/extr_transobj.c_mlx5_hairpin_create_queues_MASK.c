
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_hairpin_params {int dummy; } ;
struct mlx5_hairpin {int num_channels; int * rqn; int func_mdev; int * sqn; int peer_mdev; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,struct mlx5_hairpin_params*,int *) ;
 int FUNC_3 (int ,struct mlx5_hairpin_params*,int *) ;

__attribute__((used)) static int FUNC_4(struct mlx5_hairpin *VAR_0,
          struct mlx5_hairpin_params *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_channels; VAR_2++) {
  VAR_4 = FUNC_2(VAR_0->func_mdev, VAR_1, &VAR_0->rqn[VAR_2]);
  if (VAR_4)
   goto out_err_rq;
 }

 for (VAR_2 = 0; VAR_2 < VAR_0->num_channels; VAR_2++) {
  VAR_4 = FUNC_3(VAR_0->peer_mdev, VAR_1, &VAR_0->sqn[VAR_2]);
  if (VAR_4)
   goto out_err_sq;
 }

 return 0;

out_err_sq:
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  FUNC_1(VAR_0->peer_mdev, VAR_0->sqn[VAR_3]);
 VAR_2 = VAR_0->num_channels;
out_err_rq:
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  FUNC_0(VAR_0->func_mdev, VAR_0->rqn[VAR_3]);
 return VAR_4;
}
