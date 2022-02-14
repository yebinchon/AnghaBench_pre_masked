
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int * a_ops; } ;
struct TYPE_11__ {scalar_t__ tv_nsec; int tv_sec; } ;
struct TYPE_10__ {scalar_t__ tv_nsec; int tv_sec; } ;
struct TYPE_9__ {scalar_t__ tv_nsec; int tv_sec; } ;
struct inode {int i_mode; int i_blocks; int i_sb; int i_ino; TYPE_5__ i_data; int * i_op; int i_size; int i_gid; int i_uid; TYPE_4__ i_atime; TYPE_3__ i_mtime; TYPE_2__ i_ctime; } ;
struct hpfs_dirent {int archive; int hidden; void* creation_date; void* read_date; void* write_date; void* fnode; } ;
struct fnode {unsigned int len; void* up; int name; } ;
struct TYPE_8__ {unsigned char* name; unsigned int len; } ;
struct dentry {TYPE_1__ d_name; } ;
struct buffer_head {int dummy; } ;
typedef int fnode_secno ;
struct TYPE_14__ {scalar_t__ i_ea_size; int i_parent_dir; int i_dno; } ;
struct TYPE_13__ {int sb_eas; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct buffer_head*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct dentry*,struct inode*) ;
 int FUNC_5 (struct inode*,unsigned char const*,unsigned int,struct hpfs_dirent*) ;
 struct fnode* FUNC_6 (int ,int ,int *,struct buffer_head**) ;
 int FUNC_7 (unsigned char const*,unsigned int*) ;
 int FUNC_8 (int ,int ,int) ;
 TYPE_7__* FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (int ) ;
 TYPE_6__* FUNC_12 (int ) ;
 int FUNC_13 (struct inode*,struct fnode*,char*,char const*,int ) ;
 int VAR_6 ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct inode*) ;
 int FUNC_16 (struct inode*) ;
 int FUNC_17 (struct inode*) ;
 int FUNC_18 (struct inode*) ;
 int FUNC_19 (struct inode*) ;
 int FUNC_20 (void*) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (struct buffer_head*) ;
 int FUNC_24 (int ,unsigned char const*,int) ;
 int FUNC_25 (struct hpfs_dirent*,int ,int) ;
 struct inode* FUNC_26 (int ) ;
 int VAR_7 ;
 int FUNC_27 (struct inode*,int) ;
 int FUNC_28 (char const*) ;

__attribute__((used)) static int FUNC_29(struct inode *VAR_8, struct dentry *VAR_9, const char *VAR_10)
{
 const unsigned char *VAR_11 = VAR_9->d_name.name;
 unsigned VAR_12 = VAR_9->d_name.len;
 struct buffer_head *VAR_13;
 struct fnode *VAR_14;
 fnode_secno VAR_15;
 int VAR_16;
 struct hpfs_dirent VAR_17;
 struct inode *VAR_18;
 int VAR_19;
 if ((VAR_19 = FUNC_7(VAR_11, &VAR_12))) return VAR_19==-VAR_2 ? -VAR_1 : VAR_19;
 FUNC_11(VAR_8->i_sb);
 if (FUNC_12(VAR_8->i_sb)->sb_eas < 2) {
  FUNC_14(VAR_8->i_sb);
  return -VAR_4;
 }
 VAR_19 = -VAR_3;
 VAR_14 = FUNC_6(VAR_8->i_sb, FUNC_9(VAR_8)->i_dno, &VAR_15, &VAR_13);
 if (!VAR_14)
  goto bail;
 FUNC_25(&VAR_17, 0, sizeof VAR_17);
 VAR_17.archive = 1;
 VAR_17.hidden = VAR_11[0] == '.';
 VAR_17.fnode = FUNC_1(VAR_15);
 VAR_17.creation_date = VAR_17.write_date = VAR_17.read_date = FUNC_1(FUNC_21(VAR_8->i_sb));

 VAR_18 = FUNC_26(VAR_8->i_sb);
 if (!VAR_18)
  goto bail1;
 VAR_18->i_ino = VAR_15;
 FUNC_10(VAR_18);
 FUNC_9(VAR_18)->i_parent_dir = VAR_8->i_ino;
 VAR_18->i_ctime.tv_sec = VAR_18->i_mtime.tv_sec = VAR_18->i_atime.tv_sec = FUNC_22(VAR_8->i_sb, FUNC_20(VAR_17.creation_date));
 VAR_18->i_ctime.tv_nsec = 0;
 VAR_18->i_mtime.tv_nsec = 0;
 VAR_18->i_atime.tv_nsec = 0;
 FUNC_9(VAR_18)->i_ea_size = 0;
 VAR_18->i_mode = VAR_5 | 0777;
 VAR_18->i_uid = FUNC_3();
 VAR_18->i_gid = FUNC_2();
 VAR_18->i_blocks = 1;
 FUNC_27(VAR_18, 1);
 VAR_18->i_size = FUNC_28(VAR_10);
 FUNC_17(VAR_18);
 VAR_18->i_op = &VAR_7;
 VAR_18->i_data.a_ops = &VAR_6;

 VAR_16 = FUNC_5(VAR_8, VAR_11, VAR_12, &VAR_17);
 if (VAR_16 == 1)
  goto bail2;
 if (VAR_16 == -1) {
  VAR_19 = -VAR_0;
  goto bail2;
 }
 VAR_14->len = VAR_12;
 FUNC_24(VAR_14->name, VAR_11, VAR_12 > 15 ? 15 : VAR_12);
 VAR_14->up = FUNC_1(VAR_8->i_ino);
 FUNC_13(VAR_18, VAR_14, "SYMLINK", VAR_10, FUNC_28(VAR_10));
 FUNC_23(VAR_13);
 FUNC_0(VAR_13);

 FUNC_18(VAR_18);

 FUNC_16(VAR_18);
 FUNC_15(VAR_8);
 FUNC_4(VAR_9, VAR_18);
 FUNC_14(VAR_8->i_sb);
 return 0;
bail2:
 FUNC_19(VAR_18);
bail1:
 FUNC_0(VAR_13);
 FUNC_8(VAR_8->i_sb, VAR_15, 1);
bail:
 FUNC_14(VAR_8->i_sb);
 return VAR_19;
}
