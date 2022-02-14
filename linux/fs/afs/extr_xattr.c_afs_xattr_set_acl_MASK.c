
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xattr_handler {int dummy; } ;
struct key {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_4__ {int data_version; } ;
struct afs_vnode {TYPE_2__ status; TYPE_1__* volume; } ;
struct afs_status_cb {size_t size; int data; } ;
struct afs_fs_cursor {int cb_break; int vnode; } ;
struct afs_acl {size_t size; int data; } ;
typedef int afs_dataversion_t ;
struct TYPE_3__ {int cell; } ;


 struct afs_vnode* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct key*) ;
 int FUNC_2 (struct key*) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (struct afs_fs_cursor*,struct afs_vnode*,struct key*,int) ;
 int FUNC_4 (struct afs_vnode*) ;
 int FUNC_5 (struct afs_fs_cursor*,int ) ;
 int FUNC_6 (struct afs_fs_cursor*) ;
 int FUNC_7 (struct afs_fs_cursor*,struct afs_status_cb*,struct afs_status_cb*) ;
 struct key* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (struct afs_fs_cursor*) ;
 int FUNC_10 (struct afs_fs_cursor*,struct afs_vnode*,int ,int *,struct afs_status_cb*) ;
 int FUNC_11 (struct key*) ;
 int FUNC_12 (struct afs_status_cb*) ;
 struct afs_status_cb* FUNC_13 (int,int ) ;
 struct afs_status_cb* FUNC_14 (int,int ) ;
 int FUNC_15 (int ,void const*,size_t) ;

__attribute__((used)) static int FUNC_16(const struct xattr_handler *VAR_6,
                             struct dentry *VAR_7,
                             struct inode *VAR_8, const char *VAR_9,
                             const void *VAR_10, size_t VAR_11, int VAR_12)
{
 struct afs_fs_cursor VAR_13;
 struct afs_status_cb *VAR_14;
 struct afs_vnode *VAR_15 = FUNC_0(VAR_8);
 struct afs_acl *VAR_16 = ((void*)0);
 struct key *VAR_17;
 int VAR_18 = -VAR_1;

 if (VAR_12 == VAR_5)
  return -VAR_0;

 VAR_14 = FUNC_14(sizeof(struct afs_status_cb), VAR_4);
 if (!VAR_14)
  goto error;

 VAR_16 = FUNC_13(sizeof(*VAR_16) + VAR_11, VAR_3);
 if (!VAR_16)
  goto error_scb;

 VAR_17 = FUNC_8(VAR_15->volume->cell);
 if (FUNC_1(VAR_17)) {
  VAR_18 = FUNC_2(VAR_17);
  goto error_acl;
 }

 VAR_16->size = VAR_11;
 FUNC_15(VAR_16->data, VAR_10, VAR_11);

 VAR_18 = -VAR_2;
 if (FUNC_3(&VAR_13, VAR_15, VAR_17, 1)) {
  afs_dataversion_t VAR_19 = VAR_15->status.data_version;

  while (FUNC_9(&VAR_13)) {
   VAR_13.cb_break = FUNC_4(VAR_15);
   FUNC_7(&VAR_13, VAR_16, VAR_14);
  }

  FUNC_5(&VAR_13, VAR_13.vnode);
  FUNC_10(&VAR_13, VAR_15, VAR_13.cb_break,
     &VAR_19, VAR_14);
  VAR_18 = FUNC_6(&VAR_13);
 }

 FUNC_11(VAR_17);
error_acl:
 FUNC_12(VAR_16);
error_scb:
 FUNC_12(VAR_14);
error:
 return VAR_18;
}
