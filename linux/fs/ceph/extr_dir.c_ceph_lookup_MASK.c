
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int len; int name; } ;
struct inode {TYPE_2__ d_name; int i_sb; } ;
struct dentry {TYPE_2__ d_name; int i_sb; } ;
struct TYPE_7__ {int mask; } ;
struct TYPE_8__ {TYPE_3__ getattr; } ;
struct ceph_mds_request {int r_num_caps; int r_req_flags; struct inode* r_parent; TYPE_4__ r_args; int r_dentry; } ;
struct ceph_mds_client {int dummy; } ;
struct ceph_inode_info {int i_ceph_lock; int i_shared_gen; int i_ceph_flags; } ;
struct ceph_fs_client {TYPE_1__* mount_options; struct ceph_mds_client* mdsc; } ;
struct ceph_dentry_info {int lease_shared_gen; } ;
struct TYPE_5__ {int snapdir_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct inode* FUNC_0 (struct ceph_mds_request*) ;
 struct inode* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct ceph_mds_request*) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_3 (struct ceph_inode_info*,int ,int) ;
 scalar_t__ FUNC_4 (struct ceph_inode_info*) ;
 int FUNC_5 (int *) ;
 struct ceph_dentry_info* FUNC_6 (struct inode*) ;
 struct inode* FUNC_7 (struct ceph_mds_request*,struct inode*,int) ;
 int FUNC_8 (struct ceph_mds_request*,struct inode*,int) ;
 struct ceph_inode_info* FUNC_9 (struct inode*) ;
 struct ceph_mds_request* FUNC_10 (struct ceph_mds_client*,int,int ) ;
 int FUNC_11 (struct ceph_mds_client*,int *,struct ceph_mds_request*) ;
 int FUNC_12 (struct ceph_mds_request*) ;
 struct ceph_fs_client* FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (struct inode*) ;
 scalar_t__ FUNC_15 (struct inode*) ;
 scalar_t__ FUNC_16 (struct ceph_fs_client*,int ) ;
 int FUNC_17 (int) ;
 int FUNC_18 (struct inode*,int *) ;
 scalar_t__ FUNC_19 (struct inode*) ;
 int FUNC_20 (struct inode*) ;
 int FUNC_21 (char*,struct inode*,...) ;
 int FUNC_22 (struct inode*,struct inode*) ;
 int FUNC_23 (int ,int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 scalar_t__ FUNC_26 (int ,int ,int ) ;

__attribute__((used)) static struct dentry *FUNC_27(struct inode *VAR_12, struct dentry *VAR_13,
      unsigned int VAR_14)
{
 struct ceph_fs_client *VAR_15 = FUNC_13(VAR_12->i_sb);
 struct ceph_mds_client *VAR_16 = VAR_15->mdsc;
 struct ceph_mds_request *VAR_17;
 int VAR_18;
 int VAR_19;
 int VAR_20;

 FUNC_21("lookup %p dentry %p '%pd'\n",
      VAR_12, VAR_13, VAR_13);

 if (VAR_13->d_name.len > VAR_10)
  return FUNC_1(-VAR_9);


 if (FUNC_19(VAR_13)) {
  struct ceph_inode_info *VAR_21 = FUNC_9(VAR_12);
  struct ceph_dentry_info *VAR_22 = FUNC_6(VAR_13);

  FUNC_24(&VAR_21->i_ceph_lock);
  FUNC_21(" dir %p flags are %d\n", VAR_12, VAR_21->i_ceph_flags);
  if (FUNC_26(VAR_13->d_name.name,
       VAR_15->mount_options->snapdir_name,
       VAR_13->d_name.len) &&
      !FUNC_22(VAR_12, VAR_13) &&
      FUNC_16(VAR_15, VAR_8) &&
      FUNC_4(VAR_21) &&
      (FUNC_3(VAR_21, VAR_1, 1))) {
   FUNC_25(&VAR_21->i_ceph_lock);
   FUNC_21(" dir %p complete, -ENOENT\n", VAR_12);
   FUNC_18(VAR_13, ((void*)0));
   VAR_22->lease_shared_gen = FUNC_5(&VAR_21->i_shared_gen);
   return ((void*)0);
  }
  FUNC_25(&VAR_21->i_ceph_lock);
 }

 VAR_18 = FUNC_15(VAR_12) == VAR_6 ?
  VAR_4 : VAR_3;
 VAR_17 = FUNC_10(VAR_16, VAR_18, VAR_11);
 if (FUNC_2(VAR_17))
  return FUNC_0(VAR_17);
 VAR_17->r_dentry = FUNC_20(VAR_13);
 VAR_17->r_num_caps = 2;

 VAR_19 = VAR_7 | VAR_0;
 if (FUNC_14(VAR_12))
  VAR_19 |= VAR_2;
 VAR_17->r_args.getattr.mask = FUNC_17(VAR_19);

 VAR_17->r_parent = VAR_12;
 FUNC_23(VAR_5, &VAR_17->r_req_flags);
 VAR_20 = FUNC_11(VAR_16, ((void*)0), VAR_17);
 VAR_20 = FUNC_8(VAR_17, VAR_13, VAR_20);
 VAR_13 = FUNC_7(VAR_17, VAR_13, VAR_20);
 FUNC_12(VAR_17);
 FUNC_21("lookup result=%p\n", VAR_13);
 return VAR_13;
}
