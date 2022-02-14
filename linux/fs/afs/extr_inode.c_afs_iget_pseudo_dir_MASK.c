
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {struct afs_super_info* s_fs_info; } ;
struct inode {int i_state; int i_mode; int i_flags; scalar_t__ i_generation; scalar_t__ i_blocks; int i_mtime; int i_atime; int i_ctime; int i_gid; int i_uid; int * i_op; int * i_fop; scalar_t__ i_size; int i_ino; } ;
struct afs_vnode {int flags; } ;
struct afs_super_info {TYPE_1__* volume; } ;
struct TYPE_4__ {int vnode; int unique; int vid; } ;
struct afs_iget_data {TYPE_2__ fid; TYPE_1__* volume; int cb_s_break; int cb_v_break; } ;
typedef int atomic_t ;
struct TYPE_3__ {int vid; } ;


 struct afs_vnode* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 struct inode* FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (char*,struct inode*,int ,int ,int,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,...) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct inode*) ;
 struct inode* FUNC_8 (struct super_block*,int,int ,int ,struct afs_iget_data*) ;
 int FUNC_9 (struct inode*,int ) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (struct inode*,int) ;
 int VAR_15 ;
 int FUNC_12 (struct inode*) ;

struct inode *FUNC_13(struct super_block *VAR_16, bool VAR_17)
{
 struct afs_super_info *VAR_18;
 struct afs_vnode *VAR_19;
 struct inode *VAR_20;
 static atomic_t VAR_21;

 struct afs_iget_data VAR_22 = {
  .cb_v_break = 0,
  .cb_s_break = 0,
 };

 FUNC_4("");

 VAR_18 = VAR_16->s_fs_info;
 if (VAR_18->volume) {
  VAR_22.volume = VAR_18->volume;
  VAR_22.fid.vid = VAR_18->volume->vid;
 }
 if (VAR_17) {
  VAR_22.fid.vnode = 1;
  VAR_22.fid.unique = 1;
 } else {
  VAR_22.fid.vnode = FUNC_6(&VAR_21);
  VAR_22.fid.unique = 0;
 }

 VAR_20 = FUNC_8(VAR_16, VAR_22.fid.vnode,
        VAR_13, VAR_14,
        &VAR_22);
 if (!VAR_20) {
  FUNC_5(" = -ENOMEM");
  return FUNC_2(-VAR_2);
 }

 FUNC_3("GOT INODE %p { ino=%lu, vl=%llx, vn=%llx, u=%x }",
        VAR_20, VAR_20->i_ino, VAR_22.fid.vid, VAR_22.fid.vnode,
        VAR_22.fid.unique);

 VAR_19 = FUNC_0(VAR_20);


 FUNC_1(!(VAR_20->i_state & VAR_5));

 VAR_20->i_size = 0;
 VAR_20->i_mode = VAR_7 | VAR_8 | VAR_9;
 if (VAR_17) {
  VAR_20->i_op = &VAR_12;
  VAR_20->i_fop = &VAR_15;
 } else {
  VAR_20->i_op = &VAR_11;
 }
 FUNC_11(VAR_20, 2);
 VAR_20->i_uid = VAR_4;
 VAR_20->i_gid = VAR_3;
 VAR_20->i_ctime = VAR_20->i_atime = VAR_20->i_mtime = FUNC_7(VAR_20);
 VAR_20->i_blocks = 0;
 FUNC_9(VAR_20, 0);
 VAR_20->i_generation = 0;

 FUNC_10(VAR_1, &VAR_19->flags);
 if (!VAR_17) {
  FUNC_10(VAR_0, &VAR_19->flags);
  VAR_20->i_flags |= VAR_6;
 }

 VAR_20->i_flags |= VAR_10;
 FUNC_12(VAR_20);
 FUNC_5(" = %p", VAR_20);
 return VAR_20;
}
