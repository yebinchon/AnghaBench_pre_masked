
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {int mnt_flags; } ;
struct timespec64 {int dummy; } ;
struct path {struct vfsmount* mnt; } ;
struct inode {int i_flags; int i_atime; int i_mode; TYPE_1__* i_sb; } ;
struct TYPE_2__ {int s_flags; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_3 ;
 struct timespec64 FUNC_3 (struct inode*) ;
 int FUNC_4 (struct vfsmount*,struct inode*,struct timespec64) ;
 scalar_t__ FUNC_5 (int *,struct timespec64*) ;

bool FUNC_6(const struct path *VAR_4, struct inode *VAR_5)
{
 struct vfsmount *VAR_6 = VAR_4->mnt;
 struct timespec64 VAR_7;

 if (VAR_5->i_flags & VAR_3)
  return 0;




 if (FUNC_0(VAR_5))
  return 0;

 if (FUNC_1(VAR_5))
  return 0;
 if ((VAR_5->i_sb->s_flags & VAR_2) && FUNC_2(VAR_5->i_mode))
  return 0;

 if (VAR_6->mnt_flags & VAR_0)
  return 0;
 if ((VAR_6->mnt_flags & VAR_1) && FUNC_2(VAR_5->i_mode))
  return 0;

 VAR_7 = FUNC_3(VAR_5);

 if (!FUNC_4(VAR_6, VAR_5, VAR_7))
  return 0;

 if (FUNC_5(&VAR_5->i_atime, &VAR_7))
  return 0;

 return 1;
}
