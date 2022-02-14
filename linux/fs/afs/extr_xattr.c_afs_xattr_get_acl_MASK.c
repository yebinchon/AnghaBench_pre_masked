
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
struct afs_status_cb {int size; int data; } ;
struct afs_fs_cursor {int cb_break; int vnode; } ;
struct afs_acl {int size; int data; } ;
typedef int afs_dataversion_t ;
struct TYPE_3__ {int cell; } ;


 struct afs_vnode* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct key*) ;
 int FUNC_2 (struct key*) ;
 scalar_t__ FUNC_3 (struct afs_fs_cursor*,struct afs_vnode*,struct key*,int) ;
 int FUNC_4 (struct afs_vnode*) ;
 int FUNC_5 (struct afs_fs_cursor*,int ) ;
 int FUNC_6 (struct afs_fs_cursor*) ;
 struct afs_status_cb* FUNC_7 (struct afs_fs_cursor*,struct afs_status_cb*) ;
 struct key* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (struct afs_fs_cursor*) ;
 int FUNC_10 (struct afs_fs_cursor*,struct afs_vnode*,int ,int *,struct afs_status_cb*) ;
 int FUNC_11 (struct key*) ;
 int FUNC_12 (struct afs_status_cb*) ;
 struct afs_status_cb* FUNC_13 (int,int ) ;
 int FUNC_14 (void*,int ,size_t) ;

__attribute__((used)) static int FUNC_15(const struct xattr_handler *VAR_4,
        struct dentry *VAR_5,
        struct inode *VAR_6, const char *VAR_7,
        void *VAR_8, size_t VAR_9)
{
 struct afs_fs_cursor VAR_10;
 struct afs_status_cb *VAR_11;
 struct afs_vnode *VAR_12 = FUNC_0(VAR_6);
 struct afs_acl *VAR_13 = ((void*)0);
 struct key *VAR_14;
 int VAR_15 = -VAR_0;

 VAR_11 = FUNC_13(sizeof(struct afs_status_cb), VAR_3);
 if (!VAR_11)
  goto error;

 VAR_14 = FUNC_8(VAR_12->volume->cell);
 if (FUNC_1(VAR_14)) {
  VAR_15 = FUNC_2(VAR_14);
  goto error_scb;
 }

 VAR_15 = -VAR_2;
 if (FUNC_3(&VAR_10, VAR_12, VAR_14, 1)) {
  afs_dataversion_t VAR_16 = VAR_12->status.data_version;

  while (FUNC_9(&VAR_10)) {
   VAR_10.cb_break = FUNC_4(VAR_12);
   VAR_13 = FUNC_7(&VAR_10, VAR_11);
  }

  FUNC_5(&VAR_10, VAR_10.vnode);
  FUNC_10(&VAR_10, VAR_12, VAR_10.cb_break,
     &VAR_16, VAR_11);
  VAR_15 = FUNC_6(&VAR_10);
 }

 if (VAR_15 == 0) {
  VAR_15 = VAR_13->size;
  if (VAR_9 > 0) {
   if (VAR_13->size <= VAR_9)
    FUNC_14(VAR_8, VAR_13->data, VAR_13->size);
   else
    VAR_15 = -VAR_1;
  }
  FUNC_12(VAR_13);
 }

 FUNC_11(VAR_14);
error_scb:
 FUNC_12(VAR_11);
error:
 return VAR_15;
}
