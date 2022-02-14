
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_6__ {scalar_t__ gvmi; } ;
struct TYPE_4__ {TYPE_3__ caps; } ;
struct mlx5dr_domain {scalar_t__ type; TYPE_1__ info; struct mlx5dr_domain* peer_dmn; } ;
struct mlx5dr_cmd_vport_cap {int dummy; } ;
struct TYPE_5__ {struct mlx5dr_cmd_vport_cap* caps; struct mlx5dr_domain* dmn; } ;
struct mlx5dr_action {TYPE_2__ vport; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct mlx5dr_action* FUNC_0 (int ) ;
 int FUNC_1 (struct mlx5dr_domain*,char*,...) ;
 struct mlx5dr_cmd_vport_cap* FUNC_2 (TYPE_3__*,int ) ;

struct mlx5dr_action *
FUNC_3(struct mlx5dr_domain *VAR_2,
    u32 VAR_3, u8 VAR_4,
    u16 VAR_5)
{
 struct mlx5dr_cmd_vport_cap *VAR_6;
 struct mlx5dr_domain *VAR_7;
 struct mlx5dr_action *VAR_8;
 u8 VAR_9;

 VAR_9 = VAR_4 && (VAR_5 != VAR_2->info.caps.gvmi);
 VAR_7 = VAR_9 ? VAR_2->peer_dmn : VAR_2;
 if (!VAR_7) {
  FUNC_1(VAR_2, "No peer vport domain for given vhca_id\n");
  return ((void*)0);
 }

 if (VAR_7->type != VAR_1) {
  FUNC_1(VAR_2, "Domain doesn't support vport actions\n");
  return ((void*)0);
 }

 VAR_6 = FUNC_2(&VAR_7->info.caps, VAR_3);
 if (!VAR_6) {
  FUNC_1(VAR_2, "Failed to get vport %d caps\n", VAR_3);
  return ((void*)0);
 }

 VAR_8 = FUNC_0(VAR_0);
 if (!VAR_8)
  return ((void*)0);

 VAR_8->vport.dmn = VAR_7;
 VAR_8->vport.caps = VAR_6;

 return VAR_8;
}
