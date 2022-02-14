
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {void* d_fsdata; struct dentry* d_parent; } ;
struct TYPE_2__ {unsigned long ip_dir_lock_gen; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (struct dentry*) ;

void FUNC_3(struct dentry *VAR_0)
{
 unsigned long VAR_1 =
  FUNC_1(FUNC_2(VAR_0->d_parent))->ip_dir_lock_gen;
 FUNC_0(FUNC_2(VAR_0));
 VAR_0->d_fsdata = (void *)VAR_1;
}
