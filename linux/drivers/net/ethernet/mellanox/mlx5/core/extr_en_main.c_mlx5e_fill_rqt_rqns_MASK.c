
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_10__ {scalar_t__ hfunc; TYPE_4__* channels; } ;
struct mlx5e_redirect_rqt_param {int rqn; TYPE_5__ rss; scalar_t__ is_rss; } ;
struct TYPE_6__ {int* indirection_rqt; } ;
struct mlx5e_priv {TYPE_1__ rss_params; } ;
struct TYPE_9__ {TYPE_3__** c; } ;
struct TYPE_7__ {int rqn; } ;
struct TYPE_8__ {TYPE_2__ rq; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (void*,void*,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_3(struct mlx5e_priv *VAR_2, int VAR_3,
    struct mlx5e_redirect_rqt_param VAR_4, void *VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  u32 VAR_7;

  if (VAR_4.is_rss) {
   int VAR_8 = VAR_6;

   if (VAR_4.rss.hfunc == VAR_0)
    VAR_8 = FUNC_2(VAR_6, FUNC_1(VAR_3));

   VAR_8 = VAR_2->rss_params.indirection_rqt[VAR_8];
   VAR_7 = VAR_4.rss.channels->c[VAR_8]->rq.rqn;
  } else {
   VAR_7 = VAR_4.rqn;
  }
  FUNC_0(VAR_5, VAR_5, VAR_1[VAR_6], VAR_7);
 }
}
