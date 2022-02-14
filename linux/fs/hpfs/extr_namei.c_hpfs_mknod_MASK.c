
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
struct TYPE_10__ {scalar_t__ tv_nsec; int tv_sec; } ;
struct TYPE_9__ {scalar_t__ tv_nsec; int tv_sec; } ;
struct TYPE_8__ {scalar_t__ tv_nsec; int tv_sec; } ;
struct inode {int i_blocks; int i_sb; int i_ino; scalar_t__ i_size; int i_gid; int i_uid; TYPE_4__ i_atime; TYPE_3__ i_mtime; TYPE_2__ i_ctime; } ;
struct hpfs_dirent {int read_only; int archive; int hidden; void* creation_date; void* read_date; void* write_date; void* fnode; } ;
struct fnode {unsigned int len; void* up; int name; } ;
struct TYPE_7__ {unsigned char* name; unsigned int len; } ;
struct dentry {TYPE_1__ d_name; } ;
struct buffer_head {int dummy; } ;
typedef int fnode_secno ;
typedef int dev_t ;
struct TYPE_12__ {scalar_t__ i_ea_size; int i_parent_dir; int i_dno; } ;
struct TYPE_11__ {int sb_eas; } ;


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
 int FUNC_5 (struct inode*,unsigned char const*,unsigned int,struct hpfs_dirent*) ;
 struct fnode* FUNC_6 (int ,int ,int *,struct buffer_head**) ;
 int FUNC_7 (unsigned char const*,unsigned int*) ;
 int FUNC_8 (int ,int ,int) ;
 TYPE_6__* FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (int ) ;
 TYPE_5__* FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (struct inode*) ;
 int FUNC_16 (struct inode*,int,int ) ;
 int FUNC_17 (struct inode*) ;
 int FUNC_18 (struct inode*) ;
 int FUNC_19 (void*) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (struct buffer_head*) ;
 int FUNC_23 (int ,unsigned char const*,int) ;
 int FUNC_24 (struct hpfs_dirent*,int ,int) ;
 struct inode* FUNC_25 (int ) ;
 int FUNC_26 (struct inode*,int) ;

__attribute__((used)) static int FUNC_27(struct inode *VAR_5, struct dentry *VAR_6, umode_t VAR_7, dev_t VAR_8)
{
 const unsigned char *VAR_9 = VAR_6->d_name.name;
 unsigned VAR_10 = VAR_6->d_name.len;
 struct buffer_head *VAR_11;
 struct fnode *VAR_12;
 fnode_secno VAR_13;
 int VAR_14;
 struct hpfs_dirent VAR_15;
 struct inode *VAR_16 = ((void*)0);
 int VAR_17;
 if ((VAR_17 = FUNC_7(VAR_9, &VAR_10))) return VAR_17==-VAR_2 ? -VAR_1 : VAR_17;
 if (FUNC_12(VAR_5->i_sb)->sb_eas < 2) return -VAR_4;
 FUNC_11(VAR_5->i_sb);
 VAR_17 = -VAR_3;
 VAR_12 = FUNC_6(VAR_5->i_sb, FUNC_9(VAR_5)->i_dno, &VAR_13, &VAR_11);
 if (!VAR_12)
  goto bail;
 FUNC_24(&VAR_15, 0, sizeof VAR_15);
 if (!(VAR_7 & 0222)) VAR_15.read_only = 1;
 VAR_15.archive = 1;
 VAR_15.hidden = VAR_9[0] == '.';
 VAR_15.fnode = FUNC_1(VAR_13);
 VAR_15.creation_date = VAR_15.write_date = VAR_15.read_date = FUNC_1(FUNC_20(VAR_5->i_sb));

 VAR_16 = FUNC_25(VAR_5->i_sb);
 if (!VAR_16)
  goto bail1;

 FUNC_10(VAR_16);
 VAR_16->i_ino = VAR_13;
 FUNC_9(VAR_16)->i_parent_dir = VAR_5->i_ino;
 VAR_16->i_ctime.tv_sec = VAR_16->i_mtime.tv_sec = VAR_16->i_atime.tv_sec = FUNC_21(VAR_5->i_sb, FUNC_19(VAR_15.creation_date));
 VAR_16->i_ctime.tv_nsec = 0;
 VAR_16->i_mtime.tv_nsec = 0;
 VAR_16->i_atime.tv_nsec = 0;
 FUNC_9(VAR_16)->i_ea_size = 0;
 VAR_16->i_uid = FUNC_3();
 VAR_16->i_gid = FUNC_2();
 FUNC_26(VAR_16, 1);
 VAR_16->i_size = 0;
 VAR_16->i_blocks = 1;
 FUNC_16(VAR_16, VAR_7, VAR_8);

 VAR_14 = FUNC_5(VAR_5, VAR_9, VAR_10, &VAR_15);
 if (VAR_14 == 1)
  goto bail2;
 if (VAR_14 == -1) {
  VAR_17 = -VAR_0;
  goto bail2;
 }
 VAR_12->len = VAR_10;
 FUNC_23(VAR_12->name, VAR_9, VAR_10 > 15 ? 15 : VAR_10);
 VAR_12->up = FUNC_1(VAR_5->i_ino);
 FUNC_22(VAR_11);

 FUNC_17(VAR_16);

 FUNC_15(VAR_16);
 FUNC_14(VAR_5);
 FUNC_4(VAR_6, VAR_16);
 FUNC_0(VAR_11);
 FUNC_13(VAR_5->i_sb);
 return 0;
bail2:
 FUNC_18(VAR_16);
bail1:
 FUNC_0(VAR_11);
 FUNC_8(VAR_5->i_sb, VAR_13, 1);
bail:
 FUNC_13(VAR_5->i_sb);
 return VAR_17;
}
