
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {int mnt_flags; TYPE_1__* mnt_sb; } ;
struct TYPE_2__ {int s_user_ns; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct vfsmount*) ;

bool FUNC_3(struct vfsmount *VAR_1)
{







 return !(VAR_1->mnt_flags & VAR_0) && FUNC_0(FUNC_2(VAR_1)) &&
        FUNC_1(VAR_1->mnt_sb->s_user_ns);
}
