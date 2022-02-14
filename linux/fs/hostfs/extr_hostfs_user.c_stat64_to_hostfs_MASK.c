
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stat64 {int st_rdev; int st_blocks; int st_blksize; int st_mtime; int st_ctime; int st_atime; int st_size; int st_gid; int st_uid; int st_nlink; int st_mode; int st_ino; } ;
struct TYPE_6__ {scalar_t__ tv_nsec; int tv_sec; } ;
struct TYPE_5__ {scalar_t__ tv_nsec; int tv_sec; } ;
struct TYPE_4__ {scalar_t__ tv_nsec; int tv_sec; } ;
struct hostfs_stat {int min; int maj; int blocks; int blksize; TYPE_3__ mtime; TYPE_2__ ctime; TYPE_1__ atime; int size; int gid; int uid; int nlink; int mode; int ino; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(const struct stat64 *VAR_0, struct hostfs_stat *VAR_1)
{
 VAR_1->ino = VAR_0->st_ino;
 VAR_1->mode = VAR_0->st_mode;
 VAR_1->nlink = VAR_0->st_nlink;
 VAR_1->uid = VAR_0->st_uid;
 VAR_1->gid = VAR_0->st_gid;
 VAR_1->size = VAR_0->st_size;
 VAR_1->atime.tv_sec = VAR_0->st_atime;
 VAR_1->atime.tv_nsec = 0;
 VAR_1->ctime.tv_sec = VAR_0->st_ctime;
 VAR_1->ctime.tv_nsec = 0;
 VAR_1->mtime.tv_sec = VAR_0->st_mtime;
 VAR_1->mtime.tv_nsec = 0;
 VAR_1->blksize = VAR_0->st_blksize;
 VAR_1->blocks = VAR_0->st_blocks;
 VAR_1->maj = FUNC_0(VAR_0->st_rdev);
 VAR_1->min = FUNC_1(VAR_0->st_rdev);
}
