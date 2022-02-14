
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5dr_domain {int dummy; } ;
struct TYPE_2__ {struct mlx5dr_domain* dr_domain; } ;
struct mlx5_flow_root_namespace {TYPE_1__ fs_dr_domain; } ;


 int FUNC_0 (struct mlx5dr_domain*,struct mlx5dr_domain*) ;

__attribute__((used)) static int FUNC_1(struct mlx5_flow_root_namespace *VAR_0,
    struct mlx5_flow_root_namespace *VAR_1)
{
 struct mlx5dr_domain *VAR_2 = ((void*)0);

 if (VAR_1)
  VAR_2 = VAR_1->fs_dr_domain.dr_domain;
 FUNC_0(VAR_0->fs_dr_domain.dr_domain,
          VAR_2);
 return 0;
}
