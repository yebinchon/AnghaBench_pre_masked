
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct dentry {int i_sb; } ;
struct TYPE_4__ {TYPE_1__* head; } ;
struct ceph_mds_request {int r_num_caps; TYPE_2__ r_reply_info; int r_inode_drop; int r_dentry_unless; int r_dentry_drop; int r_req_flags; struct inode* r_parent; int r_dentry; } ;
struct ceph_mds_client {int dummy; } ;
struct ceph_fs_client {struct ceph_mds_client* mdsc; } ;
struct TYPE_3__ {int is_dentry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct ceph_mds_request*) ;
 int FUNC_1 (struct ceph_mds_request*) ;
 int VAR_9 ;
 int FUNC_2 (struct inode*) ;
 struct ceph_mds_request* FUNC_3 (struct ceph_mds_client*,int,int ) ;
 int FUNC_4 (struct ceph_mds_client*,struct inode*,struct ceph_mds_request*) ;
 int FUNC_5 (struct ceph_mds_request*) ;
 struct ceph_fs_client* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 struct inode* FUNC_9 (struct inode*) ;
 scalar_t__ FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (char*,struct inode*,struct inode*,struct inode*) ;
 int FUNC_13 (int ,int *) ;

__attribute__((used)) static int FUNC_14(struct inode *VAR_10, struct dentry *VAR_11)
{
 struct ceph_fs_client *VAR_12 = FUNC_6(VAR_10->i_sb);
 struct ceph_mds_client *VAR_13 = VAR_12->mdsc;
 struct inode *VAR_14 = FUNC_9(VAR_11);
 struct ceph_mds_request *VAR_15;
 int VAR_16 = -VAR_8;
 int VAR_17;

 if (FUNC_7(VAR_10) == VAR_7) {

  FUNC_12("rmsnap dir %p '%pd' dn %p\n", VAR_10, VAR_11, VAR_11);
  VAR_17 = VAR_3;
 } else if (FUNC_7(VAR_10) == VAR_6) {
  FUNC_12("unlink/rmdir dir %p dn %p inode %p\n",
       VAR_10, VAR_11, VAR_14);
  VAR_17 = FUNC_10(VAR_11) ?
   VAR_2 : VAR_4;
 } else
  goto out;
 VAR_15 = FUNC_3(VAR_13, VAR_17, VAR_9);
 if (FUNC_0(VAR_15)) {
  VAR_16 = FUNC_1(VAR_15);
  goto out;
 }
 VAR_15->r_dentry = FUNC_11(VAR_11);
 VAR_15->r_num_caps = 2;
 VAR_15->r_parent = VAR_10;
 FUNC_13(VAR_5, &VAR_15->r_req_flags);
 VAR_15->r_dentry_drop = VAR_1;
 VAR_15->r_dentry_unless = VAR_0;
 VAR_15->r_inode_drop = FUNC_2(VAR_14);
 VAR_16 = FUNC_4(VAR_13, VAR_10, VAR_15);
 if (!VAR_16 && !VAR_15->r_reply_info.head->is_dentry)
  FUNC_8(VAR_11);
 FUNC_5(VAR_15);
out:
 return VAR_16;
}
