
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5e_priv {int max_nch; int** channel_tc2txq; TYPE_1__* profile; } ;
struct TYPE_2__ {int max_tc; } ;



__attribute__((used)) static void FUNC_0(struct mlx5e_priv *VAR_0)
{
 int VAR_1, VAR_2;

 for (VAR_1 = 0; VAR_1 < VAR_0->max_nch; VAR_1++)
  for (VAR_2 = 0; VAR_2 < VAR_0->profile->max_tc; VAR_2++)
   VAR_0->channel_tc2txq[VAR_1][VAR_2] = VAR_1 + VAR_2 * VAR_0->max_nch;
}
