
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct fsnotify_group {int dummy; } ;
typedef int __u32 ;
typedef int __kernel_fsid_t ;
struct TYPE_2__ {int mnt_fsnotify_marks; } ;


 int VAR_0 ;
 int FUNC_0 (struct fsnotify_group*,int *,int ,int ,unsigned int,int *) ;
 TYPE_1__* FUNC_1 (struct vfsmount*) ;

__attribute__((used)) static int FUNC_2(struct fsnotify_group *VAR_1,
          struct vfsmount *VAR_2, __u32 VAR_3,
          unsigned int VAR_4, __kernel_fsid_t *VAR_5)
{
 return FUNC_0(VAR_1, &FUNC_1(VAR_2)->mnt_fsnotify_marks,
     VAR_0, VAR_3, VAR_4, VAR_5);
}
