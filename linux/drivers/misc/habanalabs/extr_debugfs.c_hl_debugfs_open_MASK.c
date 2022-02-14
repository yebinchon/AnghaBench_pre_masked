
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {struct hl_debugfs_entry* i_private; } ;
struct hl_debugfs_entry {TYPE_1__* info_ent; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int show; } ;


 int FUNC_0 (struct file*,int ,struct hl_debugfs_entry*) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_0, struct file *VAR_1)
{
 struct hl_debugfs_entry *VAR_2 = VAR_0->i_private;

 return FUNC_0(VAR_1, VAR_2->info_ent->show, VAR_2);
}
