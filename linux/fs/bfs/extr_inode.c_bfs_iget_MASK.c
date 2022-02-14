
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_12__ {int tv_sec; scalar_t__ tv_nsec; } ;
struct TYPE_11__ {int tv_sec; scalar_t__ tv_nsec; } ;
struct TYPE_10__ {int tv_sec; scalar_t__ tv_nsec; } ;
struct inode {int i_state; int i_mode; TYPE_4__ i_ctime; TYPE_3__ i_mtime; TYPE_2__ i_atime; int i_blocks; int i_size; TYPE_1__* i_mapping; int * i_fop; int * i_op; TYPE_5__* i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct bfs_inode {int i_ctime; int i_mtime; int i_atime; int i_nlink; int i_gid; int i_uid; int i_ino; int i_eblock; int i_sblock; int i_vtype; int i_mode; } ;
struct TYPE_15__ {int i_sblock; int i_eblock; int i_dsk_ino; } ;
struct TYPE_14__ {unsigned long si_lasti; } ;
struct TYPE_13__ {char* s_id; } ;
struct TYPE_9__ {int * a_ops; } ;


 int FUNC_0 (struct bfs_inode*) ;
 int FUNC_1 (struct bfs_inode*) ;
 TYPE_8__* FUNC_2 (struct inode*) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 TYPE_6__* FUNC_3 (TYPE_5__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct inode* FUNC_4 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct inode*,int) ;
 int FUNC_7 (struct inode*,int) ;
 int FUNC_8 (struct inode*) ;
 struct inode* FUNC_9 (struct super_block*,unsigned long) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*,char*,unsigned long) ;
 struct buffer_head* FUNC_13 (TYPE_5__*,int) ;
 int FUNC_14 (struct inode*,int) ;
 int FUNC_15 (struct inode*) ;

struct inode *FUNC_16(struct super_block *VAR_14, unsigned long VAR_15)
{
 struct bfs_inode *VAR_16;
 struct inode *VAR_17;
 struct buffer_head *VAR_18;
 int VAR_19, VAR_20;

 VAR_17 = FUNC_9(VAR_14, VAR_15);
 if (!VAR_17)
  return FUNC_4(-VAR_5);
 if (!(VAR_17->i_state & VAR_6))
  return VAR_17;

 if ((VAR_15 < VAR_1) || (VAR_15 > FUNC_3(VAR_17->i_sb)->si_lasti)) {
  FUNC_12("Bad inode number %s:%08lx\n", VAR_17->i_sb->s_id, VAR_15);
  goto error;
 }

 VAR_19 = (VAR_15 - VAR_1) / VAR_0 + 1;
 VAR_18 = FUNC_13(VAR_17->i_sb, VAR_19);
 if (!VAR_18) {
  FUNC_12("Unable to read inode %s:%08lx\n", VAR_17->i_sb->s_id,
         VAR_15);
  goto error;
 }

 VAR_20 = (VAR_15 - VAR_1) % VAR_0;
 VAR_16 = (struct bfs_inode *)VAR_18->b_data + VAR_20;

 VAR_17->i_mode = 0x0000FFFF & FUNC_11(VAR_16->i_mode);
 if (FUNC_11(VAR_16->i_vtype) == VAR_2) {
  VAR_17->i_mode |= VAR_7;
  VAR_17->i_op = &VAR_10;
  VAR_17->i_fop = &VAR_11;
 } else if (FUNC_11(VAR_16->i_vtype) == VAR_3) {
  VAR_17->i_mode |= VAR_8;
  VAR_17->i_op = &VAR_12;
  VAR_17->i_fop = &VAR_13;
  VAR_17->i_mapping->a_ops = &VAR_9;
 }

 FUNC_2(VAR_17)->i_sblock = FUNC_11(VAR_16->i_sblock);
 FUNC_2(VAR_17)->i_eblock = FUNC_11(VAR_16->i_eblock);
 FUNC_2(VAR_17)->i_dsk_ino = FUNC_10(VAR_16->i_ino);
 FUNC_7(VAR_17, FUNC_11(VAR_16->i_uid));
 FUNC_6(VAR_17, FUNC_11(VAR_16->i_gid));
 FUNC_14(VAR_17, FUNC_11(VAR_16->i_nlink));
 VAR_17->i_size = FUNC_1(VAR_16);
 VAR_17->i_blocks = FUNC_0(VAR_16);
 VAR_17->i_atime.tv_sec = FUNC_11(VAR_16->i_atime);
 VAR_17->i_mtime.tv_sec = FUNC_11(VAR_16->i_mtime);
 VAR_17->i_ctime.tv_sec = FUNC_11(VAR_16->i_ctime);
 VAR_17->i_atime.tv_nsec = 0;
 VAR_17->i_mtime.tv_nsec = 0;
 VAR_17->i_ctime.tv_nsec = 0;

 FUNC_5(VAR_18);
 FUNC_15(VAR_17);
 return VAR_17;

error:
 FUNC_8(VAR_17);
 return FUNC_4(-VAR_4);
}
