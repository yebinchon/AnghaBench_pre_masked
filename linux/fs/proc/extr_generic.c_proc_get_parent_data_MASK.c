
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proc_dir_entry {TYPE_1__* parent; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {void* data; } ;


 struct proc_dir_entry* FUNC_0 (struct inode const*) ;

void *FUNC_1(const struct inode *VAR_0)
{
 struct proc_dir_entry *VAR_1 = FUNC_0(VAR_0);
 return VAR_1->parent->data;
}
