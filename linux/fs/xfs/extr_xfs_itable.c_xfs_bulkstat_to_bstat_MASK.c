
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xfs_mount {int dummy; } ;
struct xfs_bulkstat {int bs_projectid; int bs_aextents; int bs_cowextsize_blks; int bs_checked; int bs_sick; int bs_forkoff; int bs_gen; int bs_extents; int bs_extsize_blks; int bs_xflags; int bs_blocks; int bs_ctime_nsec; int bs_mtime_nsec; int bs_atime_nsec; int bs_ctime; int bs_mtime; int bs_atime; int bs_size; int bs_blksize; int bs_rdev; int bs_gid; int bs_uid; int bs_nlink; int bs_mode; int bs_ino; } ;
struct TYPE_6__ {int tv_nsec; int tv_sec; } ;
struct TYPE_5__ {int tv_nsec; int tv_sec; } ;
struct TYPE_4__ {int tv_nsec; int tv_sec; } ;
struct xfs_bstat {int bs_projid_lo; int bs_projid_hi; int bs_aextents; scalar_t__ bs_dmstate; scalar_t__ bs_dmevmask; void* bs_cowextsize; int bs_checked; int bs_sick; int bs_forkoff; int bs_gen; int bs_extents; void* bs_extsize; int bs_xflags; int bs_blocks; TYPE_3__ bs_ctime; TYPE_2__ bs_mtime; TYPE_1__ bs_atime; int bs_size; int bs_blksize; int bs_rdev; int bs_gid; int bs_uid; int bs_nlink; int bs_mode; int bs_ino; } ;


 void* FUNC_0 (struct xfs_mount*,int ) ;
 int FUNC_1 (struct xfs_bstat*,int ,int) ;

void
FUNC_2(
 struct xfs_mount *VAR_0,
 struct xfs_bstat *VAR_1,
 const struct xfs_bulkstat *VAR_2)
{

 FUNC_1(VAR_1, 0, sizeof(struct xfs_bstat));
 VAR_1->bs_ino = VAR_2->bs_ino;
 VAR_1->bs_mode = VAR_2->bs_mode;
 VAR_1->bs_nlink = VAR_2->bs_nlink;
 VAR_1->bs_uid = VAR_2->bs_uid;
 VAR_1->bs_gid = VAR_2->bs_gid;
 VAR_1->bs_rdev = VAR_2->bs_rdev;
 VAR_1->bs_blksize = VAR_2->bs_blksize;
 VAR_1->bs_size = VAR_2->bs_size;
 VAR_1->bs_atime.tv_sec = VAR_2->bs_atime;
 VAR_1->bs_mtime.tv_sec = VAR_2->bs_mtime;
 VAR_1->bs_ctime.tv_sec = VAR_2->bs_ctime;
 VAR_1->bs_atime.tv_nsec = VAR_2->bs_atime_nsec;
 VAR_1->bs_mtime.tv_nsec = VAR_2->bs_mtime_nsec;
 VAR_1->bs_ctime.tv_nsec = VAR_2->bs_ctime_nsec;
 VAR_1->bs_blocks = VAR_2->bs_blocks;
 VAR_1->bs_xflags = VAR_2->bs_xflags;
 VAR_1->bs_extsize = FUNC_0(VAR_0, VAR_2->bs_extsize_blks);
 VAR_1->bs_extents = VAR_2->bs_extents;
 VAR_1->bs_gen = VAR_2->bs_gen;
 VAR_1->bs_projid_lo = VAR_2->bs_projectid & 0xFFFF;
 VAR_1->bs_forkoff = VAR_2->bs_forkoff;
 VAR_1->bs_projid_hi = VAR_2->bs_projectid >> 16;
 VAR_1->bs_sick = VAR_2->bs_sick;
 VAR_1->bs_checked = VAR_2->bs_checked;
 VAR_1->bs_cowextsize = FUNC_0(VAR_0, VAR_2->bs_cowextsize_blks);
 VAR_1->bs_dmevmask = 0;
 VAR_1->bs_dmstate = 0;
 VAR_1->bs_aextents = VAR_2->bs_aextents;
}
