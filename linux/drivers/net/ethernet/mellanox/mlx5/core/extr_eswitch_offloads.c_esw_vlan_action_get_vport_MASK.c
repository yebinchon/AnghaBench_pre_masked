
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_eswitch_rep {int dummy; } ;
struct mlx5_esw_flow_attr {TYPE_1__* dests; struct mlx5_eswitch_rep* in_rep; } ;
struct TYPE_2__ {struct mlx5_eswitch_rep* rep; } ;



__attribute__((used)) static struct mlx5_eswitch_rep *
FUNC_0(struct mlx5_esw_flow_attr *VAR_0, bool VAR_1, bool VAR_2)
{
 struct mlx5_eswitch_rep *VAR_3, *VAR_4, *VAR_5 = ((void*)0);

 VAR_3 = VAR_0->in_rep;
 VAR_4 = VAR_0->dests[0].rep;

 if (VAR_1)
  VAR_5 = VAR_3;
 else if (VAR_2)
  VAR_5 = VAR_4;
 else
  VAR_5 = VAR_3;

 return VAR_5;
}
