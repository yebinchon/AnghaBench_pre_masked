
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct mlx5dr_ste_build {scalar_t__ vhca_id_valid; struct mlx5dr_domain* dmn; } ;
struct mlx5dr_match_misc {scalar_t__ source_eswitch_owner_vhca_id; scalar_t__ source_port; } ;
struct mlx5dr_match_param {struct mlx5dr_match_misc misc; } ;
struct mlx5dr_cmd_caps {scalar_t__ gvmi; } ;
struct TYPE_6__ {struct mlx5dr_cmd_caps caps; } ;
struct mlx5dr_domain {TYPE_3__ info; TYPE_2__* peer_dmn; } ;
struct mlx5dr_cmd_vport_cap {scalar_t__ vport_gvmi; } ;
struct dr_hw_ste_format {int * tag; } ;
struct TYPE_4__ {struct mlx5dr_cmd_caps caps; } ;
struct TYPE_5__ {TYPE_1__ info; } ;


 int FUNC_0 (int ,int *,int ,struct mlx5dr_match_misc*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int ,scalar_t__) ;
 struct mlx5dr_cmd_vport_cap* FUNC_2 (struct mlx5dr_cmd_caps*,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_3(struct mlx5dr_match_param *VAR_6,
      struct mlx5dr_ste_build *VAR_7,
      u8 *VAR_8)
{
 struct dr_hw_ste_format *VAR_9 = (struct dr_hw_ste_format *)VAR_8;
 struct mlx5dr_match_misc *VAR_10 = &VAR_6->misc;
 struct mlx5dr_cmd_vport_cap *VAR_11;
 struct mlx5dr_domain *VAR_12 = VAR_7->dmn;
 struct mlx5dr_cmd_caps *VAR_13;
 u8 *VAR_14 = VAR_9->tag;

 FUNC_0(VAR_4, VAR_14, VAR_2, VAR_10, VAR_3);

 if (VAR_7->vhca_id_valid) {

  if (VAR_10->source_eswitch_owner_vhca_id == VAR_12->info.caps.gvmi)
   VAR_13 = &VAR_12->info.caps;
  else if (VAR_12->peer_dmn && (VAR_10->source_eswitch_owner_vhca_id ==
        VAR_12->peer_dmn->info.caps.gvmi))
   VAR_13 = &VAR_12->peer_dmn->info.caps;
  else
   return -VAR_0;
 } else {
  VAR_13 = &VAR_12->info.caps;
 }

 VAR_11 = FUNC_2(VAR_13, VAR_10->source_port);
 if (!VAR_11)
  return -VAR_0;

 if (VAR_11->vport_gvmi)
  FUNC_1(VAR_5, VAR_14, VAR_1, VAR_11->vport_gvmi);

 VAR_10->source_eswitch_owner_vhca_id = 0;
 VAR_10->source_port = 0;

 return 0;
}
