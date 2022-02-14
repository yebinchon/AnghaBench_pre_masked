
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int rqn; } ;
struct mlx5e_redirect_rqt_param {int is_rss; TYPE_2__ member_1; } ;
struct TYPE_3__ {int rqn; } ;
struct mlx5e_priv {TYPE_1__ drop_rq; } ;


 int FUNC_0 (struct mlx5e_priv*,struct mlx5e_redirect_rqt_param) ;

__attribute__((used)) static void FUNC_1(struct mlx5e_priv *VAR_0)
{
 struct mlx5e_redirect_rqt_param VAR_1 = {
  .is_rss = 0,
  {
   .rqn = VAR_0->drop_rq.rqn,
  },
 };

 FUNC_0(VAR_0, VAR_1);
}
