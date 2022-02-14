
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct fuse_conn {int ctl_ndents; struct dentry** ctl_dentry; } ;
struct dentry {int dummy; } ;
struct TYPE_5__ {int * i_private; } ;
struct TYPE_4__ {struct dentry* s_root; } ;


 TYPE_2__* FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_1__* VAR_0 ;

void FUNC_4(struct fuse_conn *VAR_1)
{
 int VAR_2;

 if (!VAR_0)
  return;

 for (VAR_2 = VAR_1->ctl_ndents - 1; VAR_2 >= 0; VAR_2--) {
  struct dentry *VAR_3 = VAR_1->ctl_dentry[VAR_2];
  FUNC_0(VAR_3)->i_private = ((void*)0);
  if (!VAR_2) {

   FUNC_1(VAR_3);
  }
  FUNC_2(VAR_3);
 }
 FUNC_3(FUNC_0(VAR_0->s_root));
}
