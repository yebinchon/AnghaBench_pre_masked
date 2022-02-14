
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vfsmount {int mnt_flags; } ;
struct timespec64 {scalar_t__ tv_sec; } ;
struct ocfs2_super {scalar_t__ s_atime_quantum; } ;
struct TYPE_3__ {scalar_t__ tv_sec; } ;
struct inode {int i_flags; TYPE_1__ i_atime; int i_ctime; int i_mtime; int i_mode; TYPE_2__* i_sb; } ;
struct TYPE_4__ {int s_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ocfs2_super* FUNC_0 (TYPE_2__*) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 struct timespec64 FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct ocfs2_super*) ;
 scalar_t__ FUNC_4 (struct ocfs2_super*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int *) ;

int FUNC_6(struct inode *VAR_5,
         struct vfsmount *VAR_6)
{
 struct timespec64 VAR_7;
 struct ocfs2_super *VAR_8 = FUNC_0(VAR_5->i_sb);

 if (FUNC_3(VAR_8) || FUNC_4(VAR_8))
  return 0;

 if ((VAR_5->i_flags & VAR_4) ||
     ((VAR_5->i_sb->s_flags & VAR_3) && FUNC_1(VAR_5->i_mode)))
  return 0;
 if (VAR_6 == ((void*)0))
  return 0;

 if ((VAR_6->mnt_flags & VAR_0) ||
     ((VAR_6->mnt_flags & VAR_1) && FUNC_1(VAR_5->i_mode)))
  return 0;

 if (VAR_6->mnt_flags & VAR_2) {
  if ((FUNC_5(&VAR_5->i_atime, &VAR_5->i_mtime) <= 0) ||
      (FUNC_5(&VAR_5->i_atime, &VAR_5->i_ctime) <= 0))
   return 1;

  return 0;
 }

 VAR_7 = FUNC_2(VAR_5);
 if ((VAR_7.tv_sec - VAR_5->i_atime.tv_sec <= VAR_8->s_atime_quantum))
  return 0;
 else
  return 1;
}
