
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hl_dbg_device_entry {int cs_spinlock; } ;
struct hl_cs {int debugfs_list; TYPE_2__* ctx; } ;
struct TYPE_4__ {TYPE_1__* hdev; } ;
struct TYPE_3__ {struct hl_dbg_device_entry hl_debugfs; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct hl_cs *VAR_0)
{
 struct hl_dbg_device_entry *VAR_1 = &VAR_0->ctx->hdev->hl_debugfs;

 FUNC_1(&VAR_1->cs_spinlock);
 FUNC_0(&VAR_0->debugfs_list);
 FUNC_2(&VAR_1->cs_spinlock);
}
