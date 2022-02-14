
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct path {TYPE_2__* mnt; } ;
struct TYPE_4__ {int mnt_flags; TYPE_1__* mnt_sb; } ;
struct TYPE_3__ {int s_iflags; } ;


 int VAR_0 ;
 int VAR_1 ;

bool FUNC_0(const struct path *VAR_2)
{
 return (VAR_2->mnt->mnt_flags & VAR_0) ||
        (VAR_2->mnt->mnt_sb->s_iflags & VAR_1);
}
