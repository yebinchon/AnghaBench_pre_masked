
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hl_dbg_device_entry {int entry_arr; int file_mutex; int root; } ;
struct hl_device {struct hl_dbg_device_entry hl_debugfs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct hl_device *VAR_0)
{
 struct hl_dbg_device_entry *VAR_1 = &VAR_0->hl_debugfs;

 FUNC_0(VAR_1->root);

 FUNC_2(&VAR_1->file_mutex);
 FUNC_1(VAR_1->entry_arr);
}
