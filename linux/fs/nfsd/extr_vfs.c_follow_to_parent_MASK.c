
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct path {struct dentry* dentry; TYPE_1__* mnt; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {struct dentry* mnt_root; } ;


 struct dentry* FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 scalar_t__ FUNC_2 (struct path*) ;

__attribute__((used)) static void FUNC_3(struct path *VAR_0)
{
 struct dentry *VAR_1;

 while (VAR_0->dentry == VAR_0->mnt->mnt_root && FUNC_2(VAR_0))
  ;
 VAR_1 = FUNC_0(VAR_0->dentry);
 FUNC_1(VAR_0->dentry);
 VAR_0->dentry = VAR_1;
}
