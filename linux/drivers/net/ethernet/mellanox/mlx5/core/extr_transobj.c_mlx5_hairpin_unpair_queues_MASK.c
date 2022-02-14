
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_hairpin {int num_channels; int * sqn; int peer_mdev; scalar_t__ peer_gone; int * rqn; int func_mdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct mlx5_hairpin *VAR_4)
{
 int VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_4->num_channels; VAR_5++)
  FUNC_0(VAR_4->func_mdev, VAR_4->rqn[VAR_5], VAR_0,
           VAR_1, 0, 0);


 if (VAR_4->peer_gone)
  return;
 for (VAR_5 = 0; VAR_5 < VAR_4->num_channels; VAR_5++)
  FUNC_1(VAR_4->peer_mdev, VAR_4->sqn[VAR_5], VAR_2,
           VAR_3, 0, 0);
}
