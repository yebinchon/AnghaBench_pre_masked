
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int umode_t ;
struct v9fs_inode {int cache_validity; } ;
struct p9_stat_dotl {int st_result_mask; int st_mode; int st_gen; int st_blocks; int st_size; int st_rdev; int st_nlink; int st_gid; int st_uid; int st_ctime_nsec; int st_ctime_sec; int st_mtime_nsec; int st_mtime_sec; int st_atime_nsec; int st_atime_sec; } ;
struct TYPE_6__ {int tv_nsec; int tv_sec; } ;
struct TYPE_5__ {int tv_nsec; int tv_sec; } ;
struct TYPE_4__ {int tv_nsec; int tv_sec; } ;
struct inode {int i_mode; int i_generation; int i_blocks; int i_rdev; int i_gid; int i_uid; TYPE_3__ i_ctime; TYPE_2__ i_mtime; TYPE_1__ i_atime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 struct v9fs_inode* FUNC_2 (struct inode*) ;
 int VAR_13 ;
 unsigned int VAR_14 ;
 int FUNC_3 (struct inode*,int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct inode*,int ) ;
 int FUNC_6 (struct inode*,int ) ;

void
FUNC_7(struct p9_stat_dotl *VAR_15, struct inode *VAR_16,
        unsigned int VAR_17)
{
 umode_t VAR_18;
 struct v9fs_inode *VAR_19 = FUNC_2(VAR_16);

 if ((VAR_15->st_result_mask & VAR_1) == VAR_1) {
  VAR_16->i_atime.tv_sec = VAR_15->st_atime_sec;
  VAR_16->i_atime.tv_nsec = VAR_15->st_atime_nsec;
  VAR_16->i_mtime.tv_sec = VAR_15->st_mtime_sec;
  VAR_16->i_mtime.tv_nsec = VAR_15->st_mtime_nsec;
  VAR_16->i_ctime.tv_sec = VAR_15->st_ctime_sec;
  VAR_16->i_ctime.tv_nsec = VAR_15->st_ctime_nsec;
  VAR_16->i_uid = VAR_15->st_uid;
  VAR_16->i_gid = VAR_15->st_gid;
  FUNC_5(VAR_16, VAR_15->st_nlink);

  VAR_18 = VAR_15->st_mode & VAR_12;
  VAR_18 |= VAR_16->i_mode & ~VAR_12;
  VAR_16->i_mode = VAR_18;

  if (!(VAR_17 & VAR_14))
   FUNC_6(VAR_16, VAR_15->st_size);
  VAR_16->i_blocks = VAR_15->st_blocks;
 } else {
  if (VAR_15->st_result_mask & VAR_0) {
   VAR_16->i_atime.tv_sec = VAR_15->st_atime_sec;
   VAR_16->i_atime.tv_nsec = VAR_15->st_atime_nsec;
  }
  if (VAR_15->st_result_mask & VAR_7) {
   VAR_16->i_mtime.tv_sec = VAR_15->st_mtime_sec;
   VAR_16->i_mtime.tv_nsec = VAR_15->st_mtime_nsec;
  }
  if (VAR_15->st_result_mask & VAR_3) {
   VAR_16->i_ctime.tv_sec = VAR_15->st_ctime_sec;
   VAR_16->i_ctime.tv_nsec = VAR_15->st_ctime_nsec;
  }
  if (VAR_15->st_result_mask & VAR_11)
   VAR_16->i_uid = VAR_15->st_uid;
  if (VAR_15->st_result_mask & VAR_5)
   VAR_16->i_gid = VAR_15->st_gid;
  if (VAR_15->st_result_mask & VAR_8)
   FUNC_5(VAR_16, VAR_15->st_nlink);
  if (VAR_15->st_result_mask & VAR_6) {
   VAR_16->i_mode = VAR_15->st_mode;
   if ((FUNC_0(VAR_16->i_mode)) ||
      (FUNC_1(VAR_16->i_mode)))
    FUNC_3(VAR_16, VAR_16->i_mode,
        VAR_16->i_rdev);
  }
  if (VAR_15->st_result_mask & VAR_9)
   VAR_16->i_rdev = FUNC_4(VAR_15->st_rdev);
  if (!(VAR_17 & VAR_14) &&
      VAR_15->st_result_mask & VAR_10)
   FUNC_6(VAR_16, VAR_15->st_size);
  if (VAR_15->st_result_mask & VAR_2)
   VAR_16->i_blocks = VAR_15->st_blocks;
 }
 if (VAR_15->st_result_mask & VAR_4)
  VAR_16->i_generation = VAR_15->st_gen;




 VAR_19->cache_validity &= ~VAR_13;
}
