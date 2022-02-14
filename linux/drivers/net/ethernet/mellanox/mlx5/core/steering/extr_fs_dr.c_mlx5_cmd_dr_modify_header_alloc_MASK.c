
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct mlx5dr_domain {int dummy; } ;
struct mlx5dr_action {int dummy; } ;
struct TYPE_4__ {struct mlx5dr_action* dr_action; } ;
struct mlx5_modify_hdr {TYPE_2__ action; } ;
struct TYPE_3__ {struct mlx5dr_domain* dr_domain; } ;
struct mlx5_flow_root_namespace {int dev; TYPE_1__ fs_dr_domain; } ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 struct mlx5dr_action* FUNC_2 (struct mlx5dr_domain*,int ,size_t,void*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct mlx5_flow_root_namespace *VAR_2,
        u8 VAR_3, u8 VAR_4,
        void *VAR_5,
        struct mlx5_modify_hdr *VAR_6)
{
 struct mlx5dr_domain *VAR_7 = VAR_2->fs_dr_domain.dr_domain;
 struct mlx5dr_action *VAR_8;
 size_t VAR_9;

 VAR_9 = FUNC_0(VAR_1) *
  VAR_4;
 VAR_8 = FUNC_2(VAR_7, 0,
          VAR_9,
          VAR_5);
 if (!VAR_8) {
  FUNC_1(VAR_2->dev, "Failed allocating modify-header action\n");
  return -VAR_0;
 }

 VAR_6->action.dr_action = VAR_8;

 return 0;
}
