
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file_operations {int dummy; } ;
struct file {int dummy; } ;
struct debugfs_fsdata {struct file_operations const* real_fops; } ;
struct TYPE_2__ {struct debugfs_fsdata* d_fsdata; } ;


 unsigned long VAR_0 ;
 TYPE_1__* FUNC_0 (struct file const*) ;
 int FUNC_1 (int) ;

const struct file_operations *FUNC_2(const struct file *VAR_1)
{
 struct debugfs_fsdata *VAR_2 = FUNC_0(VAR_1)->d_fsdata;

 if ((unsigned long)VAR_2 & VAR_0) {




  FUNC_1(1);
  return ((void*)0);
 }

 return VAR_2->real_fops;
}
