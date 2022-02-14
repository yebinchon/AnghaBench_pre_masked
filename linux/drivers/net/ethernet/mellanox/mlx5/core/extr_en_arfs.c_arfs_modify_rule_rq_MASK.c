
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct mlx5e_priv {int netdev; TYPE_1__* direct_tir; } ;
struct mlx5_flow_handle {int dummy; } ;
struct mlx5_flow_destination {int tir_num; int type; } ;
struct TYPE_2__ {int tirn; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_flow_handle*,struct mlx5_flow_destination*,int *) ;
 int FUNC_1 (int ,char*,size_t) ;

__attribute__((used)) static void FUNC_2(struct mlx5e_priv *VAR_1,
    struct mlx5_flow_handle *VAR_2, u16 VAR_3)
{
 struct mlx5_flow_destination VAR_4 = {};
 int VAR_5 = 0;

 VAR_4.type = VAR_0;
 VAR_4.tir_num = VAR_1->direct_tir[VAR_3].tirn;
 VAR_5 = FUNC_0(VAR_2, &VAR_4, ((void*)0));
 if (VAR_5)
  FUNC_1(VAR_1->netdev,
       "Failed to modify aRFS rule destination to rq=%d\n", VAR_3);
}
