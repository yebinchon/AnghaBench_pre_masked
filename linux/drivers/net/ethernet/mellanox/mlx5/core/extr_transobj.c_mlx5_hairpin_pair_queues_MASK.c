
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_hairpin {int num_channels; int * sqn; int peer_mdev; int * rqn; int func_mdev; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_3(struct mlx5_hairpin *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;


 for (VAR_6 = 0; VAR_6 < VAR_5->num_channels; VAR_6++) {
  VAR_8 = FUNC_2(VAR_5->peer_mdev, VAR_5->sqn[VAR_6],
          VAR_3, VAR_2,
          FUNC_0(VAR_5->func_mdev, VAR_4), VAR_5->rqn[VAR_6]);
  if (VAR_8)
   goto err_modify_sq;
 }


 for (VAR_6 = 0; VAR_6 < VAR_5->num_channels; VAR_6++) {
  VAR_8 = FUNC_1(VAR_5->func_mdev, VAR_5->rqn[VAR_6],
          VAR_1, VAR_0,
          FUNC_0(VAR_5->peer_mdev, VAR_4), VAR_5->sqn[VAR_6]);
  if (VAR_8)
   goto err_modify_rq;
 }

 return 0;

err_modify_rq:
 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
  FUNC_1(VAR_5->func_mdev, VAR_5->rqn[VAR_7], VAR_0,
           VAR_1, 0, 0);
 VAR_6 = VAR_5->num_channels;
err_modify_sq:
 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
  FUNC_2(VAR_5->peer_mdev, VAR_5->sqn[VAR_7], VAR_2,
           VAR_3, 0, 0);
 return VAR_8;
}
