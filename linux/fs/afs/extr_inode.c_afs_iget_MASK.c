
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {struct afs_super_info* s_fs_info; } ;
struct key {int dummy; } ;
struct inode {int i_state; int i_flags; } ;
struct afs_vnode {int flags; } ;
struct afs_super_info {int volume; } ;
struct afs_status_cb {int dummy; } ;
struct afs_fid {int unique; int vnode; int vid; } ;
struct afs_iget_data {int volume; struct afs_fid fid; } ;
struct afs_cb_interest {int dummy; } ;


 struct afs_vnode* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct inode* FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,struct inode*,int ,int ,int ) ;
 int FUNC_3 (char*,int ,int ,int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (struct afs_vnode*,struct key*,int,int *) ;
 int FUNC_6 (struct afs_vnode*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (struct afs_vnode*,struct key*,struct afs_cb_interest*,struct afs_vnode*,struct afs_status_cb*) ;
 int FUNC_8 (int ,int *) ;
 struct inode* FUNC_9 (struct super_block*,int ,int ,int ,struct afs_iget_data*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*) ;

struct inode *FUNC_12(struct super_block *VAR_6, struct key *VAR_7,
         struct afs_iget_data *VAR_8,
         struct afs_status_cb *VAR_9,
         struct afs_cb_interest *VAR_10,
         struct afs_vnode *VAR_11)
{
 struct afs_super_info *VAR_12;
 struct afs_vnode *VAR_13;
 struct afs_fid *VAR_14 = &VAR_8->fid;
 struct inode *VAR_15;
 int VAR_16;

 FUNC_3(",{%llx:%llu.%u},,", VAR_14->vid, VAR_14->vnode, VAR_14->unique);

 VAR_12 = VAR_6->s_fs_info;
 VAR_8->volume = VAR_12->volume;

 VAR_15 = FUNC_9(VAR_6, VAR_14->vnode, VAR_5, VAR_4,
        VAR_8);
 if (!VAR_15) {
  FUNC_4(" = -ENOMEM");
  return FUNC_1(-VAR_1);
 }

 FUNC_2("GOT INODE %p { vl=%llx vn=%llx, u=%x }",
        VAR_15, VAR_14->vid, VAR_14->vnode, VAR_14->unique);

 VAR_13 = FUNC_0(VAR_15);


 if (!(VAR_15->i_state & VAR_2)) {
  FUNC_4(" = %p", VAR_15);
  return VAR_15;
 }

 if (!VAR_9) {

  VAR_16 = FUNC_5(VAR_13, VAR_7, 1, ((void*)0));
  if (VAR_16 < 0)
   goto bad_inode;
 } else {
  VAR_16 = FUNC_7(VAR_13, VAR_7, VAR_10, VAR_11,
       VAR_9);
  if (VAR_16 < 0)
   goto bad_inode;
 }

 FUNC_6(VAR_13);


 FUNC_8(VAR_0, &VAR_13->flags);
 VAR_15->i_flags |= VAR_3;
 FUNC_11(VAR_15);
 FUNC_4(" = %p", VAR_15);
 return VAR_15;


bad_inode:
 FUNC_10(VAR_15);
 FUNC_4(" = %d [bad]", VAR_16);
 return FUNC_1(VAR_16);
}
