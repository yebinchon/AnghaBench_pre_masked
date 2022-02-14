
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct yfs_acl {int inherit_flag; int num_cleaned; TYPE_4__* vol_acl; TYPE_3__* acl; int flags; } ;
struct xattr_handler {int dummy; } ;
struct key {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_6__ {int data_version; } ;
struct afs_vnode {TYPE_2__ status; TYPE_1__* volume; } ;
struct afs_status_cb {int dummy; } ;
struct afs_fs_cursor {int cb_break; int vnode; } ;
typedef int buf ;
typedef int afs_dataversion_t ;
struct TYPE_8__ {char* data; int size; } ;
struct TYPE_7__ {char* data; int size; } ;
struct TYPE_5__ {int cell; } ;


 struct afs_vnode* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct key*) ;
 int FUNC_2 (struct key*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (struct afs_fs_cursor*,struct afs_vnode*,struct key*,int) ;
 int FUNC_4 (struct afs_vnode*) ;
 int FUNC_5 (struct afs_fs_cursor*,int ) ;
 int FUNC_6 (struct afs_fs_cursor*) ;
 struct key* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct afs_fs_cursor*) ;
 int FUNC_9 (struct afs_fs_cursor*,struct afs_vnode*,int ,int *,struct afs_status_cb*) ;
 int FUNC_10 (struct key*) ;
 int FUNC_11 (struct afs_status_cb*) ;
 void* FUNC_12 (int,int ) ;
 int FUNC_13 (void*,char*,int) ;
 int FUNC_14 (char*,int,char*,int) ;
 scalar_t__ FUNC_15 (char const*,char*) ;
 int FUNC_16 (struct yfs_acl*) ;
 int FUNC_17 (struct afs_fs_cursor*,struct yfs_acl*,struct afs_status_cb*) ;

__attribute__((used)) static int FUNC_18(const struct xattr_handler *VAR_8,
        struct dentry *VAR_9,
        struct inode *VAR_10, const char *VAR_11,
        void *VAR_12, size_t VAR_13)
{
 struct afs_fs_cursor VAR_14;
 struct afs_status_cb *VAR_15;
 struct afs_vnode *VAR_16 = FUNC_0(VAR_10);
 struct yfs_acl *VAR_17 = ((void*)0);
 struct key *VAR_18;
 char VAR_19[16], *VAR_20;
 int VAR_21 = 0, VAR_22, VAR_23 = -VAR_0;

 if (FUNC_15(VAR_11, "acl") == 0)
  VAR_21 = 0;
 else if (FUNC_15(VAR_11, "acl_inherited") == 0)
  VAR_21 = 1;
 else if (FUNC_15(VAR_11, "acl_num_cleaned") == 0)
  VAR_21 = 2;
 else if (FUNC_15(VAR_11, "vol_acl") == 0)
  VAR_21 = 3;
 else
  return -VAR_1;

 VAR_17 = FUNC_12(sizeof(struct yfs_acl), VAR_4);
 if (!VAR_17)
  goto error;

 if (VAR_21 == 0)
  VAR_17->flags |= VAR_6;
 else if (VAR_21 == 3)
  VAR_17->flags |= VAR_7;

 VAR_15 = FUNC_12(sizeof(struct afs_status_cb), VAR_5);
 if (!VAR_15)
  goto error_yacl;

 VAR_18 = FUNC_7(VAR_16->volume->cell);
 if (FUNC_1(VAR_18)) {
  VAR_23 = FUNC_2(VAR_18);
  goto error_scb;
 }

 VAR_23 = -VAR_3;
 if (FUNC_3(&VAR_14, VAR_16, VAR_18, 1)) {
  afs_dataversion_t VAR_24 = VAR_16->status.data_version;

  while (FUNC_8(&VAR_14)) {
   VAR_14.cb_break = FUNC_4(VAR_16);
   FUNC_17(&VAR_14, VAR_17, VAR_15);
  }

  FUNC_5(&VAR_14, VAR_14.vnode);
  FUNC_9(&VAR_14, VAR_16, VAR_14.cb_break,
     &VAR_24, VAR_15);
  VAR_23 = FUNC_6(&VAR_14);
 }

 if (VAR_23 < 0)
  goto error_key;

 switch (VAR_21) {
 case 0:
  VAR_20 = VAR_17->acl->data;
  VAR_22 = VAR_17->acl->size;
  break;
 case 1:
  VAR_20 = VAR_19;
  VAR_22 = FUNC_14(VAR_19, sizeof(VAR_19), "%u", VAR_17->inherit_flag);
  break;
 case 2:
  VAR_20 = VAR_19;
  VAR_22 = FUNC_14(VAR_19, sizeof(VAR_19), "%u", VAR_17->num_cleaned);
  break;
 case 3:
  VAR_20 = VAR_17->vol_acl->data;
  VAR_22 = VAR_17->vol_acl->size;
  break;
 default:
  VAR_23 = -VAR_1;
  goto error_key;
 }

 VAR_23 = VAR_22;
 if (VAR_13 > 0) {
  if (VAR_22 > VAR_13) {
   VAR_23 = -VAR_2;
   goto error_key;
  }
  FUNC_13(VAR_12, VAR_20, VAR_22);
 }

error_key:
 FUNC_10(VAR_18);
error_scb:
 FUNC_11(VAR_15);
error_yacl:
 FUNC_16(VAR_17);
error:
 return VAR_23;
}
