
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx5dr_match_misc3 {int outer_vxlan_gpe_flags; int outer_vxlan_gpe_next_protocol; int outer_vxlan_gpe_vni; } ;
struct mlx5dr_match_param {struct mlx5dr_match_misc3 misc3; } ;


 int FUNC_0 (int ,int *,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(struct mlx5dr_match_param *VAR_3,
        bool VAR_4, u8 *VAR_5)
{
 struct mlx5dr_match_misc3 *VAR_6 = &VAR_3->misc3;

 if (VAR_6->outer_vxlan_gpe_flags ||
     VAR_6->outer_vxlan_gpe_next_protocol) {
  FUNC_0(VAR_2, VAR_5,
    VAR_1,
    (VAR_6->outer_vxlan_gpe_flags << 24) |
    (VAR_6->outer_vxlan_gpe_next_protocol));
  VAR_6->outer_vxlan_gpe_flags = 0;
  VAR_6->outer_vxlan_gpe_next_protocol = 0;
 }

 if (VAR_6->outer_vxlan_gpe_vni) {
  FUNC_0(VAR_2, VAR_5,
    VAR_0,
    VAR_6->outer_vxlan_gpe_vni << 8);
  VAR_6->outer_vxlan_gpe_vni = 0;
 }
}
