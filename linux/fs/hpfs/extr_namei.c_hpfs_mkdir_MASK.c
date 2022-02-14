
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int umode_t ;
struct quad_buffer_head {int dummy; } ;
struct TYPE_12__ {scalar_t__ tv_nsec; int tv_sec; } ;
struct TYPE_11__ {scalar_t__ tv_nsec; int tv_sec; } ;
struct TYPE_10__ {scalar_t__ tv_nsec; int tv_sec; } ;
struct inode {int i_ino; int i_mode; int i_blocks; int i_size; int i_sb; int i_gid; int i_uid; int * i_fop; int * i_op; TYPE_4__ i_atime; TYPE_3__ i_mtime; TYPE_2__ i_ctime; } ;
struct hpfs_dirent {int directory; int read_only; int hidden; int first; void* fnode; void* read_date; void* write_date; void* creation_date; } ;
struct TYPE_15__ {TYPE_6__* external; } ;
struct TYPE_13__ {int n_free_nodes; int n_used_nodes; int first_free; } ;
struct fnode {unsigned int len; TYPE_7__ u; TYPE_5__ btree; int flags; void* up; int name; } ;
struct dnode {int root_dnode; void* up; } ;
struct TYPE_9__ {unsigned char* name; unsigned int len; } ;
struct dentry {TYPE_1__ d_name; } ;
struct buffer_head {int dummy; } ;
typedef int fnode_secno ;
typedef int dnode_secno ;
struct TYPE_16__ {int i_dno; int i_parent_dir; scalar_t__ i_ea_size; } ;
struct TYPE_14__ {void* file_secno; void* disk_secno; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct dentry*,struct inode*) ;
 int FUNC_6 (int ,int ) ;
 struct hpfs_dirent* FUNC_7 (int ,struct dnode*,char*,int,int ) ;
 int FUNC_8 (struct inode*,unsigned char const*,unsigned int,struct hpfs_dirent*) ;
 struct dnode* FUNC_9 (int ,int,int*,struct quad_buffer_head*) ;
 struct fnode* FUNC_10 (int ,int,int*,struct buffer_head**) ;
 int FUNC_11 (struct quad_buffer_head*) ;
 int FUNC_12 (unsigned char const*,unsigned int*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (int ,int,int) ;
 TYPE_8__* FUNC_15 (struct inode*) ;
 int FUNC_16 (struct inode*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (struct quad_buffer_head*) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (struct inode*) ;
 int FUNC_21 (struct inode*) ;
 int FUNC_22 (struct inode*) ;
 int FUNC_23 (struct inode*) ;
 int FUNC_24 (struct inode*) ;
 int FUNC_25 (void*) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (int ,int ) ;
 int FUNC_28 (struct buffer_head*) ;
 int FUNC_29 (int ,unsigned char const*,int) ;
 int FUNC_30 (struct hpfs_dirent*,int ,int) ;
 struct inode* FUNC_31 (int ) ;
 int FUNC_32 (struct inode*,int) ;
 int FUNC_33 (int ,int ) ;

__attribute__((used)) static int FUNC_34(struct inode *VAR_8, struct dentry *VAR_9, umode_t VAR_10)
{
 const unsigned char *VAR_11 = VAR_9->d_name.name;
 unsigned VAR_12 = VAR_9->d_name.len;
 struct quad_buffer_head VAR_13;
 struct buffer_head *VAR_14;
 struct hpfs_dirent *VAR_15;
 struct fnode *VAR_16;
 struct dnode *VAR_17;
 struct inode *VAR_18;
 fnode_secno VAR_19;
 dnode_secno VAR_20;
 int VAR_21;
 struct hpfs_dirent VAR_22;
 int VAR_23;
 if ((VAR_23 = FUNC_12(VAR_11, &VAR_12))) return VAR_23==-VAR_2 ? -VAR_1 : VAR_23;
 FUNC_17(VAR_8->i_sb);
 VAR_23 = -VAR_3;
 VAR_16 = FUNC_10(VAR_8->i_sb, FUNC_15(VAR_8)->i_dno, &VAR_19, &VAR_14);
 if (!VAR_16)
  goto bail;
 VAR_17 = FUNC_9(VAR_8->i_sb, VAR_19, &VAR_20, &VAR_13);
 if (!VAR_17)
  goto bail1;
 FUNC_30(&VAR_22, 0, sizeof VAR_22);
 VAR_22.directory = 1;
 if (!(VAR_10 & 0222)) VAR_22.read_only = 1;

 VAR_22.hidden = VAR_11[0] == '.';
 VAR_22.fnode = FUNC_2(VAR_19);
 VAR_22.creation_date = VAR_22.write_date = VAR_22.read_date = FUNC_2(FUNC_26(VAR_8->i_sb));
 VAR_18 = FUNC_31(VAR_8->i_sb);
 if (!VAR_18)
  goto bail2;
 FUNC_16(VAR_18);
 VAR_18->i_ino = VAR_19;
 FUNC_15(VAR_18)->i_parent_dir = VAR_8->i_ino;
 FUNC_15(VAR_18)->i_dno = VAR_20;
 VAR_18->i_ctime.tv_sec = VAR_18->i_mtime.tv_sec = VAR_18->i_atime.tv_sec = FUNC_27(VAR_8->i_sb, FUNC_25(VAR_22.creation_date));
 VAR_18->i_ctime.tv_nsec = 0;
 VAR_18->i_mtime.tv_nsec = 0;
 VAR_18->i_atime.tv_nsec = 0;
 FUNC_15(VAR_18)->i_ea_size = 0;
 VAR_18->i_mode |= VAR_5;
 VAR_18->i_op = &VAR_6;
 VAR_18->i_fop = &VAR_7;
 VAR_18->i_blocks = 4;
 VAR_18->i_size = 2048;
 FUNC_32(VAR_18, 2);
 if (VAR_22.read_only)
  VAR_18->i_mode &= ~0222;

 VAR_21 = FUNC_8(VAR_8, VAR_11, VAR_12, &VAR_22);
 if (VAR_21 == 1)
  goto bail3;
 if (VAR_21 == -1) {
  VAR_23 = -VAR_0;
  goto bail3;
 }
 VAR_16->len = VAR_12;
 FUNC_29(VAR_16->name, VAR_11, VAR_12 > 15 ? 15 : VAR_12);
 VAR_16->up = FUNC_2(VAR_8->i_ino);
 VAR_16->flags |= VAR_4;
 VAR_16->btree.n_free_nodes = 7;
 VAR_16->btree.n_used_nodes = 1;
 VAR_16->btree.first_free = FUNC_1(0x14);
 VAR_16->u.external[0].disk_secno = FUNC_2(VAR_20);
 VAR_16->u.external[0].file_secno = FUNC_2(-1);
 VAR_17->root_dnode = 1;
 VAR_17->up = FUNC_2(VAR_19);
 VAR_15 = FUNC_7(VAR_8->i_sb, VAR_17, "\001\001", 2, 0);
 VAR_15->creation_date = VAR_15->write_date = VAR_15->read_date = FUNC_2(FUNC_26(VAR_8->i_sb));
 if (!(VAR_10 & 0222)) VAR_15->read_only = 1;
 VAR_15->first = VAR_15->directory = 1;

 VAR_15->fnode = FUNC_2(VAR_19);
 FUNC_28(VAR_14);
 FUNC_0(VAR_14);
 FUNC_18(&VAR_13);
 FUNC_11(&VAR_13);
 FUNC_22(VAR_8);
 FUNC_23(VAR_18);

 if (!FUNC_33(VAR_18->i_uid, FUNC_4()) ||
     !FUNC_6(VAR_18->i_gid, FUNC_3()) ||
     VAR_18->i_mode != (VAR_10 | VAR_5)) {
  VAR_18->i_uid = FUNC_4();
  VAR_18->i_gid = FUNC_3();
  VAR_18->i_mode = VAR_10 | VAR_5;
  FUNC_21(VAR_18);
 }
 FUNC_20(VAR_8);
 FUNC_5(VAR_9, VAR_18);
 FUNC_19(VAR_8->i_sb);
 return 0;
bail3:
 FUNC_24(VAR_18);
bail2:
 FUNC_11(&VAR_13);
 FUNC_13(VAR_8->i_sb, VAR_20);
bail1:
 FUNC_0(VAR_14);
 FUNC_14(VAR_8->i_sb, VAR_19, 1);
bail:
 FUNC_19(VAR_8->i_sb);
 return VAR_23;
}
