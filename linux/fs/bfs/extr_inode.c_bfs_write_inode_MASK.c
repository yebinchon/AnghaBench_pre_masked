
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned int u16 ;
struct writeback_control {scalar_t__ sync_mode; } ;
struct TYPE_7__ {unsigned long tv_sec; } ;
struct TYPE_6__ {unsigned long tv_sec; } ;
struct TYPE_5__ {unsigned long tv_sec; } ;
struct inode {unsigned long i_mode; unsigned long i_nlink; unsigned long i_size; TYPE_3__ i_ctime; TYPE_2__ i_mtime; TYPE_1__ i_atime; int i_sb; int i_ino; } ;
struct buffer_head {int dummy; } ;
struct bfs_sb_info {int bfs_lock; } ;
struct bfs_inode {void* i_eoffset; void* i_eblock; void* i_sblock; void* i_ctime; void* i_mtime; void* i_atime; void* i_nlink; void* i_gid; void* i_uid; void* i_mode; int i_ino; void* i_vtype; } ;
struct TYPE_8__ {unsigned long i_sblock; unsigned long i_eblock; } ;


 unsigned long VAR_0 ;
 TYPE_4__* FUNC_0 (struct inode*) ;
 unsigned int VAR_1 ;
 struct bfs_sb_info* FUNC_1 (int ) ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct bfs_inode*) ;
 int FUNC_3 (struct bfs_inode*) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (struct buffer_head*) ;
 scalar_t__ FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (unsigned int) ;
 void* FUNC_8 (unsigned long) ;
 int FUNC_9 (char*,unsigned int) ;
 struct bfs_inode* FUNC_10 (int ,unsigned int,struct buffer_head**) ;
 unsigned long FUNC_11 (struct inode*) ;
 unsigned long FUNC_12 (struct inode*) ;
 int FUNC_13 (struct buffer_head*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_17(struct inode *VAR_6, struct writeback_control *VAR_7)
{
 struct bfs_sb_info *VAR_8 = FUNC_1(VAR_6->i_sb);
 unsigned int VAR_9 = (u16)VAR_6->i_ino;
 unsigned long VAR_10;
 struct bfs_inode *VAR_11;
 struct buffer_head *VAR_12;
 int VAR_13 = 0;

 FUNC_9("ino=%08x\n", VAR_9);

 VAR_11 = FUNC_10(VAR_6->i_sb, VAR_9, &VAR_12);
 if (FUNC_2(VAR_11))
  return FUNC_3(VAR_11);

 FUNC_14(&VAR_8->bfs_lock);

 if (VAR_9 == VAR_1)
  VAR_11->i_vtype = FUNC_8(VAR_2);
 else
  VAR_11->i_vtype = FUNC_8(VAR_3);

 VAR_11->i_ino = FUNC_7(VAR_9);
 VAR_11->i_mode = FUNC_8(VAR_6->i_mode);
 VAR_11->i_uid = FUNC_8(FUNC_12(VAR_6));
 VAR_11->i_gid = FUNC_8(FUNC_11(VAR_6));
 VAR_11->i_nlink = FUNC_8(VAR_6->i_nlink);
 VAR_11->i_atime = FUNC_8(VAR_6->i_atime.tv_sec);
 VAR_11->i_mtime = FUNC_8(VAR_6->i_mtime.tv_sec);
 VAR_11->i_ctime = FUNC_8(VAR_6->i_ctime.tv_sec);
 VAR_10 = FUNC_0(VAR_6)->i_sblock;
 VAR_11->i_sblock = FUNC_8(VAR_10);
 VAR_11->i_eblock = FUNC_8(FUNC_0(VAR_6)->i_eblock);
 VAR_11->i_eoffset = FUNC_8(VAR_10 * VAR_0 + VAR_6->i_size - 1);

 FUNC_13(VAR_12);
 if (VAR_7->sync_mode == VAR_5) {
  FUNC_16(VAR_12);
  if (FUNC_5(VAR_12) && !FUNC_6(VAR_12))
   VAR_13 = -VAR_4;
 }
 FUNC_4(VAR_12);
 FUNC_15(&VAR_8->bfs_lock);
 return VAR_13;
}
