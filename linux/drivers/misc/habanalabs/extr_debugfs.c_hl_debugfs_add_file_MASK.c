
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hl_fpriv {int debugfs_list; TYPE_1__* hdev; } ;
struct hl_dbg_device_entry {int file_mutex; int file_list; } ;
struct TYPE_2__ {struct hl_dbg_device_entry hl_debugfs; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct hl_fpriv *VAR_0)
{
 struct hl_dbg_device_entry *VAR_1 = &VAR_0->hdev->hl_debugfs;

 FUNC_1(&VAR_1->file_mutex);
 FUNC_0(&VAR_0->debugfs_list, &VAR_1->file_list);
 FUNC_2(&VAR_1->file_mutex);
}
