
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int tv_nsec; int tv_sec; } ;
struct TYPE_10__ {int tv_nsec; int tv_sec; } ;
struct TYPE_9__ {int tv_nsec; int tv_sec; } ;
struct kstat {int mode; int blksize; int blocks; int size; TYPE_5__ ctime; TYPE_4__ mtime; TYPE_3__ atime; int rdev; int gid; int uid; int nlink; int ino; int dev; } ;
struct TYPE_8__ {int tv_nsec; int tv_sec; } ;
struct TYPE_7__ {int tv_nsec; int tv_sec; } ;
struct inode {int i_mode; TYPE_6__* i_sb; int i_rdev; TYPE_2__ i_ctime; TYPE_1__ i_mtime; } ;
struct fuse_conn {int user_ns; scalar_t__ writeback_cache; } ;
struct fuse_attr {int mode; scalar_t__ blksize; int blocks; int size; int ctimensec; int ctime; int mtimensec; int mtime; int atimensec; int atime; int gid; int uid; int nlink; int ino; } ;
struct TYPE_12__ {unsigned int s_blocksize_bits; int s_dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct fuse_conn* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 unsigned int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct inode *VAR_1, struct fuse_attr *VAR_2,
     struct kstat *VAR_3)
{
 unsigned int VAR_4;
 struct fuse_conn *VAR_5 = FUNC_1(VAR_1);


 if (VAR_5->writeback_cache && FUNC_0(VAR_1->i_mode)) {
  VAR_2->size = FUNC_2(VAR_1);
  VAR_2->mtime = VAR_1->i_mtime.tv_sec;
  VAR_2->mtimensec = VAR_1->i_mtime.tv_nsec;
  VAR_2->ctime = VAR_1->i_ctime.tv_sec;
  VAR_2->ctimensec = VAR_1->i_ctime.tv_nsec;
 }

 VAR_3->dev = VAR_1->i_sb->s_dev;
 VAR_3->ino = VAR_2->ino;
 VAR_3->mode = (VAR_1->i_mode & VAR_0) | (VAR_2->mode & 07777);
 VAR_3->nlink = VAR_2->nlink;
 VAR_3->uid = FUNC_5(VAR_5->user_ns, VAR_2->uid);
 VAR_3->gid = FUNC_4(VAR_5->user_ns, VAR_2->gid);
 VAR_3->rdev = VAR_1->i_rdev;
 VAR_3->atime.tv_sec = VAR_2->atime;
 VAR_3->atime.tv_nsec = VAR_2->atimensec;
 VAR_3->mtime.tv_sec = VAR_2->mtime;
 VAR_3->mtime.tv_nsec = VAR_2->mtimensec;
 VAR_3->ctime.tv_sec = VAR_2->ctime;
 VAR_3->ctime.tv_nsec = VAR_2->ctimensec;
 VAR_3->size = VAR_2->size;
 VAR_3->blocks = VAR_2->blocks;

 if (VAR_2->blksize != 0)
  VAR_4 = FUNC_3(VAR_2->blksize);
 else
  VAR_4 = VAR_1->i_sb->s_blocksize_bits;

 VAR_3->blksize = 1 << VAR_4;
}
