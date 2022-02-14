
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hl_userptr {int debugfs_list; } ;
struct hl_dbg_device_entry {int userptr_spinlock; int userptr_list; } ;
struct hl_device {struct hl_dbg_device_entry hl_debugfs; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct hl_device *VAR_0, struct hl_userptr *VAR_1)
{
 struct hl_dbg_device_entry *VAR_2 = &VAR_0->hl_debugfs;

 FUNC_1(&VAR_2->userptr_spinlock);
 FUNC_0(&VAR_1->debugfs_list, &VAR_2->userptr_list);
 FUNC_2(&VAR_2->userptr_spinlock);
}
