
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int mnt_flags; int mnt_sb; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

bool FUNC_1(struct vfsmount *VAR_1)
{
 return (VAR_1->mnt_flags & VAR_0) || FUNC_0(VAR_1->mnt_sb);
}
