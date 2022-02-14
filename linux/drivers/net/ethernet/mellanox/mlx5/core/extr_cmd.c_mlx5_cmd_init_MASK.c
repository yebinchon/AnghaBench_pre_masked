
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct mlx5_cmd {int log_sz; int log_stride; int checksum_disabled; int max_reg_cmds; unsigned long bitmask; int cmdif_rev; int pool; int wq; int wq_name; int mode; scalar_t__ dma; int pages_sem; int sem; TYPE_2__* stats; int token_lock; int alloc_lock; } ;
struct mlx5_core_dev {TYPE_1__* iseg; int device; struct mlx5_cmd cmd; } ;
struct mlx5_cmd_prot_block {int dummy; } ;
struct TYPE_4__ {int lock; } ;
struct TYPE_3__ {int cmdq_addr_l_sz; int cmdq_addr_h; int cmdif_rev_fw_sub; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct mlx5_core_dev*,struct mlx5_cmd*) ;
 int FUNC_2 (struct mlx5_core_dev*) ;
 int FUNC_3 (struct mlx5_core_dev*) ;
 int FUNC_4 (struct mlx5_core_dev*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct mlx5_core_dev*) ;
 int FUNC_7 (char*,int ,int,int,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct mlx5_core_dev*,struct mlx5_cmd*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int,int *) ;
 int FUNC_12 (struct mlx5_cmd*,int ,int) ;
 int FUNC_13 (struct mlx5_core_dev*,char*,unsigned long long) ;
 int FUNC_14 (struct mlx5_core_dev*,char*,...) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int *,int) ;
 int FUNC_17 (struct mlx5_core_dev*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 () ;

int FUNC_20(struct mlx5_core_dev *VAR_7)
{
 int VAR_8 = sizeof(struct mlx5_cmd_prot_block);
 int VAR_9 = FUNC_15(VAR_8);
 struct mlx5_cmd *VAR_10 = &VAR_7->cmd;
 u32 VAR_11, VAR_12;
 u16 VAR_13;
 int VAR_14;
 int VAR_15;

 FUNC_12(VAR_10, 0, sizeof(*VAR_10));
 VAR_13 = FUNC_2(VAR_7);
 if (VAR_13 != VAR_0) {
  FUNC_14(VAR_7,
         "Driver cmdif rev(%d) differs from firmware's(%d)\n",
         VAR_0, VAR_13);
  return -VAR_2;
 }

 VAR_10->pool = FUNC_7("mlx5_cmd", VAR_7->device, VAR_8, VAR_9, 0);
 if (!VAR_10->pool)
  return -VAR_3;

 VAR_14 = FUNC_1(VAR_7, VAR_10);
 if (VAR_14)
  goto err_free_pool;

 VAR_12 = FUNC_10(&VAR_7->iseg->cmdq_addr_l_sz) & 0xff;
 VAR_10->log_sz = VAR_12 >> 4 & 0xf;
 VAR_10->log_stride = VAR_12 & 0xf;
 if (1 << VAR_10->log_sz > VAR_6) {
  FUNC_14(VAR_7, "firmware reports too many outstanding commands %d\n",
         1 << VAR_10->log_sz);
  VAR_14 = -VAR_2;
  goto err_free_page;
 }

 if (VAR_10->log_sz + VAR_10->log_stride > VAR_5) {
  FUNC_14(VAR_7, "command queue size overflow\n");
  VAR_14 = -VAR_2;
  goto err_free_page;
 }

 VAR_10->checksum_disabled = 1;
 VAR_10->max_reg_cmds = (1 << VAR_10->log_sz) - 1;
 VAR_10->bitmask = (1UL << VAR_10->max_reg_cmds) - 1;

 VAR_10->cmdif_rev = FUNC_10(&VAR_7->iseg->cmdif_rev_fw_sub) >> 16;
 if (VAR_10->cmdif_rev > VAR_0) {
  FUNC_14(VAR_7, "driver does not support command interface version. driver %d, firmware %d\n",
         VAR_0, VAR_10->cmdif_rev);
  VAR_14 = -VAR_4;
  goto err_free_page;
 }

 FUNC_18(&VAR_10->alloc_lock);
 FUNC_18(&VAR_10->token_lock);
 for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_10->stats); VAR_15++)
  FUNC_18(&VAR_10->stats[VAR_15].lock);

 FUNC_16(&VAR_10->sem, VAR_10->max_reg_cmds);
 FUNC_16(&VAR_10->pages_sem, 1);

 VAR_11 = (u32)((u64)(VAR_10->dma) >> 32);
 VAR_12 = (u32)(VAR_10->dma);
 if (VAR_12 & 0xfff) {
  FUNC_14(VAR_7, "invalid command queue address\n");
  VAR_14 = -VAR_3;
  goto err_free_page;
 }

 FUNC_11(VAR_11, &VAR_7->iseg->cmdq_addr_h);
 FUNC_11(VAR_12, &VAR_7->iseg->cmdq_addr_l_sz);


 FUNC_19();

 FUNC_13(VAR_7, "descriptor at dma 0x%llx\n", (unsigned long long)(VAR_10->dma));

 VAR_10->mode = VAR_1;

 FUNC_4(VAR_7);

 FUNC_17(VAR_7);
 VAR_10->wq = FUNC_5(VAR_10->wq_name);
 if (!VAR_10->wq) {
  FUNC_14(VAR_7, "failed to create command workqueue\n");
  VAR_14 = -VAR_3;
  goto err_cache;
 }

 FUNC_3(VAR_7);

 return 0;

err_cache:
 FUNC_6(VAR_7);

err_free_page:
 FUNC_9(VAR_7, VAR_10);

err_free_pool:
 FUNC_8(VAR_10->pool);

 return VAR_14;
}
