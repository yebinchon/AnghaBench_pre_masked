
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {TYPE_1__* mnt_sb; } ;
struct TYPE_2__ {scalar_t__ s_readonly_remount; } ;


 int FUNC_0 (struct vfsmount*) ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(struct vfsmount *VAR_0)
{
 if (VAR_0->mnt_sb->s_readonly_remount)
  return 1;

 FUNC_1();
 return FUNC_0(VAR_0);
}
