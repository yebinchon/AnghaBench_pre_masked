
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct dentry* dentry; } ;
struct file {TYPE_1__ f_path; } ;
struct dentry {int dummy; } ;



int FUNC_0(struct file *VAR_0, struct dentry *VAR_1)
{
 VAR_0->f_path.dentry = VAR_1;
 return 0;
}
