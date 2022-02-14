
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timeval {int tv_usec; int tv_sec; } ;
struct TYPE_4__ {int tv_nsec; int tv_sec; } ;
struct TYPE_3__ {int tv_nsec; int tv_sec; } ;
struct hostfs_stat {TYPE_2__ mtime; TYPE_1__ atime; } ;
struct hostfs_iattr {int ia_valid; int ia_uid; int ia_gid; TYPE_2__ ia_mtime; TYPE_1__ ia_atime; int ia_size; int ia_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (char const*,int ) ;
 scalar_t__ FUNC_1 (char const*,int,int) ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (int,int,int) ;
 scalar_t__ FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (int,struct timeval*) ;
 int FUNC_6 (char const*,struct hostfs_stat*,int) ;
 scalar_t__ FUNC_7 (char const*,int ) ;
 scalar_t__ FUNC_8 (char const*,struct timeval*) ;

int FUNC_9(const char *VAR_9, struct hostfs_iattr *VAR_10, int VAR_11)
{
 struct hostfs_stat VAR_12;
 struct timeval VAR_13[2];
 int VAR_14, VAR_15;

 if (VAR_10->ia_valid & VAR_3) {
  if (VAR_11 >= 0) {
   if (FUNC_2(VAR_11, VAR_10->ia_mode) != 0)
    return -VAR_8;
  } else if (FUNC_0(VAR_9, VAR_10->ia_mode) != 0) {
   return -VAR_8;
  }
 }
 if (VAR_10->ia_valid & VAR_7) {
  if (VAR_11 >= 0) {
   if (FUNC_3(VAR_11, VAR_10->ia_uid, -1))
    return -VAR_8;
  } else if (FUNC_1(VAR_9, VAR_10->ia_uid, -1)) {
   return -VAR_8;
  }
 }
 if (VAR_10->ia_valid & VAR_2) {
  if (VAR_11 >= 0) {
   if (FUNC_3(VAR_11, -1, VAR_10->ia_gid))
    return -VAR_8;
  } else if (FUNC_1(VAR_9, -1, VAR_10->ia_gid)) {
   return -VAR_8;
  }
 }
 if (VAR_10->ia_valid & VAR_6) {
  if (VAR_11 >= 0) {
   if (FUNC_4(VAR_11, VAR_10->ia_size))
    return -VAR_8;
  } else if (FUNC_7(VAR_9, VAR_10->ia_size)) {
   return -VAR_8;
  }
 }






 VAR_15 = (VAR_1 | VAR_5);
 if (VAR_10->ia_valid & VAR_15) {
  VAR_14 = FUNC_6(VAR_9, &VAR_12, VAR_11);
  if (VAR_14 != 0)
   return VAR_14;

  VAR_13[0].tv_sec = VAR_12.atime.tv_sec;
  VAR_13[0].tv_usec = VAR_12.atime.tv_nsec / 1000;
  VAR_13[1].tv_sec = VAR_12.mtime.tv_sec;
  VAR_13[1].tv_usec = VAR_12.mtime.tv_nsec / 1000;

  if (VAR_10->ia_valid & VAR_1) {
   VAR_13[0].tv_sec = VAR_10->ia_atime.tv_sec;
   VAR_13[0].tv_usec = VAR_10->ia_atime.tv_nsec / 1000;
  }
  if (VAR_10->ia_valid & VAR_5) {
   VAR_13[1].tv_sec = VAR_10->ia_mtime.tv_sec;
   VAR_13[1].tv_usec = VAR_10->ia_mtime.tv_nsec / 1000;
  }

  if (VAR_11 >= 0) {
   if (FUNC_5(VAR_11, VAR_13) != 0)
    return -VAR_8;
  } else if (FUNC_8(VAR_9, VAR_13) != 0) {
   return -VAR_8;
  }
 }


 if (VAR_10->ia_valid & (VAR_0 | VAR_4)) {
  VAR_14 = FUNC_6(VAR_9, &VAR_12, VAR_11);
  VAR_10->ia_atime = VAR_12.atime;
  VAR_10->ia_mtime = VAR_12.mtime;
  if (VAR_14 != 0)
   return VAR_14;
 }
 return 0;
}
