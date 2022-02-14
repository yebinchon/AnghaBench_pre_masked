
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5dr_match_misc2 {scalar_t__ metadata_reg_c_3; scalar_t__ metadata_reg_c_2; scalar_t__ metadata_reg_c_1; scalar_t__ metadata_reg_c_0; } ;



__attribute__((used)) static bool FUNC_0(struct mlx5dr_match_misc2 *VAR_0)
{
 return (VAR_0->metadata_reg_c_0 || VAR_0->metadata_reg_c_1 ||
  VAR_0->metadata_reg_c_2 || VAR_0->metadata_reg_c_3);
}
