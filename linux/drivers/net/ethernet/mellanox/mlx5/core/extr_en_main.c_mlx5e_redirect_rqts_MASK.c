
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int rqn; } ;
struct mlx5e_redirect_rqt_param {int is_rss; TYPE_1__ member_1; } ;
struct TYPE_8__ {int rqtn; scalar_t__ enabled; } ;
struct mlx5e_priv {int max_nch; TYPE_3__* direct_tir; TYPE_4__ indir_rqt; } ;
struct TYPE_6__ {int rqtn; int enabled; } ;
struct TYPE_7__ {TYPE_2__ rqt; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5e_priv*,int,struct mlx5e_redirect_rqt_param) ;
 int FUNC_1 (struct mlx5e_priv*,int ,int,struct mlx5e_redirect_rqt_param) ;

__attribute__((used)) static void FUNC_2(struct mlx5e_priv *VAR_1,
    struct mlx5e_redirect_rqt_param VAR_2)
{
 u32 VAR_3;
 int VAR_4;

 if (VAR_1->indir_rqt.enabled) {

  VAR_3 = VAR_1->indir_rqt.rqtn;
  FUNC_1(VAR_1, VAR_3, VAR_0, VAR_2);
 }

 for (VAR_4 = 0; VAR_4 < VAR_1->max_nch; VAR_4++) {
  struct mlx5e_redirect_rqt_param VAR_5 = {
   .is_rss = 0,
   {
    .rqn = FUNC_0(VAR_1, VAR_4, VAR_2)
   },
  };


  if (!VAR_1->direct_tir[VAR_4].rqt.enabled)
   continue;

  VAR_3 = VAR_1->direct_tir[VAR_4].rqt.rqtn;
  FUNC_1(VAR_1, VAR_3, 1, VAR_5);
 }
}
