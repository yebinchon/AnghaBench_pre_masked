
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct dentry {int dummy; } ;
struct TYPE_4__ {TYPE_1__* head; } ;
struct ceph_mds_request {int r_num_caps; int r_old_inode_drop; TYPE_2__ r_reply_info; int r_dentry_unless; int r_dentry_drop; int r_req_flags; struct inode* r_parent; void* r_old_dentry; void* r_dentry; } ;
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
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct ceph_mds_request*) ;
 int FUNC_1 (struct ceph_mds_request*) ;
 int VAR_8 ;
 struct ceph_mds_request* FUNC_2 (struct ceph_mds_client*,int ,int ) ;
 int FUNC_3 (struct ceph_mds_client*,struct inode*,struct ceph_mds_request*) ;
 int FUNC_4 (struct ceph_mds_request*) ;
 struct ceph_fs_client* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct inode*) ;
 int FUNC_7 (struct dentry*) ;
 int FUNC_8 (struct dentry*) ;
 int FUNC_9 (struct dentry*,int ) ;
 void* FUNC_10 (struct dentry*) ;
 int FUNC_11 (char*,struct inode*,struct dentry*,struct dentry*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int *) ;

__attribute__((used)) static int FUNC_14(struct dentry *VAR_9, struct inode *VAR_10,
       struct dentry *VAR_11)
{
 struct ceph_fs_client *VAR_12 = FUNC_5(VAR_10->i_sb);
 struct ceph_mds_client *VAR_13 = VAR_12->mdsc;
 struct ceph_mds_request *VAR_14;
 int VAR_15;

 if (FUNC_6(VAR_10) != VAR_6)
  return -VAR_7;

 FUNC_11("link in dir %p old_dentry %p dentry %p\n", VAR_10,
      VAR_9, VAR_11);
 VAR_14 = FUNC_2(VAR_13, VAR_4, VAR_8);
 if (FUNC_0(VAR_14)) {
  FUNC_7(VAR_11);
  return FUNC_1(VAR_14);
 }
 VAR_14->r_dentry = FUNC_10(VAR_11);
 VAR_14->r_num_caps = 2;
 VAR_14->r_old_dentry = FUNC_10(VAR_9);
 VAR_14->r_parent = VAR_10;
 FUNC_13(VAR_5, &VAR_14->r_req_flags);
 VAR_14->r_dentry_drop = VAR_1;
 VAR_14->r_dentry_unless = VAR_0;

 VAR_14->r_old_inode_drop = VAR_3 | VAR_2;
 VAR_15 = FUNC_3(VAR_13, VAR_10, VAR_14);
 if (VAR_15) {
  FUNC_7(VAR_11);
 } else if (!VAR_14->r_reply_info.head->is_dentry) {
  FUNC_12(FUNC_8(VAR_9));
  FUNC_9(VAR_11, FUNC_8(VAR_9));
 }
 FUNC_4(VAR_14);
 return VAR_15;
}
