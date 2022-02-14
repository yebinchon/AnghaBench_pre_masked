
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ tx_min_inline_mode; } ;
struct TYPE_3__ {TYPE_2__ params; } ;
struct mlx5e_priv {int state_lock; TYPE_1__ channels; int state; } ;
struct mlx5e_channels {TYPE_2__ params; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5e_priv*,struct mlx5e_channels*,int *) ;
 int FUNC_1 (struct mlx5e_priv*,TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct mlx5e_priv *VAR_1)
{
 struct mlx5e_channels VAR_2 = {};

 FUNC_2(&VAR_1->state_lock);

 VAR_2.params = VAR_1->channels.params;
 FUNC_1(VAR_1, &VAR_2.params);

 if (!FUNC_4(VAR_0, &VAR_1->state)) {
  VAR_1->channels.params = VAR_2.params;
  goto out;
 }


 if (VAR_2.params.tx_min_inline_mode ==
     VAR_1->channels.params.tx_min_inline_mode)
  goto out;

 FUNC_0(VAR_1, &VAR_2, ((void*)0));

out:
 FUNC_3(&VAR_1->state_lock);
}
