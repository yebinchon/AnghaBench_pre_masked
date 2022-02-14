
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dr_domain; } ;
struct mlx5_flow_root_namespace {int dev; TYPE_1__ fs_dr_domain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct mlx5_flow_root_namespace *VAR_2)
{
 VAR_2->fs_dr_domain.dr_domain =
  FUNC_1(VAR_2->dev,
         VAR_1);
 if (!VAR_2->fs_dr_domain.dr_domain) {
  FUNC_0(VAR_2->dev, "Failed to create dr flow namespace\n");
  return -VAR_0;
 }
 return 0;
}
