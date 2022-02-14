
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct key {int dummy; } ;
struct iattr {int ia_valid; int ia_file; } ;
struct dentry {int dummy; } ;
struct TYPE_8__ {int data_version; } ;
struct TYPE_6__ {int i_mapping; int i_mode; } ;
struct TYPE_5__ {int vnode; int vid; } ;
struct afs_vnode {TYPE_4__ status; TYPE_3__* volume; TYPE_2__ vfs_inode; TYPE_1__ fid; } ;
struct afs_status_cb {int dummy; } ;
struct afs_fs_cursor {int cb_break; } ;
typedef int afs_dataversion_t ;
struct TYPE_7__ {int cell; } ;


 struct afs_vnode* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (struct key*) ;
 int FUNC_2 (struct key*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*,int ,int ,struct dentry*,int) ;
 int FUNC_5 (char*,...) ;
 scalar_t__ FUNC_6 (struct afs_fs_cursor*,struct afs_vnode*,struct key*,int) ;
 int FUNC_7 (struct afs_vnode*) ;
 int FUNC_8 (struct afs_fs_cursor*,struct afs_vnode*) ;
 int FUNC_9 (struct afs_fs_cursor*) ;
 struct key* FUNC_10 (int ) ;
 int FUNC_11 (struct afs_fs_cursor*,struct iattr*,struct afs_status_cb*) ;
 struct key* FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (struct afs_fs_cursor*) ;
 int FUNC_14 (struct afs_fs_cursor*,struct afs_vnode*,int ,int *,struct afs_status_cb*) ;
 int FUNC_15 (struct dentry*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct key*) ;
 int FUNC_18 (struct afs_status_cb*) ;
 struct afs_status_cb* FUNC_19 (int,int ) ;

int FUNC_20(struct dentry *VAR_9, struct iattr *VAR_10)
{
 struct afs_fs_cursor VAR_11;
 struct afs_status_cb *VAR_12;
 struct afs_vnode *VAR_13 = FUNC_0(FUNC_15(VAR_9));
 struct key *VAR_14;
 int VAR_15 = -VAR_6;

 FUNC_4("{%llx:%llu},{n=%pd},%x",
        VAR_13->fid.vid, VAR_13->fid.vnode, VAR_9,
        VAR_10->ia_valid);

 if (!(VAR_10->ia_valid & (VAR_4 | VAR_2 | VAR_5 | VAR_1 |
    VAR_3))) {
  FUNC_5(" = 0 [unsupported]");
  return 0;
 }

 VAR_12 = FUNC_19(sizeof(struct afs_status_cb), VAR_8);
 if (!VAR_12)
  goto error;


 if (FUNC_3(VAR_13->vfs_inode.i_mode))
  FUNC_16(VAR_13->vfs_inode.i_mapping);

 if (VAR_10->ia_valid & VAR_0) {
  VAR_14 = FUNC_10(VAR_10->ia_file);
 } else {
  VAR_14 = FUNC_12(VAR_13->volume->cell);
  if (FUNC_1(VAR_14)) {
   VAR_15 = FUNC_2(VAR_14);
   goto error_scb;
  }
 }

 VAR_15 = -VAR_7;
 if (FUNC_6(&VAR_11, VAR_13, VAR_14, 0)) {
  afs_dataversion_t VAR_16 = VAR_13->status.data_version;

  if (VAR_10->ia_valid & VAR_4)
   VAR_16++;

  while (FUNC_13(&VAR_11)) {
   VAR_11.cb_break = FUNC_7(VAR_13);
   FUNC_11(&VAR_11, VAR_10, VAR_12);
  }

  FUNC_8(&VAR_11, VAR_13);
  FUNC_14(&VAR_11, VAR_13, VAR_11.cb_break,
     &VAR_16, VAR_12);
  VAR_15 = FUNC_9(&VAR_11);
 }

 if (!(VAR_10->ia_valid & VAR_0))
  FUNC_17(VAR_14);

error_scb:
 FUNC_18(VAR_12);
error:
 FUNC_5(" = %d", VAR_15);
 return VAR_15;
}
