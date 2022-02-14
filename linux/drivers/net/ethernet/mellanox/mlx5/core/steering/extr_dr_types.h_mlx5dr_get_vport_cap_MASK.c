
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct mlx5dr_cmd_vport_cap {int dummy; } ;
struct mlx5dr_cmd_caps {size_t num_vports; struct mlx5dr_cmd_vport_cap* vports_caps; } ;


 size_t VAR_0 ;

__attribute__((used)) static inline struct mlx5dr_cmd_vport_cap *
FUNC_0(struct mlx5dr_cmd_caps *VAR_1, u32 VAR_2)
{
 if (!VAR_1->vports_caps ||
     (VAR_2 >= VAR_1->num_vports && VAR_2 != VAR_0))
  return ((void*)0);

 if (VAR_2 == VAR_0)
  VAR_2 = VAR_1->num_vports;

 return &VAR_1->vports_caps[VAR_2];
}
