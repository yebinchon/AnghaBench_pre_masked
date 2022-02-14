
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5e_tc_flow {TYPE_1__* mh; int mod_hdr; } ;
struct mlx5e_priv {int dummy; } ;
struct TYPE_2__ {int flows_lock; } ;


 int FUNC_0 (struct mlx5e_tc_flow*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mlx5e_priv*,TYPE_1__*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct mlx5e_priv *VAR_0,
     struct mlx5e_tc_flow *VAR_1)
{

 if (!VAR_1->mh)
  return;

 FUNC_3(&VAR_1->mh->flows_lock);
 FUNC_1(&VAR_1->mod_hdr);
 FUNC_4(&VAR_1->mh->flows_lock);

 FUNC_2(VAR_0, VAR_1->mh, FUNC_0(VAR_1));
 VAR_1->mh = ((void*)0);
}
