
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5dr_domain {int dummy; } ;
struct mlx5dr_action {int dummy; } ;
struct TYPE_3__ {struct mlx5dr_action* dr_action; } ;
struct mlx5_pkt_reformat {TYPE_1__ action; } ;
struct TYPE_4__ {struct mlx5dr_domain* dr_domain; } ;
struct mlx5_flow_root_namespace {int dev; TYPE_2__ fs_dr_domain; } ;
typedef enum mlx5_flow_namespace_type { ____Placeholder_mlx5_flow_namespace_type } mlx5_flow_namespace_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





 int FUNC_0 (int ,char*,...) ;
 struct mlx5dr_action* FUNC_1 (struct mlx5dr_domain*,int,size_t,void*) ;

__attribute__((used)) static int FUNC_2(struct mlx5_flow_root_namespace *VAR_5,
          int VAR_6,
          size_t VAR_7,
          void *VAR_8,
          enum mlx5_flow_namespace_type VAR_9,
          struct mlx5_pkt_reformat *VAR_10)
{
 struct mlx5dr_domain *VAR_11 = VAR_5->fs_dr_domain.dr_domain;
 struct mlx5dr_action *VAR_12;
 int VAR_13;

 switch (VAR_6) {
 case 129:
 case 130:
 case 132:
  VAR_13 = VAR_0;
  break;
 case 128:
  VAR_13 = VAR_2;
  break;
 case 131:
  VAR_13 = VAR_1;
  break;
 default:
  FUNC_0(VAR_5->dev, "Packet-reformat not supported(%d)\n",
         VAR_6);
  return -VAR_4;
 }

 VAR_12 = FUNC_1(VAR_11,
            VAR_13,
            VAR_7,
            VAR_8);
 if (!VAR_12) {
  FUNC_0(VAR_5->dev, "Failed allocating packet-reformat action\n");
  return -VAR_3;
 }

 VAR_10->action.dr_action = VAR_12;

 return 0;
}
