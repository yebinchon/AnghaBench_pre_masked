
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct hl_debugfs_entry* private; } ;
struct hl_device {TYPE_1__* asic_funcs; } ;
struct hl_debugfs_entry {struct hl_dbg_device_entry* dev_entry; } ;
struct hl_dbg_device_entry {struct hl_device* hdev; } ;
struct TYPE_2__ {int (* is_device_idle ) (struct hl_device*,int *,struct seq_file*) ;} ;


 int FUNC_0 (struct hl_device*,int *,struct seq_file*) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 struct hl_debugfs_entry *VAR_2 = VAR_0->private;
 struct hl_dbg_device_entry *VAR_3 = VAR_2->dev_entry;
 struct hl_device *VAR_4 = VAR_3->hdev;

 VAR_4->asic_funcs->is_device_idle(VAR_4, ((void*)0), VAR_0);

 return 0;
}
