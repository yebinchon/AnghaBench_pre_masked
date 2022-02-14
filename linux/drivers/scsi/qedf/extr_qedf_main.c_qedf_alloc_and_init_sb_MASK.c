
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct status_block_e4 {int dummy; } ;
struct qedf_ctx {int dbg_ctx; int cdev; TYPE_2__* pdev; } ;
struct qed_sb_info {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_6__ {TYPE_1__* common; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {int (* sb_init ) (int ,struct qed_sb_info*,struct status_block_e4*,int ,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int,...) ;
 int VAR_2 ;
 struct status_block_e4* FUNC_1 (int *,int,int *,int ) ;
 TYPE_3__* VAR_3 ;
 int FUNC_2 (int ,struct qed_sb_info*,struct status_block_e4*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct qedf_ctx *VAR_4,
 struct qed_sb_info *VAR_5, u16 VAR_6)
{
 struct status_block_e4 *VAR_7;
 dma_addr_t VAR_8;
 int VAR_9;

 VAR_7 = FUNC_1(&VAR_4->pdev->dev,
     sizeof(struct status_block_e4), &VAR_8, VAR_1);

 if (!VAR_7) {
  FUNC_0(&VAR_4->dbg_ctx,
    "Status block allocation failed for id = %d.\n",
    VAR_6);
  return -VAR_0;
 }

 VAR_9 = VAR_3->common->sb_init(VAR_4->cdev, VAR_5, VAR_7, VAR_8,
     VAR_6, VAR_2);

 if (VAR_9) {
  FUNC_0(&VAR_4->dbg_ctx,
    "Status block initialization failed (0x%x) for id = %d.\n",
    VAR_9, VAR_6);
  return VAR_9;
 }

 return 0;
}
