
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct dentry {int dummy; } ;
struct TYPE_4__ {TYPE_1__* head; } ;
struct ceph_mds_request {int r_num_caps; int r_old_inode_drop; TYPE_2__ r_reply_info; int r_inode_drop; void* r_dentry_unless; void* r_dentry_drop; void* r_old_dentry_unless; void* r_old_dentry_drop; int r_req_flags; struct inode* r_parent; struct inode* r_old_dentry_dir; void* r_old_dentry; void* r_dentry; } ;
struct ceph_mds_client {int dummy; } ;
struct ceph_fs_client {struct ceph_mds_client* mdsc; } ;
struct TYPE_3__ {int is_dentry; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (struct ceph_mds_request*) ;
 int FUNC_1 (struct ceph_mds_request*) ;
 int VAR_12 ;
 int FUNC_2 (int ) ;
 struct ceph_mds_request* FUNC_3 (struct ceph_mds_client*,int,int ) ;
 int FUNC_4 (struct ceph_mds_client*,struct inode*,struct ceph_mds_request*) ;
 int FUNC_5 (struct ceph_mds_request*) ;
 int FUNC_6 (struct inode*,struct inode*) ;
 struct ceph_fs_client* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct inode*) ;
 int FUNC_9 (struct dentry*) ;
 int FUNC_10 (struct dentry*,struct dentry*) ;
 scalar_t__ FUNC_11 (struct dentry*) ;
 void* FUNC_12 (struct dentry*) ;
 int FUNC_13 (char*,struct inode*,struct dentry*,struct inode*,struct dentry*) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (int ,int *) ;

__attribute__((used)) static int FUNC_16(struct inode *VAR_13, struct dentry *VAR_14,
         struct inode *VAR_15, struct dentry *VAR_16,
         unsigned int VAR_17)
{
 struct ceph_fs_client *VAR_18 = FUNC_7(VAR_13->i_sb);
 struct ceph_mds_client *VAR_19 = VAR_18->mdsc;
 struct ceph_mds_request *VAR_20;
 int VAR_21 = VAR_4;
 int VAR_22;

 if (VAR_17)
  return -VAR_9;

 if (FUNC_8(VAR_13) != FUNC_8(VAR_15))
  return -VAR_11;
 if (FUNC_8(VAR_13) != VAR_7) {
  if (VAR_13 == VAR_15 && FUNC_8(VAR_13) == VAR_8)
   VAR_21 = VAR_5;
  else
   return -VAR_10;
 }

 if ((VAR_13 != VAR_15) &&
     (!FUNC_6(VAR_13, VAR_15)))
  return -VAR_11;

 FUNC_13("rename dir %p dentry %p to dir %p dentry %p\n",
      VAR_13, VAR_14, VAR_15, VAR_16);
 VAR_20 = FUNC_3(VAR_19, VAR_21, VAR_12);
 if (FUNC_0(VAR_20))
  return FUNC_1(VAR_20);
 FUNC_14(VAR_13);
 VAR_20->r_dentry = FUNC_12(VAR_16);
 VAR_20->r_num_caps = 2;
 VAR_20->r_old_dentry = FUNC_12(VAR_14);
 VAR_20->r_old_dentry_dir = VAR_13;
 VAR_20->r_parent = VAR_15;
 FUNC_15(VAR_6, &VAR_20->r_req_flags);
 VAR_20->r_old_dentry_drop = VAR_1;
 VAR_20->r_old_dentry_unless = VAR_0;
 VAR_20->r_dentry_drop = VAR_1;
 VAR_20->r_dentry_unless = VAR_0;

 VAR_20->r_old_inode_drop = VAR_3 | VAR_2;
 if (FUNC_11(VAR_16)) {
  VAR_20->r_inode_drop =
   FUNC_2(FUNC_9(VAR_16));
 }
 VAR_22 = FUNC_4(VAR_19, VAR_13, VAR_20);
 if (!VAR_22 && !VAR_20->r_reply_info.head->is_dentry) {





  FUNC_10(VAR_14, VAR_16);
 }
 FUNC_5(VAR_20);
 return VAR_22;
}
