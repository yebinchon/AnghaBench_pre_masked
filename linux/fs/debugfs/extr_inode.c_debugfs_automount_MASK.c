
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct path {TYPE_1__* dentry; } ;
typedef struct vfsmount* (* debugfs_automount_t ) (TYPE_1__*,int ) ;
struct TYPE_5__ {int i_private; } ;
struct TYPE_4__ {scalar_t__ d_fsdata; } ;


 TYPE_2__* FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static struct vfsmount *FUNC_1(struct path *VAR_0)
{
 debugfs_automount_t VAR_1;
 VAR_1 = (debugfs_automount_t)VAR_0->dentry->d_fsdata;
 return VAR_1(VAR_0->dentry, FUNC_0(VAR_0->dentry)->i_private);
}
