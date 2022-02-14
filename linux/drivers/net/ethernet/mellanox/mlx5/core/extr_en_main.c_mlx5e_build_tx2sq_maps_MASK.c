
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5e_txqsq {size_t txq_ix; } ;
struct TYPE_2__ {int num; struct mlx5e_channel** c; } ;
struct mlx5e_priv {struct mlx5e_txqsq** txq2sq; TYPE_1__ channels; } ;
struct mlx5e_channel {int num_tc; struct mlx5e_txqsq* sq; } ;



__attribute__((used)) static void FUNC_0(struct mlx5e_priv *VAR_0)
{
 struct mlx5e_channel *VAR_1;
 struct mlx5e_txqsq *VAR_2;
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_0->channels.num; VAR_3++) {
  VAR_1 = VAR_0->channels.c[VAR_3];
  for (VAR_4 = 0; VAR_4 < VAR_1->num_tc; VAR_4++) {
   VAR_2 = &VAR_1->sq[VAR_4];
   VAR_0->txq2sq[VAR_2->txq_ix] = VAR_2;
  }
 }
}
