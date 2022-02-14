
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5dr_match_misc3 {scalar_t__ outer_vxlan_gpe_flags; scalar_t__ outer_vxlan_gpe_next_protocol; scalar_t__ outer_vxlan_gpe_vni; } ;



__attribute__((used)) static bool FUNC_0(struct mlx5dr_match_misc3 *VAR_0)
{
 return (VAR_0->outer_vxlan_gpe_vni ||
  VAR_0->outer_vxlan_gpe_next_protocol ||
  VAR_0->outer_vxlan_gpe_flags);
}
