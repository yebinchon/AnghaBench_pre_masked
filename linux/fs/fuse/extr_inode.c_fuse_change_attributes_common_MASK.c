
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_7__ {int tv_nsec; int tv_sec; } ;
struct TYPE_6__ {int tv_nsec; int tv_sec; } ;
struct TYPE_5__ {int tv_nsec; int tv_sec; } ;
struct inode {int i_mode; TYPE_4__* i_sb; int i_blkbits; TYPE_3__ i_ctime; TYPE_2__ i_mtime; TYPE_1__ i_atime; int i_blocks; int i_gid; int i_uid; int i_ino; } ;
struct fuse_inode {int orig_i_mode; int orig_ino; int inval_mask; int i_time; int attr_version; int lock; } ;
struct fuse_conn {int default_permissions; int writeback_cache; int user_ns; int attr_version; } ;
struct fuse_attr {int mode; scalar_t__ blksize; int ino; int ctimensec; int ctime; int mtimensec; int mtime; int atimensec; int atime; int blocks; int gid; int uid; int nlink; } ;
struct TYPE_8__ {int s_blocksize_bits; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 struct fuse_conn* FUNC_4 (struct inode*) ;
 struct fuse_inode* FUNC_5 (struct inode*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct inode*,int ) ;

void FUNC_11(struct inode *VAR_2, struct fuse_attr *VAR_3,
       u64 VAR_4)
{
 struct fuse_conn *VAR_5 = FUNC_4(VAR_2);
 struct fuse_inode *VAR_6 = FUNC_5(VAR_2);

 FUNC_7(&VAR_6->lock);

 VAR_6->attr_version = FUNC_2(&VAR_5->attr_version);
 VAR_6->i_time = VAR_4;
 FUNC_1(VAR_6->inval_mask, 0);

 VAR_2->i_ino = FUNC_3(VAR_3->ino);
 VAR_2->i_mode = (VAR_2->i_mode & VAR_0) | (VAR_3->mode & 07777);
 FUNC_10(VAR_2, VAR_3->nlink);
 VAR_2->i_uid = FUNC_9(VAR_5->user_ns, VAR_3->uid);
 VAR_2->i_gid = FUNC_8(VAR_5->user_ns, VAR_3->gid);
 VAR_2->i_blocks = VAR_3->blocks;
 VAR_2->i_atime.tv_sec = VAR_3->atime;
 VAR_2->i_atime.tv_nsec = VAR_3->atimensec;

 if (!VAR_5->writeback_cache || !FUNC_0(VAR_2->i_mode)) {
  VAR_2->i_mtime.tv_sec = VAR_3->mtime;
  VAR_2->i_mtime.tv_nsec = VAR_3->mtimensec;
  VAR_2->i_ctime.tv_sec = VAR_3->ctime;
  VAR_2->i_ctime.tv_nsec = VAR_3->ctimensec;
 }

 if (VAR_3->blksize != 0)
  VAR_2->i_blkbits = FUNC_6(VAR_3->blksize);
 else
  VAR_2->i_blkbits = VAR_2->i_sb->s_blocksize_bits;






 VAR_6->orig_i_mode = VAR_2->i_mode;
 if (!VAR_5->default_permissions)
  VAR_2->i_mode &= ~VAR_1;

 VAR_6->orig_ino = VAR_3->ino;
}
