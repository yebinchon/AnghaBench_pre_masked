
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_core_sriov {TYPE_1__* vfs_ctx; } ;
struct TYPE_4__ {int eswitch; struct mlx5_core_sriov sriov; } ;
struct mlx5_core_dev {TYPE_2__ priv; } ;
struct TYPE_3__ {int enabled; } ;


 scalar_t__ FUNC_0 (struct mlx5_core_dev*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mlx5_core_dev*) ;
 int FUNC_2 (struct mlx5_core_dev*,char*,int) ;
 int FUNC_3 (struct mlx5_core_dev*,int) ;
 int FUNC_4 (struct mlx5_core_dev*,char*,int,...) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int) ;
 int VAR_2 ;
 int FUNC_7 (struct mlx5_core_dev*,int) ;

__attribute__((used)) static int FUNC_8(struct mlx5_core_dev *VAR_3, int VAR_4)
{
 struct mlx5_core_sriov *VAR_5 = &VAR_3->priv.sriov;
 int VAR_6;
 int VAR_7;

 if (!FUNC_1(VAR_3))
  goto enable_vfs_hca;

 FUNC_6(VAR_3->priv.eswitch, VAR_4);
 VAR_6 = FUNC_5(VAR_3->priv.eswitch, VAR_1);
 if (VAR_6) {
  FUNC_4(VAR_3,
          "failed to enable eswitch SRIOV (%d)\n", VAR_6);
  return VAR_6;
 }

enable_vfs_hca:
 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  VAR_6 = FUNC_3(VAR_3, VAR_7 + 1);
  if (VAR_6) {
   FUNC_4(VAR_3, "failed to enable VF %d (%d)\n", VAR_7, VAR_6);
   continue;
  }
  VAR_5->vfs_ctx[VAR_7].enabled = 1;
  if (FUNC_0(VAR_3, VAR_2) == VAR_0) {
   VAR_6 = FUNC_7(VAR_3, VAR_7);
   if (VAR_6) {
    FUNC_4(VAR_3,
            "failed to restore VF %d settings, err %d\n",
            VAR_7, VAR_6);
    continue;
   }
  }
  FUNC_2(VAR_3, "successfully enabled VF* %d\n", VAR_7);
 }

 return 0;
}
