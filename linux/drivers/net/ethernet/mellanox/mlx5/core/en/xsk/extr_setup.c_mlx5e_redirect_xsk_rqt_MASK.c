
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct TYPE_4__ {int rqn; } ;
struct mlx5e_redirect_rqt_param {int is_rss; TYPE_1__ member_1; } ;
struct mlx5e_priv {TYPE_3__* xsk_tir; } ;
struct TYPE_5__ {int rqtn; } ;
struct TYPE_6__ {TYPE_2__ rqt; } ;


 int FUNC_0 (struct mlx5e_priv*,int ,int,struct mlx5e_redirect_rqt_param) ;

__attribute__((used)) static int FUNC_1(struct mlx5e_priv *VAR_0, u16 VAR_1, u32 VAR_2)
{
 struct mlx5e_redirect_rqt_param VAR_3 = {
  .is_rss = 0,
  {
   .rqn = VAR_2,
  },
 };

 u32 VAR_4 = VAR_0->xsk_tir[VAR_1].rqt.rqtn;

 return FUNC_0(VAR_0, VAR_4, 1, VAR_3);
}
