
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_hairpin {int num_channels; int * sqn; int peer_mdev; int peer_gone; int * rqn; int func_mdev; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct mlx5_hairpin *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_channels; VAR_1++) {
  FUNC_0(VAR_0->func_mdev, VAR_0->rqn[VAR_1]);
  if (!VAR_0->peer_gone)
   FUNC_1(VAR_0->peer_mdev, VAR_0->sqn[VAR_1]);
 }
}
