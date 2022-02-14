
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int rqtn; } ;
struct mlx5e_priv {int rss_params; TYPE_1__ indir_rqt; } ;
typedef enum mlx5e_traffic_types { ____Placeholder_mlx5e_traffic_types } mlx5e_traffic_types ;


 int FUNC_0 (struct mlx5e_priv*,int ,int *) ;
 int FUNC_1 (int *,int *,int *,int) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_2(struct mlx5e_priv *VAR_1,
          enum mlx5e_traffic_types VAR_2,
          u32 *VAR_3)
{
 FUNC_0(VAR_1, VAR_1->indir_rqt.rqtn, VAR_3);
 FUNC_1(&VAR_1->rss_params,
           &VAR_0[VAR_2], VAR_3, 0);
}
