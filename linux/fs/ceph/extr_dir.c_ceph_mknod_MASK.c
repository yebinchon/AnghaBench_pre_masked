
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int umode_t ;
struct inode {int i_sb; } ;
struct dentry {int dummy; } ;
struct TYPE_8__ {TYPE_3__* head; } ;
struct TYPE_5__ {void* rdev; void* mode; } ;
struct TYPE_6__ {TYPE_1__ mknod; } ;
struct ceph_mds_request {int r_num_caps; int r_dentry_drop; TYPE_4__ r_reply_info; int * r_pagelist; int r_dentry_unless; TYPE_2__ r_args; int r_req_flags; struct inode* r_parent; int r_dentry; } ;
struct ceph_mds_client {int dummy; } ;
struct ceph_fs_client {struct ceph_mds_client* mdsc; } ;
struct ceph_acl_sec_ctx {int * pagelist; } ;
typedef int dev_t ;
struct TYPE_7__ {int is_dentry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct ceph_mds_request*) ;
 int FUNC_1 (struct ceph_mds_request*) ;
 int VAR_8 ;
 int FUNC_2 (struct inode*,struct dentry*) ;
 int FUNC_3 (int ,struct ceph_acl_sec_ctx*) ;
 struct ceph_mds_request* FUNC_4 (struct ceph_mds_client*,int ,int ) ;
 int FUNC_5 (struct ceph_mds_client*,struct inode*,struct ceph_mds_request*) ;
 int FUNC_6 (struct ceph_mds_request*) ;
 int FUNC_7 (struct inode*,int *,struct ceph_acl_sec_ctx*) ;
 scalar_t__ FUNC_8 (struct inode*) ;
 int FUNC_9 (struct ceph_acl_sec_ctx*) ;
 struct ceph_fs_client* FUNC_10 (int ) ;
 int FUNC_11 (struct dentry*,int ,struct ceph_acl_sec_ctx*) ;
 scalar_t__ FUNC_12 (struct inode*) ;
 void* FUNC_13 (int ) ;
 int FUNC_14 (struct dentry*) ;
 int FUNC_15 (struct dentry*) ;
 int FUNC_16 (struct dentry*) ;
 int FUNC_17 (char*,struct inode*,struct dentry*,int ,int ) ;
 int FUNC_18 (int ,int *) ;

__attribute__((used)) static int FUNC_19(struct inode *VAR_9, struct dentry *VAR_10,
        umode_t VAR_11, dev_t VAR_12)
{
 struct ceph_fs_client *VAR_13 = FUNC_10(VAR_9->i_sb);
 struct ceph_mds_client *VAR_14 = VAR_13->mdsc;
 struct ceph_mds_request *VAR_15;
 struct ceph_acl_sec_ctx VAR_16 = {};
 int VAR_17;

 if (FUNC_12(VAR_9) != VAR_5)
  return -VAR_7;

 if (FUNC_8(VAR_9)) {
  VAR_17 = -VAR_6;
  goto out;
 }

 VAR_17 = FUNC_7(VAR_9, &VAR_11, &VAR_16);
 if (VAR_17 < 0)
  goto out;
 VAR_17 = FUNC_11(VAR_10, VAR_11, &VAR_16);
 if (VAR_17 < 0)
  goto out;

 FUNC_17("mknod in dir %p dentry %p mode 0%ho rdev %d\n",
      VAR_9, VAR_10, VAR_11, VAR_12);
 VAR_15 = FUNC_4(VAR_14, VAR_3, VAR_8);
 if (FUNC_0(VAR_15)) {
  VAR_17 = FUNC_1(VAR_15);
  goto out;
 }
 VAR_15->r_dentry = FUNC_16(VAR_10);
 VAR_15->r_num_caps = 2;
 VAR_15->r_parent = VAR_9;
 FUNC_18(VAR_4, &VAR_15->r_req_flags);
 VAR_15->r_args.mknod.mode = FUNC_13(VAR_11);
 VAR_15->r_args.mknod.rdev = FUNC_13(VAR_12);
 VAR_15->r_dentry_drop = VAR_2 | VAR_0;
 VAR_15->r_dentry_unless = VAR_1;
 if (VAR_16.pagelist) {
  VAR_15->r_pagelist = VAR_16.pagelist;
  VAR_16.pagelist = ((void*)0);
 }
 VAR_17 = FUNC_5(VAR_14, VAR_9, VAR_15);
 if (!VAR_17 && !VAR_15->r_reply_info.head->is_dentry)
  VAR_17 = FUNC_2(VAR_9, VAR_10);
 FUNC_6(VAR_15);
out:
 if (!VAR_17)
  FUNC_3(FUNC_15(VAR_10), &VAR_16);
 else
  FUNC_14(VAR_10);
 FUNC_9(&VAR_16);
 return VAR_17;
}
