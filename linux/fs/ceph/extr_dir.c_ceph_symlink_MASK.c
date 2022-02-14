
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct dentry {int dummy; } ;
struct TYPE_4__ {TYPE_1__* head; } ;
struct ceph_mds_request {int r_num_caps; int r_dentry_drop; TYPE_2__ r_reply_info; int r_dentry_unless; int r_dentry; int r_req_flags; struct inode* r_parent; int r_path2; } ;
struct ceph_mds_client {int dummy; } ;
struct ceph_fs_client {struct ceph_mds_client* mdsc; } ;
struct ceph_acl_sec_ctx {int dummy; } ;
struct TYPE_3__ {int is_dentry; } ;


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
 scalar_t__ FUNC_0 (struct ceph_mds_request*) ;
 int FUNC_1 (struct ceph_mds_request*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct inode*,struct dentry*) ;
 struct ceph_mds_request* FUNC_3 (struct ceph_mds_client*,int ,int ) ;
 int FUNC_4 (struct ceph_mds_client*,struct inode*,struct ceph_mds_request*) ;
 int FUNC_5 (struct ceph_mds_request*) ;
 scalar_t__ FUNC_6 (struct inode*) ;
 int FUNC_7 (struct ceph_acl_sec_ctx*) ;
 struct ceph_fs_client* FUNC_8 (int ) ;
 int FUNC_9 (struct dentry*,int,struct ceph_acl_sec_ctx*) ;
 scalar_t__ FUNC_10 (struct inode*) ;
 int FUNC_11 (struct dentry*) ;
 int FUNC_12 (struct dentry*) ;
 int FUNC_13 (char*,struct inode*,struct dentry*,char const*) ;
 int FUNC_14 (char const*,int ) ;
 int FUNC_15 (int ,int *) ;

__attribute__((used)) static int FUNC_16(struct inode *VAR_12, struct dentry *VAR_13,
       const char *VAR_14)
{
 struct ceph_fs_client *VAR_15 = FUNC_8(VAR_12->i_sb);
 struct ceph_mds_client *VAR_16 = VAR_15->mdsc;
 struct ceph_mds_request *VAR_17;
 struct ceph_acl_sec_ctx VAR_18 = {};
 int VAR_19;

 if (FUNC_10(VAR_12) != VAR_5)
  return -VAR_8;

 if (FUNC_6(VAR_12)) {
  VAR_19 = -VAR_6;
  goto out;
 }

 VAR_19 = FUNC_9(VAR_13, VAR_10 | 0777, &VAR_18);
 if (VAR_19 < 0)
  goto out;

 FUNC_13("symlink in dir %p dentry %p to '%s'\n", VAR_12, VAR_13, VAR_14);
 VAR_17 = FUNC_3(VAR_16, VAR_3, VAR_11);
 if (FUNC_0(VAR_17)) {
  VAR_19 = FUNC_1(VAR_17);
  goto out;
 }
 VAR_17->r_path2 = FUNC_14(VAR_14, VAR_9);
 if (!VAR_17->r_path2) {
  VAR_19 = -VAR_7;
  FUNC_5(VAR_17);
  goto out;
 }
 VAR_17->r_parent = VAR_12;
 FUNC_15(VAR_4, &VAR_17->r_req_flags);
 VAR_17->r_dentry = FUNC_12(VAR_13);
 VAR_17->r_num_caps = 2;
 VAR_17->r_dentry_drop = VAR_2 | VAR_0;
 VAR_17->r_dentry_unless = VAR_1;
 VAR_19 = FUNC_4(VAR_16, VAR_12, VAR_17);
 if (!VAR_19 && !VAR_17->r_reply_info.head->is_dentry)
  VAR_19 = FUNC_2(VAR_12, VAR_13);
 FUNC_5(VAR_17);
out:
 if (VAR_19)
  FUNC_11(VAR_13);
 FUNC_7(&VAR_18);
 return VAR_19;
}
