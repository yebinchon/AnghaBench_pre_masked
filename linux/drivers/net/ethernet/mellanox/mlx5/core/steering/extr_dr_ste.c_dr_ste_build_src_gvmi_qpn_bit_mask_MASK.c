
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx5dr_match_misc {int source_port; int source_eswitch_owner_vhca_id; } ;
struct mlx5dr_match_param {struct mlx5dr_match_misc misc; } ;


 int FUNC_0 (int ,int *,int ,struct mlx5dr_match_misc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_1(struct mlx5dr_match_param *VAR_6,
           u8 *VAR_7)
{
 struct mlx5dr_match_misc *VAR_8 = &VAR_6->misc;


 if (VAR_8->source_port && VAR_8->source_port != 0xffff)
  return -VAR_0;


 if (VAR_8->source_eswitch_owner_vhca_id &&
     VAR_8->source_eswitch_owner_vhca_id != 0xffff)
  return -VAR_0;

 FUNC_0(VAR_5, VAR_7, VAR_1, VAR_8, VAR_2);
 FUNC_0(VAR_5, VAR_7, VAR_3, VAR_8, VAR_4);
 VAR_8->source_eswitch_owner_vhca_id = 0;

 return 0;
}
