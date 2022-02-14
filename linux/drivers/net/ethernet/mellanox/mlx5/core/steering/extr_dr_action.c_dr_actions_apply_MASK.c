
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mlx5dr_domain {int dummy; } ;
struct dr_action_apply_attr {int final_icm_addr; int hit_gvmi; } ;
typedef enum mlx5dr_ste_entry_type { ____Placeholder_mlx5dr_ste_entry_type } mlx5dr_ste_entry_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,struct dr_action_apply_attr*,int*) ;
 int FUNC_1 (struct mlx5dr_domain*,int *,int *,struct dr_action_apply_attr*,int*) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(struct mlx5dr_domain *VAR_2,
        enum mlx5dr_ste_entry_type VAR_3,
        u8 *VAR_4,
        u8 *VAR_5,
        struct dr_action_apply_attr *VAR_6,
        u32 *VAR_7)
{
 u32 VAR_8 = 0;

 if (VAR_3 == VAR_1)
  FUNC_0(VAR_4, VAR_5, VAR_6, &VAR_8);
 else
  FUNC_1(VAR_2, VAR_4, VAR_5, VAR_6, &VAR_8);

 VAR_5 += VAR_8 * VAR_0;
 *VAR_7 += VAR_8;

 FUNC_3(VAR_5, VAR_6->hit_gvmi);
 FUNC_2(VAR_5, VAR_6->final_icm_addr, 1);
}
