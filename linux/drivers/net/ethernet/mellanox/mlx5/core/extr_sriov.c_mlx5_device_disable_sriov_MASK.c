
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_core_sriov {TYPE_1__* vfs_ctx; } ;
struct TYPE_4__ {int vfs_pages; int eswitch; struct mlx5_core_sriov sriov; } ;
struct mlx5_core_dev {TYPE_2__ priv; int pdev; } ;
struct TYPE_3__ {scalar_t__ enabled; } ;


 scalar_t__ FUNC_0 (struct mlx5_core_dev*) ;
 int FUNC_1 (struct mlx5_core_dev*,int) ;
 int FUNC_2 (struct mlx5_core_dev*,char*,...) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct mlx5_core_dev*,int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct mlx5_core_dev *VAR_0)
{
 struct mlx5_core_sriov *VAR_1 = &VAR_0->priv.sriov;
 int VAR_2 = FUNC_5(VAR_0->pdev);
 int VAR_3;
 int VAR_4;

 for (VAR_4 = VAR_2 - 1; VAR_4 >= 0; VAR_4--) {
  if (!VAR_1->vfs_ctx[VAR_4].enabled)
   continue;
  VAR_3 = FUNC_1(VAR_0, VAR_4 + 1);
  if (VAR_3) {
   FUNC_2(VAR_0, "failed to disable VF %d\n", VAR_4);
   continue;
  }
  VAR_1->vfs_ctx[VAR_4].enabled = 0;
 }

 if (FUNC_0(VAR_0))
  FUNC_3(VAR_0->priv.eswitch);

 if (FUNC_4(VAR_0, &VAR_0->priv.vfs_pages))
  FUNC_2(VAR_0, "timeout reclaiming VFs pages\n");
}
