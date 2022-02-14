
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct TYPE_3__ {int ** active_cvlans_rule; int ** active_svlans_rule; int * any_svlan_rule; int * any_cvlan_rule; int * untagged_rule; } ;
struct TYPE_4__ {TYPE_1__ vlan; } ;
struct mlx5e_priv {TYPE_2__ fs; } ;
typedef enum mlx5e_vlan_rule_type { ____Placeholder_mlx5e_vlan_rule_type } mlx5e_vlan_rule_type ;







 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlx5e_priv*) ;

__attribute__((used)) static void FUNC_2(struct mlx5e_priv *VAR_0,
    enum mlx5e_vlan_rule_type VAR_1, u16 VAR_2)
{
 switch (VAR_1) {
 case 128:
  if (VAR_0->fs.vlan.untagged_rule) {
   FUNC_0(VAR_0->fs.vlan.untagged_rule);
   VAR_0->fs.vlan.untagged_rule = ((void*)0);
  }
  break;
 case 132:
  if (VAR_0->fs.vlan.any_cvlan_rule) {
   FUNC_0(VAR_0->fs.vlan.any_cvlan_rule);
   VAR_0->fs.vlan.any_cvlan_rule = ((void*)0);
  }
  break;
 case 131:
  if (VAR_0->fs.vlan.any_svlan_rule) {
   FUNC_0(VAR_0->fs.vlan.any_svlan_rule);
   VAR_0->fs.vlan.any_svlan_rule = ((void*)0);
  }
  break;
 case 129:
  if (VAR_0->fs.vlan.active_svlans_rule[VAR_2]) {
   FUNC_0(VAR_0->fs.vlan.active_svlans_rule[VAR_2]);
   VAR_0->fs.vlan.active_svlans_rule[VAR_2] = ((void*)0);
  }
  break;
 case 130:
  if (VAR_0->fs.vlan.active_cvlans_rule[VAR_2]) {
   FUNC_0(VAR_0->fs.vlan.active_cvlans_rule[VAR_2]);
   VAR_0->fs.vlan.active_cvlans_rule[VAR_2] = ((void*)0);
  }
  FUNC_1(VAR_0);
  break;
 }
}
