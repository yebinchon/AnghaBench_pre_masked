
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ xdp_prog; } ;
struct TYPE_4__ {TYPE_1__ params; } ;
struct mlx5e_priv {TYPE_2__ channels; } ;


 int FUNC_0 (struct mlx5e_priv*) ;
 int FUNC_1 (struct mlx5e_priv*) ;

__attribute__((used)) static int FUNC_2(struct mlx5e_priv *VAR_0)
{
 if (VAR_0->channels.params.xdp_prog)
  FUNC_1(VAR_0);
 else
  FUNC_0(VAR_0);

 return 0;
}
