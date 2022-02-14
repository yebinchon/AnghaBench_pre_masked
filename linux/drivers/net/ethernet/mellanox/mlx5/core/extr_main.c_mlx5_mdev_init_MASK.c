
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int list; int lock; } ;
struct TYPE_4__ {int list; int lock; } ;
struct TYPE_6__ {TYPE_2__ wc_head; TYPE_1__ reg_head; } ;
struct mlx5_priv {int dbg_root; int mkey_lock; int pgdir_list; int pgdir_mutex; int alloc_mutex; TYPE_3__ bfregs; int ctx_lock; int ctx_list; } ;
struct mlx5_core_dev {struct mlx5_priv priv; int device; int intf_state_mutex; int * profile; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (struct mlx5_core_dev*) ;
 int FUNC_6 (struct mlx5_core_dev*) ;
 int FUNC_7 (struct mlx5_core_dev*) ;
 int FUNC_8 (int *) ;
 int * VAR_2 ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct mlx5_core_dev *VAR_3, int VAR_4)
{
 struct mlx5_priv *VAR_5 = &VAR_3->priv;
 int VAR_6;

 VAR_3->profile = &VAR_2[VAR_4];

 FUNC_0(&VAR_5->ctx_list);
 FUNC_9(&VAR_5->ctx_lock);
 FUNC_8(&VAR_3->intf_state_mutex);

 FUNC_8(&VAR_5->bfregs.reg_head.lock);
 FUNC_8(&VAR_5->bfregs.wc_head.lock);
 FUNC_0(&VAR_5->bfregs.reg_head.list);
 FUNC_0(&VAR_5->bfregs.wc_head.list);

 FUNC_8(&VAR_5->alloc_mutex);
 FUNC_8(&VAR_5->pgdir_mutex);
 FUNC_0(&VAR_5->pgdir_list);
 FUNC_9(&VAR_5->mkey_lock);

 VAR_5->dbg_root = FUNC_1(FUNC_4(VAR_3->device),
         VAR_1);
 if (!VAR_5->dbg_root) {
  FUNC_3(VAR_3->device, "mlx5_core: error, Cannot create debugfs dir, aborting\n");
  return -VAR_0;
 }

 VAR_6 = FUNC_6(VAR_3);
 if (VAR_6)
  goto err_health_init;

 VAR_6 = FUNC_7(VAR_3);
 if (VAR_6)
  goto err_pagealloc_init;

 return 0;

err_pagealloc_init:
 FUNC_5(VAR_3);
err_health_init:
 FUNC_2(VAR_3->priv.dbg_root);

 return VAR_6;
}
