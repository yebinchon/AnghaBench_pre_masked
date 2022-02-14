
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5dr_match_misc {scalar_t__ gre_s_present; scalar_t__ gre_k_present; scalar_t__ gre_c_present; scalar_t__ gre_protocol; scalar_t__ gre_key_l; scalar_t__ gre_key_h; } ;



__attribute__((used)) static bool FUNC_0(struct mlx5dr_match_misc *VAR_0)
{
 return (VAR_0->gre_key_h || VAR_0->gre_key_l ||
  VAR_0->gre_protocol || VAR_0->gre_c_present ||
  VAR_0->gre_k_present || VAR_0->gre_s_present);
}
