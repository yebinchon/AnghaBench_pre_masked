
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * mnt; } ;
struct TYPE_6__ {struct dentry* dentry; } ;
struct nameidata {int flags; TYPE_1__ root; TYPE_3__ path; } ;
struct dentry {int d_flags; TYPE_2__* d_op; } ;
struct TYPE_5__ {int (* d_weak_revalidate ) (struct dentry*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct dentry*,int) ;
 int FUNC_2 (struct nameidata*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct nameidata *VAR_6)
{
 struct dentry *VAR_7 = VAR_6->path.dentry;
 int VAR_8;

 if (VAR_6->flags & VAR_4) {
  if (!(VAR_6->flags & VAR_5))
   VAR_6->root.mnt = ((void*)0);
  if (FUNC_3(FUNC_2(VAR_6)))
   return -VAR_1;
 }

 if (FUNC_0(!(VAR_6->flags & VAR_3)))
  return 0;

 if (FUNC_0(!(VAR_7->d_flags & VAR_0)))
  return 0;

 VAR_8 = VAR_7->d_op->d_weak_revalidate(VAR_7, VAR_6->flags);
 if (VAR_8 > 0)
  return 0;

 if (!VAR_8)
  VAR_8 = -VAR_2;

 return VAR_8;
}
