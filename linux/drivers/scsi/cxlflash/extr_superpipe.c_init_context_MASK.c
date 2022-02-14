
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct file {int dummy; } ;
struct cxlflash_cfg {struct afu* afu; } ;
struct ctx_info {int initialized; int list; int luns; int kref; int mutex; struct file* file; struct cxlflash_cfg* cfg; void* ctx; int pid; int irqs; int ctxid; int * ctrl_map; int rht_perms; } ;
struct afu {TYPE_2__* afu_map; } ;
struct TYPE_4__ {TYPE_1__* ctrls; } ;
struct TYPE_3__ {int ctrl; } ;


 int FUNC_0 (struct ctx_info*,int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct ctx_info *VAR_1, struct cxlflash_cfg *VAR_2,
    void *VAR_3, int VAR_4, struct file *VAR_5, u32 VAR_6,
    u64 VAR_7)
{
 struct afu *VAR_8 = VAR_2->afu;

 VAR_1->rht_perms = VAR_6;
 VAR_1->ctrl_map = &VAR_8->afu_map->ctrls[VAR_4].ctrl;
 VAR_1->ctxid = FUNC_0(VAR_1, VAR_4);
 VAR_1->irqs = VAR_7;
 VAR_1->pid = FUNC_4(VAR_0);
 VAR_1->ctx = VAR_3;
 VAR_1->cfg = VAR_2;
 VAR_1->file = VAR_5;
 VAR_1->initialized = 1;
 FUNC_3(&VAR_1->mutex);
 FUNC_2(&VAR_1->kref);
 FUNC_1(&VAR_1->luns);
 FUNC_1(&VAR_1->list);
}
