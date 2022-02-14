
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int umode_t ;
struct inode {int i_sb; } ;
struct file {int f_mode; } ;
struct TYPE_10__ {scalar_t__ has_create_ino; TYPE_4__* head; } ;
struct TYPE_7__ {int mask; } ;
struct TYPE_8__ {TYPE_2__ open; } ;
struct TYPE_6__ {scalar_t__ len; } ;
struct dentry {int r_num_caps; int r_dentry_drop; scalar_t__ r_op; int r_fmode; scalar_t__ r_target_inode; int r_err; TYPE_5__ r_reply_info; int r_req_flags; struct inode* r_parent; TYPE_3__ r_args; int * r_pagelist; int r_dentry_unless; int r_dentry; TYPE_1__ d_name; } ;
struct ceph_mds_request {int r_num_caps; int r_dentry_drop; scalar_t__ r_op; int r_fmode; scalar_t__ r_target_inode; int r_err; TYPE_5__ r_reply_info; int r_req_flags; struct inode* r_parent; TYPE_3__ r_args; int * r_pagelist; int r_dentry_unless; int r_dentry; TYPE_1__ d_name; } ;
struct ceph_mds_client {int dummy; } ;
struct ceph_fs_client {struct ceph_mds_client* mdsc; } ;
struct ceph_acl_sec_ctx {int * pagelist; } ;
struct TYPE_9__ {int is_dentry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 scalar_t__ VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 int FUNC_1 (struct dentry*) ;
 struct dentry* FUNC_2 (struct dentry*,struct dentry*,int) ;
 int FUNC_3 (struct inode*,struct dentry*) ;
 int FUNC_4 (struct dentry*,struct dentry*,int) ;
 int FUNC_5 (int ,struct ceph_acl_sec_ctx*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct ceph_mds_client*,struct inode*,struct dentry*) ;
 int FUNC_8 (struct dentry*) ;
 int VAR_15 ;
 int FUNC_9 (struct inode*,int *,struct ceph_acl_sec_ctx*) ;
 int FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (struct inode*) ;
 int FUNC_12 (struct ceph_acl_sec_ctx*) ;
 struct ceph_fs_client* FUNC_13 (int ) ;
 int FUNC_14 (struct dentry*,int ,struct ceph_acl_sec_ctx*) ;
 scalar_t__ FUNC_15 (struct inode*) ;
 int FUNC_16 (int) ;
 scalar_t__ FUNC_17 (struct dentry*) ;
 int FUNC_18 (struct dentry*) ;
 scalar_t__ FUNC_19 (struct dentry*) ;
 scalar_t__ FUNC_20 (struct dentry*) ;
 scalar_t__ FUNC_21 (struct dentry*) ;
 int FUNC_22 (struct dentry*) ;
 int FUNC_23 (char*,...) ;
 int FUNC_24 (struct file*,struct dentry*) ;
 int FUNC_25 (struct file*,struct dentry*,int ) ;
 struct dentry* FUNC_26 (int ,unsigned int,int ) ;
 int FUNC_27 (int ,int *) ;

int FUNC_28(struct inode *VAR_16, struct dentry *VAR_17,
       struct file *VAR_18, unsigned VAR_19, umode_t VAR_20)
{
 struct ceph_fs_client *VAR_21 = FUNC_13(VAR_16->i_sb);
 struct ceph_mds_client *VAR_22 = VAR_21->mdsc;
 struct ceph_mds_request *VAR_23;
 struct dentry *VAR_24;
 struct ceph_acl_sec_ctx VAR_25 = {};
 int VAR_26;
 int VAR_27;

 FUNC_23("atomic_open %p dentry %p '%pd' %s flags %d mode 0%o\n",
      VAR_16, VAR_17, VAR_17,
      FUNC_21(VAR_17) ? "unhashed" : "hashed", VAR_19, VAR_20);

 if (VAR_17->d_name.len > VAR_12)
  return -VAR_9;

 if (VAR_19 & VAR_13) {
  if (FUNC_11(VAR_16))
   return -VAR_8;
  VAR_27 = FUNC_9(VAR_16, &VAR_20, &VAR_25);
  if (VAR_27 < 0)
   return VAR_27;
  VAR_27 = FUNC_14(VAR_17, VAR_20, &VAR_25);
  if (VAR_27 < 0)
   goto out_ctx;
 } else if (!FUNC_17(VAR_17)) {

  return -VAR_10;
 }


 VAR_23 = FUNC_26(VAR_16->i_sb, VAR_19, VAR_20);
 if (FUNC_0(VAR_23)) {
  VAR_27 = FUNC_1(VAR_23);
  goto out_ctx;
 }
 VAR_23->r_dentry = FUNC_22(VAR_17);
 VAR_23->r_num_caps = 2;
 if (VAR_19 & VAR_13) {
  VAR_23->r_dentry_drop = VAR_3 | VAR_0;
  VAR_23->r_dentry_unless = VAR_2;
  if (VAR_25.pagelist) {
   VAR_23->r_pagelist = VAR_25.pagelist;
   VAR_25.pagelist = ((void*)0);
  }
 }

       VAR_26 = VAR_7 | VAR_1;
       if (FUNC_15(VAR_16))
               VAR_26 |= VAR_4;
       VAR_23->r_args.open.mask = FUNC_16(VAR_26);

 VAR_23->r_parent = VAR_16;
 FUNC_27(VAR_6, &VAR_23->r_req_flags);
 VAR_27 = FUNC_7(VAR_22,
       (VAR_19 & (VAR_13|VAR_14)) ? VAR_16 : ((void*)0),
       VAR_23);
 VAR_27 = FUNC_4(VAR_23, VAR_17, VAR_27);
 if (VAR_27)
  goto out_req;

 if ((VAR_19 & VAR_13) && !VAR_23->r_reply_info.head->is_dentry)
  VAR_27 = FUNC_3(VAR_16, VAR_17);

 if (FUNC_17(VAR_17)) {
  VAR_24 = FUNC_2(VAR_23, VAR_17, VAR_27);
  if (FUNC_0(VAR_24))
   VAR_27 = FUNC_1(VAR_24);
 } else {

  VAR_24 = ((void*)0);
 }
 if (VAR_27)
  goto out_req;
 if (VAR_24 || FUNC_20(VAR_17) || FUNC_19(VAR_17)) {

  FUNC_23("atomic_open finish_no_open on dn %p\n", VAR_24);
  VAR_27 = FUNC_24(VAR_18, VAR_24);
 } else {
  FUNC_23("atomic_open finish_open on dn %p\n", VAR_24);
  if (VAR_23->r_op == VAR_5 && VAR_23->r_reply_info.has_create_ino) {
   FUNC_5(FUNC_18(VAR_17), &VAR_25);
   VAR_18->f_mode |= VAR_11;
  }
  VAR_27 = FUNC_25(VAR_18, VAR_17, VAR_15);
 }
out_req:
 if (!VAR_23->r_err && VAR_23->r_target_inode)
  FUNC_10(FUNC_6(VAR_23->r_target_inode), VAR_23->r_fmode);
 FUNC_8(VAR_23);
out_ctx:
 FUNC_12(&VAR_25);
 FUNC_23("atomic_open result=%d\n", VAR_27);
 return VAR_27;
}
