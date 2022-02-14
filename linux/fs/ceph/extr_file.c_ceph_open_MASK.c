
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; int i_mode; } ;
struct file {int f_flags; int f_mode; struct ceph_file_info* private_data; } ;
struct ceph_mds_request {int r_num_caps; int r_fmode; struct inode* r_inode; } ;
struct ceph_mds_client {int dummy; } ;
struct ceph_inode_info {int i_snap_caps; int i_ceph_lock; scalar_t__ i_auth_cap; } ;
struct ceph_fs_client {struct ceph_mds_client* mdsc; } ;
struct ceph_file_info {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct ceph_mds_request*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct ceph_mds_request*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct ceph_inode_info*,int *) ;
 int FUNC_4 (struct ceph_inode_info*,int) ;
 int FUNC_5 (struct ceph_inode_info*,int) ;
 scalar_t__ FUNC_6 (struct ceph_inode_info*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct ceph_inode_info*,int ,int *) ;
 int FUNC_10 (int) ;
 int FUNC_11 (struct inode*,struct file*,int) ;
 struct ceph_inode_info* FUNC_12 (struct inode*) ;
 int FUNC_13 (struct ceph_mds_client*,int *,struct ceph_mds_request*) ;
 int FUNC_14 (struct ceph_mds_request*) ;
 struct ceph_fs_client* FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (struct inode*) ;
 int FUNC_17 (struct inode*) ;
 int FUNC_18 (char*,...) ;
 int FUNC_19 (struct inode*) ;
 struct ceph_mds_request* FUNC_20 (int ,int,int ) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;

int FUNC_23(struct inode *VAR_8, struct file *VAR_9)
{
 struct ceph_inode_info *VAR_10 = FUNC_12(VAR_8);
 struct ceph_fs_client *VAR_11 = FUNC_15(VAR_8->i_sb);
 struct ceph_mds_client *VAR_12 = VAR_11->mdsc;
 struct ceph_mds_request *VAR_13;
 struct ceph_file_info *VAR_14 = VAR_9->private_data;
 int VAR_15;
 int VAR_16, VAR_17, VAR_18;

 if (VAR_14) {
  FUNC_18("open file %p is already opened\n", VAR_9);
  return 0;
 }


 VAR_16 = VAR_9->f_flags & ~(VAR_5|VAR_7);
 if (FUNC_2(VAR_8->i_mode))
  VAR_16 = VAR_6;

 FUNC_18("open inode %p ino %llx.%llx file %p flags %d (%d)\n", VAR_8,
      FUNC_17(VAR_8), VAR_9, VAR_16, VAR_9->f_flags);
 VAR_17 = FUNC_10(VAR_16);
 VAR_18 = FUNC_8(VAR_17);


 if (FUNC_16(VAR_8) != VAR_1 && (VAR_9->f_mode & VAR_4))
  return -VAR_3;


 if (FUNC_16(VAR_8) == VAR_2) {
  FUNC_21(&VAR_10->i_ceph_lock);
  FUNC_5(VAR_10, VAR_17);
  FUNC_22(&VAR_10->i_ceph_lock);
  return FUNC_11(VAR_8, VAR_9, VAR_17);
 }






 FUNC_21(&VAR_10->i_ceph_lock);
 if (FUNC_6(VAR_10) &&
     (((VAR_17 & VAR_0) == 0) || VAR_10->i_auth_cap)) {
  int VAR_19 = FUNC_4(VAR_10, 1);
  int VAR_20 = FUNC_3(VAR_10, ((void*)0));

  FUNC_18("open %p fmode %d want %s issued %s using existing\n",
       VAR_8, VAR_17, FUNC_7(VAR_18),
       FUNC_7(VAR_20));
  FUNC_5(VAR_10, VAR_17);
  FUNC_22(&VAR_10->i_ceph_lock);


  if ((VAR_20 & VAR_18) != VAR_18 &&
      (VAR_19 & VAR_18) != VAR_18 &&
      FUNC_16(VAR_8) != VAR_2)
   FUNC_9(VAR_10, 0, ((void*)0));

  return FUNC_11(VAR_8, VAR_9, VAR_17);
 } else if (FUNC_16(VAR_8) != VAR_1 &&
     (VAR_10->i_snap_caps & VAR_18) == VAR_18) {
  FUNC_5(VAR_10, VAR_17);
  FUNC_22(&VAR_10->i_ceph_lock);
  return FUNC_11(VAR_8, VAR_9, VAR_17);
 }

 FUNC_22(&VAR_10->i_ceph_lock);

 FUNC_18("open fmode %d wants %s\n", VAR_17, FUNC_7(VAR_18));
 VAR_13 = FUNC_20(VAR_8->i_sb, VAR_16, 0);
 if (FUNC_0(VAR_13)) {
  VAR_15 = FUNC_1(VAR_13);
  goto out;
 }
 VAR_13->r_inode = VAR_8;
 FUNC_19(VAR_8);

 VAR_13->r_num_caps = 1;
 VAR_15 = FUNC_13(VAR_12, ((void*)0), VAR_13);
 if (!VAR_15)
  VAR_15 = FUNC_11(VAR_8, VAR_9, VAR_13->r_fmode);
 FUNC_14(VAR_13);
 FUNC_18("open result=%d on %llx.%llx\n", VAR_15, FUNC_17(VAR_8));
out:
 return VAR_15;
}
