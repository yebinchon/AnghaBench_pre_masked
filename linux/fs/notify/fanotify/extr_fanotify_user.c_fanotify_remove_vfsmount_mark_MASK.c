
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct fsnotify_group {int dummy; } ;
typedef int __u32 ;
struct TYPE_2__ {int mnt_fsnotify_marks; } ;


 int FUNC_0 (struct fsnotify_group*,int *,int ,unsigned int) ;
 TYPE_1__* FUNC_1 (struct vfsmount*) ;

__attribute__((used)) static int FUNC_2(struct fsnotify_group *VAR_0,
      struct vfsmount *VAR_1, __u32 VAR_2,
      unsigned int VAR_3)
{
 return FUNC_0(VAR_0, &FUNC_1(VAR_1)->mnt_fsnotify_marks,
        VAR_2, VAR_3);
}
