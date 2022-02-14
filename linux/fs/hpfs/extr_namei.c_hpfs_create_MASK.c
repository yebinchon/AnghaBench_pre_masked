
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


typedef int umode_t ;
struct TYPE_11__ {int * a_ops; } ;
struct TYPE_10__ {scalar_t__ tv_nsec; int tv_sec; } ;
struct TYPE_9__ {scalar_t__ tv_nsec; int tv_sec; } ;
struct TYPE_8__ {scalar_t__ tv_nsec; int tv_sec; } ;
struct inode {int i_mode; int i_blocks; int i_sb; int i_gid; int i_uid; int i_ino; TYPE_5__ i_data; scalar_t__ i_size; TYPE_4__ i_atime; TYPE_3__ i_mtime; TYPE_2__ i_ctime; int * i_fop; int * i_op; } ;
struct hpfs_dirent {int read_only; int archive; int hidden; void* creation_date; void* read_date; void* write_date; void* fnode; } ;
struct fnode {unsigned int len; void* up; int name; } ;
struct TYPE_7__ {unsigned char* name; unsigned int len; } ;
struct dentry {TYPE_1__ d_name; } ;
struct buffer_head {int dummy; } ;
typedef int fnode_secno ;
struct TYPE_12__ {scalar_t__ mmu_private; scalar_t__ i_ea_size; int i_parent_dir; int i_dno; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct buffer_head*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct dentry*,struct inode*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct inode*,unsigned char const*,unsigned int,struct hpfs_dirent*) ;
 struct fnode* FUNC_7 (int ,int ,int *,struct buffer_head**) ;
 int VAR_5 ;
 int FUNC_8 (unsigned char const*,unsigned int*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (int ,int ,int) ;
 TYPE_6__* FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (struct inode*) ;
 int FUNC_16 (struct inode*) ;
 int FUNC_17 (struct inode*) ;
 int FUNC_18 (void*) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (struct buffer_head*) ;
 int FUNC_22 (int ,unsigned char const*,int) ;
 int FUNC_23 (struct hpfs_dirent*,int ,int) ;
 struct inode* FUNC_24 (int ) ;
 int FUNC_25 (struct inode*,int) ;
 int FUNC_26 (int ,int ) ;

__attribute__((used)) static int FUNC_27(struct inode *VAR_8, struct dentry *VAR_9, umode_t VAR_10, bool VAR_11)
{
 const unsigned char *VAR_12 = VAR_9->d_name.name;
 unsigned VAR_13 = VAR_9->d_name.len;
 struct inode *VAR_14 = ((void*)0);
 struct buffer_head *VAR_15;
 struct fnode *VAR_16;
 fnode_secno VAR_17;
 int VAR_18;
 struct hpfs_dirent VAR_19;
 int VAR_20;
 if ((VAR_20 = FUNC_8(VAR_12, &VAR_13)))
  return VAR_20==-VAR_2 ? -VAR_1 : VAR_20;
 FUNC_12(VAR_8->i_sb);
 VAR_20 = -VAR_3;
 VAR_16 = FUNC_7(VAR_8->i_sb, FUNC_10(VAR_8)->i_dno, &VAR_17, &VAR_15);
 if (!VAR_16)
  goto bail;
 FUNC_23(&VAR_19, 0, sizeof VAR_19);
 if (!(VAR_10 & 0222)) VAR_19.read_only = 1;
 VAR_19.archive = 1;
 VAR_19.hidden = VAR_12[0] == '.';
 VAR_19.fnode = FUNC_1(VAR_17);
 VAR_19.creation_date = VAR_19.write_date = VAR_19.read_date = FUNC_1(FUNC_19(VAR_8->i_sb));

 VAR_14 = FUNC_24(VAR_8->i_sb);
 if (!VAR_14)
  goto bail1;

 FUNC_11(VAR_14);
 VAR_14->i_ino = VAR_17;
 VAR_14->i_mode |= VAR_4;
 VAR_14->i_mode &= ~0111;
 VAR_14->i_op = &VAR_6;
 VAR_14->i_fop = &VAR_7;
 FUNC_25(VAR_14, 1);
 FUNC_10(VAR_14)->i_parent_dir = VAR_8->i_ino;
 VAR_14->i_ctime.tv_sec = VAR_14->i_mtime.tv_sec = VAR_14->i_atime.tv_sec = FUNC_20(VAR_8->i_sb, FUNC_18(VAR_19.creation_date));
 VAR_14->i_ctime.tv_nsec = 0;
 VAR_14->i_mtime.tv_nsec = 0;
 VAR_14->i_atime.tv_nsec = 0;
 FUNC_10(VAR_14)->i_ea_size = 0;
 if (VAR_19.read_only)
  VAR_14->i_mode &= ~0222;
 VAR_14->i_blocks = 1;
 VAR_14->i_size = 0;
 VAR_14->i_data.a_ops = &VAR_5;
 FUNC_10(VAR_14)->mmu_private = 0;

 VAR_18 = FUNC_6(VAR_8, VAR_12, VAR_13, &VAR_19);
 if (VAR_18 == 1)
  goto bail2;
 if (VAR_18 == -1) {
  VAR_20 = -VAR_0;
  goto bail2;
 }
 VAR_16->len = VAR_13;
 FUNC_22(VAR_16->name, VAR_12, VAR_13 > 15 ? 15 : VAR_13);
 VAR_16->up = FUNC_1(VAR_8->i_ino);
 FUNC_21(VAR_15);
 FUNC_0(VAR_15);

 FUNC_16(VAR_14);

 if (!FUNC_26(VAR_14->i_uid, FUNC_3()) ||
     !FUNC_5(VAR_14->i_gid, FUNC_2()) ||
     VAR_14->i_mode != (VAR_10 | VAR_4)) {
  VAR_14->i_uid = FUNC_3();
  VAR_14->i_gid = FUNC_2();
  VAR_14->i_mode = VAR_10 | VAR_4;
  FUNC_15(VAR_14);
 }
 FUNC_14(VAR_8);
 FUNC_4(VAR_9, VAR_14);
 FUNC_13(VAR_8->i_sb);
 return 0;

bail2:
 FUNC_17(VAR_14);
bail1:
 FUNC_0(VAR_15);
 FUNC_9(VAR_8->i_sb, VAR_17, 1);
bail:
 FUNC_13(VAR_8->i_sb);
 return VAR_20;
}
