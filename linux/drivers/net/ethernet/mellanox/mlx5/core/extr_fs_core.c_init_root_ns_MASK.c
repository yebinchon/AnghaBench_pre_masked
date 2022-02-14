
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mlx5_flow_steering {TYPE_2__* root_ns; } ;
struct TYPE_5__ {int node; } ;
struct TYPE_6__ {TYPE_1__ ns; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct mlx5_flow_steering*) ;
 TYPE_2__* FUNC_2 (struct mlx5_flow_steering*,int ) ;
 int FUNC_3 (struct mlx5_flow_steering*,int *,int *) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_5(struct mlx5_flow_steering *VAR_3)
{
 int VAR_4;

 VAR_3->root_ns = FUNC_2(VAR_3, VAR_1);
 if (!VAR_3->root_ns)
  return -VAR_0;

 VAR_4 = FUNC_3(VAR_3, &VAR_2, &VAR_3->root_ns->ns.node);
 if (VAR_4)
  goto out_err;

 FUNC_4(VAR_3->root_ns);
 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4)
  goto out_err;

 return 0;

out_err:
 FUNC_0(VAR_3->root_ns);
 VAR_3->root_ns = ((void*)0);
 return VAR_4;
}
